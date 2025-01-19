#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {

    protected:                         

        float speed_;                             // Current speed of the character
        static const float max_speed_;            // Maximum speed 
    
    public:

        Character();                                              // Default constructor
        virtual void Accelerate();                                // Increments "speed_" by 1 -> up to "max_speed_"
        void Break();                                             // Decrements "speed_" by 1 -> down to 0
        inline auto speed() const { return speed_; }              // Inline getter for speed_
        inline auto max_speed() const { return max_speed_; }      // Inline getter for max_speed_

        virtual ~Character();                         // Destructor
        virtual std::string WhatAmI() const = 0;      // Pure virtual function

};

#endif