#include "Player.h"

UInt Player::GetHealth() const
{
	return health;
}

void Player::SetHealth(const UInt & newHealth)
{
	health = newHealth;
}

String Player::GetName() const
{
	return name;
}

void Player::SetName(const String & newName)
{
	name = newName;
}
