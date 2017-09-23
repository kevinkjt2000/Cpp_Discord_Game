#pragma once

#include "Creature.h"

class Player : virtual protected NameableCreature{
public:
	Player() { }
	explicit Player(const UInt newHealth, const String& newName) { health = newHealth; name = newName; }
	virtual UInt GetHealth() const override final;
	virtual void SetHealth(const UInt& newHealth) override final;
	virtual String GetName() const override final;
	virtual void SetName(const String& newName) override final;
};
