//
//  fib.cpp
//  homework_1
//
//  Created by Izaak Lofgren on 1/23/18.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    
    // Declare variables for the last two fib numbers and the latest one
    int f1 = 1;
    int f2 = 1;
    int f3 = 2;
    
    // Print the first two numbers of the sequence
    std::cout << 1 << std::endl;
    std::cout << 1 << std::endl;
    
    // Main loop running through all 25
    for(int i = 1; i <= 25; i++) {
        f3 = f1 + f2;
        f2 = f3;
        f1 = f3 - f1;
        std::cout << f3 << std::endl; // Prints the latest number of the sequence
    }
    
    return 0;
}
