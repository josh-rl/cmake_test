#include <string>
#include "math_func.hpp"

int main(int argc, char const *argv[])
{
	std::string input = "0";
	std::cout << "Enter number: ";
	std::cin >> input;
	math_func* number = new math_func(std::stoi(input));

	int precision = 10;
	std::cout << "Enter precision: ";
	std::cin >> input;
	precision = std::stoi(input);

	std::cout << "Number entered: " << *number << std::endl;
	std::cout << "Square root (precision = 10): " << number->heron_sqrt() << std::endl;
	std::cout << "Square root (precision = " << precision << "): " << number->heron_sqrt(precision) << std::endl;

	delete number;
	return 0;
}

