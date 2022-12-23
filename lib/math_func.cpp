#include "math_func.hpp"

int mymlib::gcd(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a == b) return a;
	int c;
	if (b > a) {
		c = a;
		a = b;
		b = c;
	}
	while (b > 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int mymlib::lcm(int a, int b) {
	int c;
	if (b > a) {
		c = a;
		a = b;
		b = c;
	}
	return (a / gcd(a, b)) * b;
}
