#include <iostream>
#include <string>

std::string greeting(const std::string& who) {
    return "Hello, " + who + "!";
}

int main() {
    std::cout << greeting("World") << "\n";
    return 0;
}
