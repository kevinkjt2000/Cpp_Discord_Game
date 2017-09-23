#include <iostream>
#include <string>

#include "player.h"

template<typename T>
T prompt(std::string message) {
    std::cout << message;
    T value;
    std::cin >> value;
    return value;
}
int main() {

    std::string name = prompt<std::string>("Enter player name: ");
    player p(name);
    std::cout << "Wecome " << p.getName() << std::endl;
    return 0;
}
