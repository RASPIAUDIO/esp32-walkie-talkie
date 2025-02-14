
#include <Arduino.h>
#include <FreeRTOS.h>
#include <driver/i2s.h>
#include "DACOutput.h"

void DACOutput::start(OutputBuffer *output_buffer)
{
    Serial.println("Starting DAC output");
    // i2s config for writing both channels of I2S
    i2s_config_t i2s_config = {
        .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_TX | I2S_MODE_DAC_BUILT_IN),
        .sample_rate = 16000,
        .bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
        .channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT,
        .communication_format = (i2s_comm_format_t)(I2S_COMM_FORMAT_I2S_MSB),
        .intr_alloc_flags = ESP_INTR_FLAG_LEVEL1,
        .dma_buf_count = 2,
        .dma_buf_len = 1024,
        .use_apll = false,
        .tx_desc_auto_clear = true,
        .fixed_mclk = 0};
    //install and start i2s driver
    i2s_driver_install(I2S_NUM_0, &i2s_config, 4, &m_i2s_queue);
    // enable the DAC channels
    i2s_set_dac_mode(I2S_DAC_CHANNEL_RIGHT_EN);
    // clear the DMA buffers
    i2s_zero_dma_buffer(I2S_NUM_0);
    // start sending samples
    Output::start(I2S_NUM_0, output_buffer);
}
