#include <iostream>
#include <string>
#include <algorithm>

// Converts a temperature in Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

// Converts a temperature in Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Prompts the user to enter a temperature in Celsius or Fahrenheit
std::string promptForTemperature() {
    std::cout << "Enter a temperature in Celsius or Fahrenheit: " << std::endl;

    std::string input;
    std::getline(std::cin, input);

    return input;
}

// Parses the temperature and scale from a user input string
bool parseTemperatureString(const std::string& input, double& temperature, char& scale) {
    if (std::sscanf(input.c_str(), "%lf%c", &temperature, &scale) != 2) {
        std::cout << "Invalid input." << std::endl;
        return false;
    }

    scale = std::tolower(scale);

    if (scale != 'c' && scale != 'f') {
        std::cout << "Invalid temperature scale. Please enter 'C' or 'F'." << std::endl;
        return false;
    }

    return true;
}

// Converts a temperature from one scale to the other and prints the result
void convertAndPrint(double temperature, char scale) {
    double convertedTemp;

    if (scale == 'c') {
        convertedTemp = celsiusToFahrenheit(temperature);
        std::cout << temperature << " Celsius is " << convertedTemp << " Fahrenheit." << std::endl;
    } else if (scale == 'f') {
        convertedTemp = fahrenheitToCelsius(temperature);
        std::cout << temperature << " Fahrenheit is " << convertedTemp << " Celsius." << std::endl;
    }
}

