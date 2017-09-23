#include "Player.h"
#include <regex>
#include <iostream>

int main() {
	std::regex player_name_regex(".{2,}"); // up to you to be set
	String input;
	std::cout << "Enter your name (at least two ANY characters): ";
	std::cin >> input;
	if (std::regex_match(input, player_name_regex)) {
		std::cout << "Success! name seems valid!\n";
		Player player(100, input);
		std::cout << "Player name: " << player.GetName() << "\n";
		std::cout << "Player Health: " << player.GetHealth() << "\n";
	}
	else
	{
		std::cout << "Failure! name doesn't seem valid!\n";
	}

	getchar();
	return 0;
}
