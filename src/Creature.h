#pragma once
#include "Types.h"

class Creature {
protected:
	UInt health;
	Creature() : health{} {}
	virtual UInt GetHealth() const = 0;
	virtual void SetHealth(const UInt& newHealth) = 0;
};

class NameableCreature : virtual protected Creature {
protected:
	String name;
	NameableCreature() : name{} {}
	virtual String GetName() const = 0;
	virtual void SetName(const String& newName) = 0;
};