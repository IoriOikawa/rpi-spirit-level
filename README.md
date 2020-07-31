# rpi-spirit-level: an implementation on SenseHat

This project turns your Raspberry Pi into a handy spirit level with adjustable sensitivity.

## Hardware Requirements

- A Raspberry Pi
- An official [Sense HAT by Raspberry](https://www.raspberrypi.org/products/sense-hat/)
- A way to get access to the Raspberry Pi (usually ethernet or Wifi)

The project is tested on Raspberry Pi 3 Model B V1.2 with Sense HAT Version 1.0.
This should work on Pi 3 and the models before.
However, as for the potential compatibility issue between Sense HAT and 64-bit Raspbian, you may **not** be able to run it on Pi 4 with 64-bit system.


## Software Requirements

You need the followings on your Raspberry Pi:

- `sense-hat` - For operating your Sense HAT
- `git` - For downloading the source code
- `gcc` - For compiling the source code

Other dependencies may be required. If you find the list incomplete, please report an issue.

## Installation

On Raspberry Pi, run:

- Get source code:

    ```bash
    git clone --depth=1 https://github.com/iorioikawa/rpi-spirit-level.git
    cd rpi-spirit-level
    ```

- Compile the code via `gcc`:

    ```bash
    gcc \
        -I ./R2020a/extern/include/ \
        -I ./R2020a/simulink/include/ \
        -I ./R2020a/rtw/c/src/ \
        -I ./iorioikawa/Documents/MATLAB/SupportPackages/R2020a/toolbox/target/shared/svd/include/ \
        -I ./iorioikawa/Documents/MATLAB/SupportPackages/R2020a/toolbox/realtime/targets/raspi/server/ \
        -I ./iorioikawa/rpi_grt_rtw/ \
        ./iorioikawa/rpi_grt_rtw/rpi.c \
        ./iorioikawa/Documents/MATLAB/SupportPackages/R2020a/toolbox/realtime/targets/raspi/server/*.c \
        ./iorioikawa/Documents/MATLAB/SupportPackages/R2020a/toolbox/target/supportpackages/raspberrypi/src/MW_I2C.c \
        ./rpi.c \
        -o ./rpi.elf -lm -O3
    ```

- Run and have fun:

    ```bash
    ./rpi.elf
    ```

## Usage

- You may see the white-lit LEDs which indicate the bubble in the spirit level.
- Pull the joystick towards different directions to change the 'liquidity' (sensitivity) of the spirit level. Press the joystick to reset it.
- This spirit level is kind of 'shock proof'. You may try it with surfaces with vibration.
