#include <iostream>
#include <vector>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

int main() {

    Mario mario;      // Instanciate Mario
    Yoshi yoshi(5);   // Instanciate Yoshi with 5 crests

    std::vector<Character*> characters;  // Vector to store pointers to Character objects
    characters.push_back(&mario);        // Add object "mario" address
    characters.push_back(&yoshi);        // Add object "yoshi" address

    for (auto* character : characters) {                                
        
        std::cout << "Character: " << character->WhatAmI() << '\n';                        // Returns character

        character->Accelerate();
        character->Accelerate();
        character->Accelerate();
        std::cout << "Speed after three accelerations: " << character->speed() << '\n';    // Test acceleration
    }

    return 0;
}
