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
    std::string a = "Fizz";
    std::string b = "Buzz";
    std::string c = "FizzBuzz";
    
    // main loop for all 100 numbers
    for(int i = 1; i <= 100; i++) {
        // Determines which should be replaced with fizzbuzz
        if (((i % 3) == 0) && ((i % 5) == 0)) {
            std::cout << c << std::endl;
        }
        else if ((i % 3) == 0) {            // determines what should be replaced with Fizz
            std::cout << a << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << b << std::endl;    // determines what should be replaced with Buzz
        }
        else {
            std::cout << i << std::endl;    // If it shouldn't be replaced at all
        }
    }
    
    return 0;
}
