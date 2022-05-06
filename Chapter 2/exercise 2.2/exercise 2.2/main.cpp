#include <iostream>

auto const pi = 3.141592653589793238;

int main()
{
	double radius, area;

	std::cout << "Fill in the radius: ";
	std::cin >> radius;
	area = pi * radius * radius;

	std::cout << "Area is: " << area;
	return 0;
}