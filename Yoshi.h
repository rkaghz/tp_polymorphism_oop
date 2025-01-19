#ifndef YOSHI_H
#define YOSHI_H

#include "Character.h"
#include <string>

class Yoshi : public Character {         // Derived class of abstract base class Character

private:               

    int* crests_;                        // Pointer to store the address of the allocated memory for crests

public:

    Yoshi( int crests = 0 );             // Default constructor with arguments crests initialized to 0
    ~Yoshi();                            // Destructor 

    virtual void Accelerate() override;                // Override virtual function
    virtual std::string WhatAmI() const override;      // Override pure virtual function

};

#endif