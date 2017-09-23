#include "Enemy.h"

UInt Enemy::GetHealth() const
{
	return health;
}

void Enemy::SetHealth(const UInt & newHealth)
{
	health = newHealth;
}
