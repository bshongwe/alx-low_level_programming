#!/bin/bash
wget -P .. wget -P .. https://github.com/bshongwe/alx-low_level_programming/blob/9a12f7cae8ee50ba0bdc81ade444b760bf7006a6/0x18-dynamic_libraries/lib-jackpot.so
export LD_PRELOAD="$PWD/../lib-jackpot.so"
