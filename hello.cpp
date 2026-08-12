#include <iostream>
#include <string>

#ifndef APP_VERSION
#define APP_VERSION "0.0.0"
#endif

std::string greeting(const std::string& who) {
    return "Hello, " + who + "!";
}

int main() {
    std::cout << greeting("World") << "\n";
    std::cout << "version " << APP_VERSION << "\n";
    return 0;
}
