#include "Mario.h"
#include <iostream>

std::string Mario::WhatAmI() const {       // Overrides pure virtual function
    return "Mario";                        // Returns string "Mario"
}

Mario::~Mario() = default;