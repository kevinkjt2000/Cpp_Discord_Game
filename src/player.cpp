#include "player.h"

player::player(const std::string &playername)
{
    name = playername;
}

std::string player::getName()
{
  return name;
} // needs a new line here
void player::setName(const std::string& newName)
{
  name = newName;
} // needs rest of implementations below
