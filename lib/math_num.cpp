#include "math_num.hpp"

math_num::math_num(ll_t num) {
	this->f_head = this->f_tail = NULL;
	this->pf_head = this->pf_tail = NULL;
	this->f_len = 0;
	this->pf_len = 0;
	this->num = num;

	this->set_f_list();
	this->set_pf_list();
}

math_num::~math_num() {
	this->clear_f_list();
	this->clear_pf_list();
}

void math_num::add_f_node(ll_t f) {
	math_num::f_node* temp = (math_num::f_node*) malloc(sizeof(math_num::f_node));
	temp->f = f;
	temp->prev = NULL;
	temp->next = NULL;
	this->f_len++;

	// if new list
	if (this->f_head == NULL) {
		this->f_head = temp;
	}
	// if list has 1 item
	else if (this->f_tail == NULL) {
		temp->prev = this->f_head;
		this->f_head->next = temp;
		this->f_tail = temp;
	}
	// if list has 2+ items
	else {
		temp->prev = this->f_tail;
		this->f_tail->next = temp;
		this->f_tail = temp;
	}
}

void math_num::add_pf_node(ll_t pf, int mult) {
	math_num::pf_node* temp = (math_num::pf_node*) malloc(sizeof(math_num::pf_node));
	temp->pf = pf;
	temp->mult = mult;
	temp->prev = NULL;
	temp->next = NULL;
	this->pf_len++;

	// if new list
	if (this->pf_head == NULL) {
		this->pf_head = temp;
	}
	// if list has 1 item
	else if (this->pf_tail == NULL) {
		temp->prev = this->pf_head;
		this->pf_head->next = temp;
		this->pf_tail = temp;
	}
	// if list has 2+ items
	else {
		temp->prev = this->pf_tail;
		this->pf_tail->next = temp;
		this->pf_tail = temp;
	}
}

void math_num::set_f_list() {
	for (ll_t i = 1; i * i <= this->num; i++) {
		if (this->num % i == 0) this->add_f_node(i);
	}
	if (this->f_len == 1) {
		this->add_f_node(this->num);
	} else {
		int lim = this->f_len;
		math_num::f_node* fn = this->f_tail;
		for (int i = 0; i < lim; i++) {
			this->add_f_node(this->num / fn->f);
			fn = fn->prev;
		}
	}
}

void math_num::set_pf_list() {
	ll_t rem = this->num;
	math_num::f_node* fn = this->f_head;
	int mult = 0;
	while (fn != NULL) {
		if (rem > 1 && math_num::is_prime(fn->f)) {
			do {
				mult++;
				rem = rem / fn->f;
			} while (rem % fn->f == 0);
			this->add_pf_node(fn->f, mult);
			mult = 0;
		}
		fn = fn->next;
	}
}

void math_num::clear_f_list() {
	math_num::f_node *f = f_head->next;
	while (this->f_head != NULL) {
		free(f_head);
		this->f_head = f;
		if (f) {
			f = f->next;
		}
	}
	this->f_head = this->f_tail = NULL;
	this->f_len = 0;
}

void math_num::clear_pf_list() {
	math_num::pf_node *pf = pf_head->next;
	while (this->pf_head != NULL) {
		free(pf_head);
		this->pf_head = pf;
		if (pf) {
			pf = pf->next;
		}
	}
	this->pf_head = this->pf_tail = NULL;
	this->pf_len = 0;
}

ll_t math_num::get() {
	return this->num;
}

void math_num::set(ll_t num) {
	this->clear_f_list();
	this->clear_pf_list();
	this->num = num;
	this->set_f_list();
	this->set_pf_list();
}

std::string math_num::f_list_str() {
	std::stringstream ss;
	math_num::f_node* fn = this->f_head;
	for (int i = 0; i < this->f_len - 1; i++) {
		ss << fn->f << ", ";
		fn = fn->next;
	}
	ss << fn->f;
	return ss.str();
}

std::string math_num::pf_list_str() {
	std::stringstream ss;
	math_num::pf_node* pfn = this->pf_head;
	for (int i = 0; i < this->pf_len - 1; i++) {
		if (pfn->mult == 1) ss << pfn->pf << " * ";
		else ss << pfn->pf << "^" << pfn->mult << " * ";
		pfn = pfn->next;
	}
	if (pfn->mult == 1) ss << pfn->pf;
	else ss << pfn->pf << "^" << pfn->mult;
	return ss.str();
}

ll_t math_num::calc_pf_list() {
	ll_t temp = 1;
	math_num::pf_node *pf = this->pf_head;
	while (pf) {
		for (int i = 0; i < pf->mult; i++) {
			temp *= pf->pf;
		}
		pf = pf->next;
	}
	return temp;
}

ld_t math_num::heron_sqrt(ld_t n, int itr) {
	ld_t ans = n;
	for (int i = 0; i < itr; i++) {
		ans = 0.5 * (ans + (n / ans));
	}
	return ans;
}

ld_t math_num::pow(ld_t n, int x) {
	ld_t ans = 1.0;
	if (x == 0) return ans;
	else if (x < -12) x = -12;
	else if (x > 12) x = 12;
	if (x > 0) {
		for (int i = 0; i < x; i++) {
			ans = ans * n;
		}
	}
	else if (x < 0) {
		for (int i = x; i < 0; i++) {
			ans = ans * n;
		}
		ans = 1.0 / ans;
	}
	return ans;
}

ll_t math_num::gcd(ll_t a, ll_t b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a == b) return a;
	ll_t c;
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

ll_t math_num::lcm(ll_t a, ll_t b) {
	ll_t c;
	if (b > a) {
		c = a;
		a = b;
		b = c;
	}
	return (a / gcd(a, b)) * b;
}

bool math_num::is_prime(ll_t n) {
	if (n == 3 || n == 2) return true;
	if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;
	for (ll_t i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& os, const math_num& self) {
	os << self.num;
	return os;
}
