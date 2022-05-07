#include <iostream>
#include <cmath>	// For tan() command

int main()
{
	int h, d, dFeet, dInch, angle;

	std::cout << "Please fill in the distance you are from the tree (in feet and inches): ";
	std::cout << "\nIn feet: ";
	std::cin >> dFeet;
	std::cout << "In inches: ";
	std::cin >> dInch;

	d = static_cast<int>(dFeet * 12 + dInch);

	std::cout << "Please fill in the height of your eye when peering into your angle-measuring device: ";
	std::cin >> h;
	std::cout << "Please fill in the angle in degree: ";
	std::cin >> angle;

	// Caculate the height of the tree
	auto tree = static_cast<int>(h + d * tan(angle));

	// Export in feet
	auto treeHeight = static_cast<int>(tree / 12);

	std::cout << "---------------------------" << std::endl;
	std::cout << "The height of the tree: " << treeHeight << " feet.";
	return 0;

}
