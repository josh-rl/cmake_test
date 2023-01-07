#include "../lib/math_num.hpp"

void demo() {
	std::string input = "0";
	std::cout << "Enter number : ";
	std::cin >> input;
	math_num* n1 = new math_num(std::stoll(input));

	input = "0";
	std::cout << "Enter another : ";
	std::cin >> input;
	math_num* n2 = new math_num(std::stoll(input));

	int p1 = 0;
	std::cout << "Enter precision : ";
	std::cin >> input;
	p1 = std::stoi(input);

	int p2 = 0;
	std::cout << "Enter another : ";
	std::cin >> input;
	p2 = std::stoi(input);

	int e1 = 0;
	std::cout << "Enter exponent : ";
	std::cin >> input;
	e1 = std::stoi(input);

	int e2 = 0;
	std::cout << "Enter another : ";
	std::cin >> input;
	e2 = std::stoi(input);

	std::cout << "GCD of " << *n1 << ", " << *n2 << " : " << math_num::gcd(n1->get(), n2->get()) << std::endl;
	std::cout << "LCM of " << *n1 << ", " << *n2 << " : " << math_num::lcm(n1->get(), n2->get()) << std::endl;
	std::cout << "Sqrt of " << *n1 << " : " << math_num::heron_sqrt(n1->get(), p1) << std::endl;
	std::cout << "Sqrt of " << *n2 << " : " << math_num::heron_sqrt(n2->get(), p2) << std::endl;
	std::cout << "Pow " << *n1 << "^" << e1 << " : " << math_num::pow(n1->get(), e1) << std::endl;
	std::cout << "Pow " << *n2 << "^" << e2 << " : " << math_num::pow(n2->get(), e2) << std::endl;
	std::cout << "Factors of " << *n1 << " : " << n1->f_list_str() << std::endl;
	std::cout << "Factors of " << *n2 << " : " << n2->f_list_str() << std::endl;
	std::cout << "Prime factors of " << *n1 << " : " << n1->pf_list_str() << std::endl;
	std::cout << "Prime factors of " << *n2 << " : " << n2->pf_list_str() << std::endl;

	delete n1;
	delete n2;
}

void test_primefactors(int start, int end, int inc) {
	math_num *mn = NULL;
	for (ll_t i = start; i < end; i+=inc) {
		mn = new math_num(i);
		std::cout << *mn << " : " << mn->pf_list_str() << std::endl;
		if (mn->get() != mn->calc_pf_list()) 
			std::cout << mn->get() << " != " << mn->calc_pf_list() << std::endl;
		mn->set(i + 1);
		std::cout << *mn << " : " << mn->pf_list_str() << std::endl;
		if (mn->get() != mn->calc_pf_list()) 
			std::cout << mn->get() << " != " << mn->calc_pf_list() << std::endl;
		delete mn;
	}
}

void test_factors(int start, int end, int inc) {
	/*
	First to have n consecutive factors:
		2: 2
		3: 6
		4: 12
		5: 60
		6: 60
		7: 420
		8: 840
		9: 2520
		10: 2520
		11: 27720
		12: 27720
	*/
	math_num *mn = NULL;
	for (ll_t i = start; i < end; i+=inc) {
		mn = new math_num(i);
		std::cout << *mn << " : " << mn->f_list_str() << std::endl;
		mn->set(i + 1);
		std::cout << *mn << " : " << mn->f_list_str() << std::endl;
		delete mn;
	}
}

int main(int argc, char const** argv) {
	int version = 0;
	switch (version) {
	case 0:
		demo();
		break;
	case 1:
		test_primefactors(2, 400, 2);
		break;
	case 2:
		test_factors(2, 400, 2);
		break;
	}
	return 0;
}
