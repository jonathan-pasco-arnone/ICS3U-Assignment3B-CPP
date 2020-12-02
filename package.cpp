// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines whether a given package will be accepted

#include <iostream>

int main() {
    // This function determines whether a package will be accepted
    // through the inputs of this function

    double weight;
    double length;
    double width;
    double height;
    double volume;

    std::cout << "" << std::endl;
    std::cout << "This program tells the user whether their"
          "package will be accepted or not." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input the following values"
          " in kgs and cms:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Weight: ";
    std::cin >> weight;
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;
    volume = length*width*height;
    std::cout << "The weight is " << weight << "kg and the volume is "
          << volume << "cm³." << std::endl;

    if (weight >= 27) {
        std::cout << "Package Denied. Too Heavy" << std::endl;
    }
    if (volume >= 10000) {
        std::cout << "Package Denied. Too Large" << std::endl;
    } else {
        std::cout << "Package Accepted" << std::endl;
    }
}
