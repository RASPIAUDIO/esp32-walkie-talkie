
# Overview

THis is of fork from the Atomic14 project adapted for the Raspiaudio ESP MUSE PROTO board it could be purchased here raspiaudio.com/muse
You do not need external components or wire as the board includes a built-in speaker and microphone, an external battery could be added.

By default it is configured to use the ESPRESSIF protocol call ESPNOW so it does not requires any wifi router so it could be used outside.
With the test I have made I could only achieve 50m range, this is not great I think it could be improved but I have not spent the time yet to do it.


[demo video](https://youtu.be/eW-6VS1XR2Y)


# Setup

Everything is configured from the `src/config.h` file. To use UDP Broadcast comment out the line:

```
#define USE_ESP_NOW
```

Make sure you update the WiFi SSID and Password:

```
// WiFi credentials
#define WIFI_SSID << YOUR_SSID >>
#define WIFI_PSWD << YOUR_PASSWORD >>
```

The pins for the microphone and the amplifier board are all setup in the same `config.h` file.

# Building and Running

I'm using PlatformIO for this project so you will need to have that installed. Open up the project and connect your ESP32. You should be able to just hit build and run.

Obviously, you'll need two ESP32 boards and components to do anything :)

#useage

to talk press the IO0 button, then release, of course you need 2 of them...
