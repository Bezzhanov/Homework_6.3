#include "class_triangle.h"
#include <iostream>


Triangle::Triangle() {};
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Треугольник";
}

void Triangle::print() {
	std::cout << this->get_name() << ":" << std::endl;
	std::cout << "Стороны: " << "a=" << this->get_a() << " b=" << this->get_b() << " c=" << this->get_c() << std::endl;
	std::cout << "Углы: " << "A=" << this->get_A() << " B=" << this->get_B() << " C=" << this->get_C() << std::endl;
	std::cout << std::endl;
};

int Triangle::get_a() { return this->a; };
int Triangle::get_b() { return this->b; };
int Triangle::get_c() { return this->c; };
int Triangle::get_A() { return this->A; };
int Triangle::get_B() { return this->B; };
int Triangle::get_C() { return this->C; };