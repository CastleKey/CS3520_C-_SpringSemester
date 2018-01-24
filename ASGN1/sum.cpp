//
//  sum.cpp
//  sum
//
//  Created by Izaak Lofgren on 1/23/18.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {

    // Declare variables
    int sum = 0;
    int adder = 0;
    bool stop = true;

    // Main loop for each input
    while(stop) {
        std::cin >> adder;
        if (std::cin.eof()) {  // determines if the input was EOF
            stop = false;
            std::cout << sum << std::endl;  // prints the final sum
        }
        else {
            sum = sum + adder;  // Adds the latest input to the total
        }
    }

    return 0;
}
