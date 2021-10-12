#include <emscripten/emscripten.h>

static int counter = 1;

EMSCRIPTEN_KEEPALIVE int inc() {
  counter++;
  return counter;
}
