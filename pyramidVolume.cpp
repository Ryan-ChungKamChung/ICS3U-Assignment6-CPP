// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in January 2021
// Program finds volume of a cylinder

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


double volume(double length, double width, double height) {
    // Function calculates volume and returns it

    double volume;

    // Process
    volume = (length * width * height) / 3;

    return volume;
}


int main() {
    // Takes user input, passes it to functions and calls them

    std::string length_string;
    std::string width_string;
    std::string height_string;
    double calculated_volume;
    double length;
    double width;
    double height;

    std::cout << "Enter measurements and I will give you the volume of "
    << "a right rectangular pyramid" << std::endl;

    // Input
    while (true) {
        std::cout << "Enter length (cm): ";
        std::cin >> length_string;
        try {
            length = std::stoi(length_string);

            if (length <= 0) {
                throw std::invalid_argument("This isn't a valid input");
            }
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    while (true) {
        std::cout << "Enter width (cm): ";
        std::cin >> width_string;
        try {
            width = std::stoi(width_string);

            if (width <= 0) {
                throw std::invalid_argument("This isn't a valid input");
            }
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    while (true) {
        std::cout << "Enter height (cm): ";
        std::cin >> height_string;
        try {
            height = std::stoi(height_string);

            if (height <= 0) {
                throw std::invalid_argument("This isn't a valid input");
            }
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    // Calls functions
    calculated_volume = volume(length, width, height);

    // Output
    std::cout << "The volume of the right rectangular pyramid is: "
    << std::setprecision(2) << std::fixed << calculated_volume
    << "cm³" << std::endl;
}
