#include <iostream>

#ifndef MATH_FUNC_HPP
#define MATH_FUNC_HPP

class math_func {
private:
	int num;
public:
	math_func(int num);
	~math_func();

	int get();
	double heron_sqrt();
	double heron_sqrt(int itr);

	friend std::ostream& operator<<(std::ostream& os, const math_func& self);
};

/*
math_func::math_func(int num) {
	this->num = num;
}

math_func::~math_func() {}

int math_func::get() {
	return this->num;
}

double math_func::heron_sqrt() {
	double ans = this->num;
	for (int i = 0; i < 10; i++) {
		ans = 0.5 * (ans + (this->num / ans));
	}
	return ans;
}

double math_func::heron_sqrt(int itr) {
	double ans = this->num;
	for (int i = 0; i < itr; i++) {
		ans = 0.5 * (ans + (this->num / ans));
	}
	return ans;
}

std::ostream& operator<<(std::ostream& os, const math_func& self) {
	os << self.num;
	return os;
}
*/

#endif // MATH_FUNC_HPP
