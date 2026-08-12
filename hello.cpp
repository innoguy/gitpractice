#include <iostream>
#include <string>

std::string greeting(const std::string& who) {
    return "Hello, " + who + "!";
}

std::string farewell(const std::string& who) {
    return "Goodbye, " + who + "!";
}

int main() {
    std::cout << greeting("World") << "\n";
    std::cout << farewell("World") << "\n";
    return 0;
}
