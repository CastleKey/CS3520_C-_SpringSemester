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
    int x = 0;
    bool y = true;

    // Main loop for each input
    while(y) {
        std::cin >> x;
        if (std::cin.eof()) {  // determines if the input was EOF
            y = false;
            std::cout << sum << std::endl;  // prints the final sum
        }
        else {
            sum = sum + x;  // Adds the latest input to the total
        }
    }

    return 0;
}
