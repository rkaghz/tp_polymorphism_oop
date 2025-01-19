#include "Yoshi.h"
#include <iostream>

Yoshi::Yoshi(int crests) {            // Constructor
    crests_ = new int(crests);        // Allocates memory in the heap to store crests
}


Yoshi::~Yoshi() {                    // Destructor
    delete crests_;                  // Releases the memory allocated for crests
}

void Yoshi::Accelerate() {          // Override function -> Increments speed_ by 2 -> up to max_speed_

    speed_ += 2;                    // Increases speed_ by 2 

    if (speed_ > max_speed_) {      // Regulates speed_ to never exceed max_speed_
        speed_ = max_speed_;
    }
}

/*
std::string Yoshi::WhatAmI() const {                      // Override pure virtual function
        return "Yoshi";                                   // Return string "Yoshi"
}
*/

std::string Yoshi::WhatAmI() const {                      // Override pure virtual function
    return std::to_string(*crests_) + " crested Yoshi";   // Returns a string with the number of crests
}
