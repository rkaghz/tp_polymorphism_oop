#ifndef MARIO_H
#define MARIO_H

#include "Character.h"
#include <string>

class Mario : public Character {                     // Derived class of abstract base class Character
    
    public:
    
        Mario() {}                                   // Default constructor 
        ~Mario();                                    // Destructor 

        virtual std::string WhatAmI() const override;       // Override pure virtual function
        
};

#endif
