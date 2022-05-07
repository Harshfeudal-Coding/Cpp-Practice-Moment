#include <iostream>
#include <cmath>	// For power()

int main()
{
	double w, hFoot, hInch;

	std::cout << "Please enter your height:";
	std::cout << "\nIn foot: ";
	std::cin >> hFoot;
	std::cout << "In inches: ";
	std::cin >> hInch;

	std::cout << "Please enter your weight in pounds: ";
	std::cin >> w;

	// Converter
	auto height = static_cast<int>(0.3084 * hFoot + (0.3084 / 12) * hInch);
	auto weight = static_cast<double>(w / 2.2);

	// BMI
	auto BMI = static_cast<double>(weight / pow(height, 2));

	std::cout << "------------------------------" << std::endl;
	std::cout << "Your body mass index (BMI) is: " << BMI;
	return 0;
}
