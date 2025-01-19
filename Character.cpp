#include "Character.h"

Character::Character(){                    // Initializes speed_ to 0
	speed_ = 0;
}

const float Character::max_speed_ = 10;   // Initializes max_speed_ to 10

void Character::Accelerate() {     // Increments speed_ by 1 -> up to max_speed_

    speed_ += 1;                   // Increments speed_ by 1 

    if (speed_ > max_speed_) {     // Regulates speed_ to never exceed max_speed_
        speed_ = max_speed_;
    }
}

void Character::Break() {          // Decrements speed_ by 1 -> down to 0

    speed_ -= 1;                   // Decrements speed_ by 1

    if (speed_ < 0) {              // Regulates speed_ to never decrease lower than 0
        speed_ = 0;
    }
}

Character::~Character() = default;