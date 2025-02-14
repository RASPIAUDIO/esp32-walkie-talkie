// WiFi credentials
#define WIFI_SSID "wifilr"
#define WIFI_PSWD "casanice"

// are you using an I2S microphone - comment this out if you want to use an analog mic and ADC input
#define USE_I2S_MIC_INPUT

// I2S Microphone Settings

// Which channel is the I2S microphone on? I2S_CHANNEL_FMT_ONLY_LEFT or I2S_CHANNEL_FMT_ONLY_RIGHT
// Generally they will default to LEFT - but you may need to attach the L/R pin to GND
#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// #define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_RIGHT
#define I2S_MIC_SERIAL_CLOCK GPIO_NUM_5
#define I2S_MIC_LEFT_RIGHT_CLOCK GPIO_NUM_25
#define I2S_MIC_SERIAL_DATA GPIO_NUM_35

// Analog Microphone Settings - ADC1_CHANNEL_7 is GPIO35
#define ADC_MIC_CHANNEL ADC1_CHANNEL_7

// speaker settings
#define I2S_SPEAKER_SERIAL_CLOCK GPIO_NUM_5
#define I2S_SPEAKER_LEFT_RIGHT_CLOCK GPIO_NUM_25
#define I2S_SPEAKER_SERIAL_DATA GPIO_NUM_26

// transmit button
#define GPIO_TRANSMIT_BUTTON 0

// Which transport do you want to use? ESP_NOW or UDP?
// comment out this line to use UDP
#define USE_ESP_NOW
// Output power enable 
#define PW GPIO_NUM_21