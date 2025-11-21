// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; // lacks the 'f i.e. 123.45', therefore this is a double constant, however if it was -123.45 the double constant would be implicitly converted to float.

    sprite_x = target_x; // sprite_x is an int so the assignment will convert the float to an int and truncate the decimal points (i.e. -123)

    player_x = sprite_x; // this will cause issues due to the twos complement issues.

    std::cout << "target_x value: " << target_x << std::endl;
    std::cout << "sprite_x value: " << sprite_x << std::endl;
    std::cout << "player_x value: " << player_x << std::endl;
    std::cout << "player_x value: " << static_cast<int32_t>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
