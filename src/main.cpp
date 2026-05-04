#include "main.h"

int main() {
    auto hello_world = HelloWorld::create();
    hello_world->set_my_label("Hello from C++");
    // Show the window and spin the event loop until the window is closed.
    hello_world->run();
    return 0;
}
