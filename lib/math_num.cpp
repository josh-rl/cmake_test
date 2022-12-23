#include "math_num.hpp"

math_num::math_num(int num) {
	this->num = num;
}

math_num::~math_num() {}

int math_num::get() {
	return this->num;
}

double math_num::heron_sqrt() {
	double ans = this->num;
	for (int i = 0; i < 10; i++) {
		ans = 0.5 * (ans + (this->num / ans));
	}
	return ans;
}

double math_num::heron_sqrt(int itr) {
	double ans = this->num;
	for (int i = 0; i < itr; i++) {
		ans = 0.5 * (ans + (this->num / ans));
	}
	return ans;
}

std::ostream& operator<<(std::ostream& os, const math_num& self) {
	os << self.num;
	return os;
}
