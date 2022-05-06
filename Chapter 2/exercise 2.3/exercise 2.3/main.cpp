#include <iostream>

int main()
{
	int input;

	std::cout << "Please fill in the measurement (in inche): ";
	std::cin >> input;

	auto feet = static_cast<int>(input / 12);	// I want to use static_cast<>() so that you can see how it works
	auto inches = static_cast<int>(input % 12);

	// Just because we haven't learned if statement, so I will ignore the grammar until we learn
	std::cout << "The measurement is: " << feet << " feet and " << inches << " inches.";
	return 0;
}