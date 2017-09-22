#pragma once

class enemy // needs implementation
{
  public:
    unsigned int getHealth();
    void setHealth(const unsigned int newHealth);
  private:
    unsigned int health;
};
