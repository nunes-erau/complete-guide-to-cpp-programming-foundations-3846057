// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT = 4;

    int enemies[LEVEL_COUNT];
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;
    
    std::cout << "enemies[0] = " << enemies[0] << std::endl;
    std::cout << "enemies[1] = " << enemies[1] << std::endl;
    std::cout << "enemies[2] = " << enemies[2] << std::endl;
    std::cout << "enemies[3] = " << enemies[3] << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "levelDifficulty[0] = " << levelDifficulty[0] << std::endl;
    std::cout << "levelDifficulty[1] = " << levelDifficulty[1] << std::endl;
    std::cout << "levelDifficulty[2] = " << levelDifficulty[2] << std::endl;
    std::cout << "levelDifficulty[3] = " << levelDifficulty[3] << std::endl;   


    std::cout << std::endl << std::endl;
    return 0;
}
