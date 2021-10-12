#!/bin/sh
set -e
emcc -O3 main.c -o main.wasm --no-entry
npx static-server --index index.htm --port 8888
