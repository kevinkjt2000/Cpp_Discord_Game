#pragma once

#include <string>

class player{
 public:
  std::string getName();
  void setName(const std::string& newName);
  unsigned int getHealth();
  void setHealth(const unsigned int newHealth);
 private:
  std::string name;
  unsigned int health;
};
