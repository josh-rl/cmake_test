#include <iostream>

#ifndef MATH_NUM_HPP
#define MATH_NUM_HPP

class math_num {
private:
	int num;
public:
	math_num(int num);
	~math_num();

	int get();
	double heron_sqrt();
	double heron_sqrt(int itr);

	friend std::ostream& operator<<(std::ostream& os, const math_num& self);
};

#endif // MATH_NUM_HPP
