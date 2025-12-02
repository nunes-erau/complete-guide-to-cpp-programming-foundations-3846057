// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

# include <vector>
#include <iostream>
#include <string>

int main(){

    std::vector<std::string> checkpoints = {"Matthew", "Mark", "Luke"};

    checkpoints.push_back("John");

    std::cout << "The number of checkpoints are: " << checkpoints.size() << std::endl;

    std::cout << "Checkpoint 3 is " << checkpoints[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
