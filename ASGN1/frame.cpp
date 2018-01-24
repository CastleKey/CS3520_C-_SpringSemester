//
//  frame.cpp
//  frame
//
//  Created by Izaak Lofgren on 1/23/18.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {

    // declare variables for later use
    std::string current;
    std::string holder;
    int longest = 0;
    int thislength = 0;

    std::ifstream square ("frame_input.txt");

    // Proceeds with function if file is open, returns error if not
    if (square.is_open())
    {
        // Determine what the longest line is in the file
        while (getline (square, current) )
        {
            holder = current;
            if (holder.length() > longest) {
                longest = holder.length();
            }
        }

        // Reset the file for run through a second time
        square.clear();
        square.seekg(0, square.beg);

        // Initial print of first line of the frame
        for (int i = 0; i < (longest + 4); i++) {
            std::cout << "*";
        }
        std::cout << '\n';

        // Print of the frame with spaces to balance the shorter lines
        while (getline (square, current) )
        {
            holder = current;
            thislength = longest - holder.length();

            std::cout << "* " << current;

            for (int i = 0; i < thislength; i++) {
                std::cout << " ";
            }

            std::cout << " *" << '\n';
        }
        // Last line of the frame, same as the first line
        for (int i = 0; i < (longest + 4); i++) {
            std::cout << "*";
        }
        std::cout << '\n';

        // Closes the text file
        square.close();
    }
    // returns the standard error if the file does not open
    else {
        std::cerr << "File Error";
    }


    return 0;
}
