#include <iostream>
#include <string>
#include <sstream>

#ifndef MATH_NUM_HPP
#define MATH_NUM_HPP

typedef long long int ll_t;
typedef long double ld_t;

class math_num {
private:
	struct f_node
	{
		ll_t f;
		f_node* prev;
		f_node* next;
	};
	struct pf_node
	{
		ll_t pf;
		int mult;
		pf_node* prev;
		pf_node* next;
	};
	
	f_node* f_head;
	f_node* f_tail;
	pf_node* pf_head;
	pf_node* pf_tail;
	int f_len;
	int pf_len;

	void add_f_node(ll_t f);
	void add_pf_node(ll_t pf, int mult);
	void set_f_list();
	void set_pf_list();
	void clear_f_list();
	void clear_pf_list();

	ll_t num;
	
public:
	math_num(ll_t num);
	~math_num();

	ll_t get();
	void set(ll_t num);

	std::string f_list_str();
	std::string pf_list_str();
	ll_t calc_pf_list();

	static ld_t heron_sqrt(ld_t n, int itr);
	static ld_t pow(ld_t n, int x);
	static ll_t gcd(ll_t a, ll_t b);
	static ll_t lcm(ll_t a, ll_t b);
	static bool is_prime(ll_t n);

	friend std::ostream& operator<<(std::ostream& os, const math_num& self);
};

#endif // MATH_NUM_HPP
