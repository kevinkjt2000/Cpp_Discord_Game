#pragma once
#include "Creature.h"

class Enemy : protected Creature {
public:
	virtual UInt GetHealth() const override final;
	virtual void SetHealth(const UInt& newHealth) override final;
};
