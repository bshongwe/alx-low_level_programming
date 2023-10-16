#!/bin/bash
wget -P .. wget -P .. https://github.com/bshongwe/alx-low_level_programming/blob/0adbd5742e552ccb583c1ceccc0276d89f7a2a36/0x18-dynamic_libraries/libgiga.so 
export LD_PRELOAD="$PWD/../libgiga.so"
