#!/bin/bash

g++ main.cpp -o snake_game.exe -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    ./snake_game.exe
else
    echo "Compilation failed."
fi