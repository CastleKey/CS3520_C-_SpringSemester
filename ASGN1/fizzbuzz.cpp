//
//  fizzbuzz.cpp
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

    // Declare each of the strings
    std::string fizz = "Fizz";
    std::string buzz = "Buzz";
    std::string fizzbuzz = "FizzBuzz";

    // main loop for all 100 numbers
    for(int i = 1; i <= 100; i++) {
        // Determines which should be replaced with fizzbuzz
        if (((i % 3) == 0) && ((i % 5) == 0)) {
            std::cout << fizzbuzz << std::endl;
        }
        else if ((i % 3) == 0) {            // determines what should be replaced with Fizz
            std::cout << fizz << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << buzz << std::endl;    // determines what should be replaced with Buzz
        }
        else {
            std::cout << i << std::endl;    // If it shouldn't be replaced at all
        }
    }

    return 0;
}
