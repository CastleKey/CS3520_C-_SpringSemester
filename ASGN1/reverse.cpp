//
//  reverse.cpp
//  reverse
//
//  Created by Izaak Lofgren on 1/23/18.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {

    // declares variable for later use
    std::string current;
    std::string holder;
    std::ifstream reverse ("reverse_input.txt");

    // Makes sure the file is open
    if (reverse.is_open())
    {
        // Gets the currently line and prints it in reverse
        while (getline (reverse, current) )
        {
            holder = current;
            std::reverse(holder.begin(), holder.end());
            std::cout << holder << '\n';
        }
        // Closes the file
        reverse.close();
    }

    // Returns an error if the file cannot open
    else {
        std::cerr << "File Error";
    }


    return 0;
}
