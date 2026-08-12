#include <iostream>
#include <string>

#ifndef APP_VERSION
#define APP_VERSION "0.0.0"
#endif

std::string greeting(const std::string& who) {
    return "Hello, " + who + "!";
}

std::string farewell(const std::string& who) {
    return "Goodbye, " + who + "!";
}

int main() {
    std::cout << greeting("World") << "\n";
    std::cout << farewell("World") << "\n";
    std::cout << "hello version " << APP_VERSION << "\n";
    return 0;
}
