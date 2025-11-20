// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name:" << std::flush;
    std::cin >> name; // cin only works for single words - for words with spaces there is another function for this
    std::cout << "Name entered: " << name << "! " << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}