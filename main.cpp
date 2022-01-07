// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Largest Number

#include <iostream>
#include <string>
using namespace std;

int main() {
    // main function for creating largest number program
    // define variables
    string temp;
    int num1;
	int num2;
	int num3;
	int largest;

	try {
        // input
		std::cout << "First Number: " << std::endl;
		std::cin >> temp;
        num1 = stoi(temp);
		std::cout << "Second Number: " << std::endl;
		std::cin >> temp;
        num2 = stoi(temp);
		std::cout << "Third Number: " << std::endl;
		std::cin >> temp;
        num3 = stoi(temp);
        
        // process
        if ((num1 >= num2) && (num1 >= num3)) {
            largest = num1;
        }
        else if ((num2 >= num1) && (num2 >= num3)) { 
            largest = num2;
        }
        else {
            largest = num3;
        }

        // output
        std::cout << "Largest Number is " << largest << "." << std::endl;
	} catch (std::invalid_argument) {
		std::cout << "Input must be an integer" << std::endl;
	}

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
