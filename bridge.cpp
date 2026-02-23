#include <emscripten.h>
#include <iostream>

extern "C" {
    // This function can be called from your Website's JavaScript
    EMSCRIPTEN_KEEPALIVE
    void send_input_to_game(int x, int y) {
        // Here is where you would eventually translate 
        // a mouse click into an Android Touch Event
        std::cout << "Input received at: " << x << "," << y << std::endl;
    }
}
