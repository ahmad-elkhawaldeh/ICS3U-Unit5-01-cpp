// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program calculates the temperature in fahrenheit

#include <iostream>

void fahrenheit() {
    float fahrenheit;
    float celsius;
    std::string fahrenheit_as_string;
    std::string celsius_as_string;

    // input
    std::cout << "Enter the temperature in Celsius : ";
    try {
        std::cin >> celsius_as_string;
        celsius = stof(celsius_as_string);
        fahrenheit = (celsius * 9.0) / 5 + 32;

        // output
        std::cout << "The temperature in Celsius : " << celsius << std::endl;
        std::cout << "The temperature in Fahrenheit : " << fahrenheit
        << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}

int main() {
    // this function just calls other functions

    // call functions
    fahrenheit();
}
