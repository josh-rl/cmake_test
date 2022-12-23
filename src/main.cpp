#include <string>
#include "lib/math_num.hpp"
#include "lib/math_func.hpp"

int main(int argc, char const *argv[])
{
	std::string input = "0";
	std::cout << "Enter number: ";
	std::cin >> input;
	math_num* number1 = new math_num(std::stoi(input));

	input = "0";
	std::cout << "Enter number: ";
	std::cin >> input;
	math_num* number2 = new math_num(std::stoi(input));

	int precision = 10;
	std::cout << "Enter precision: ";
	std::cin >> input;
	precision = std::stoi(input);

	std::cout << "GCD of " << *number1 << ", " << *number2 << " : " << mymlib::gcd(number1->get(), number2->get()) << std::endl;
	std::cout << "LCM of " << *number1 << ", " << *number2 << " : " << mymlib::lcm(number1->get(), number2->get()) << std::endl;
	std::cout << "Sqrt of " << *number1 << ", precision=" << precision << " : " << number1->heron_sqrt(precision) << std::endl;
	std::cout << "Sqrt of " << *number2 << ", precision=" << precision << " : " << number2->heron_sqrt(precision) << std::endl;

	delete number1;
	delete number2;
	return 0;
}

