#pragma once
#include <vector>
#include <array>
#include "DurationEffect.h"
#include "CharacterAttributes.h"
#include "Item.h"

class Character
{
	using duration = unsigned int;

public:
	Character(std::array<const CharacterAttributes, 8> baseAttributes);

private:
	void updateDurationEffects();

	const std::array<const CharacterAttributes, 8> baseAttributes;  // Position in array specifies level.
	std::vector<DurationEffect> durationEffects;  
	std::array<Item, 4> items;

	const static std::array<unsigned int, 7> experienceForLevel;

	unsigned int level = 0;
	unsigned int experience = 0;

};
