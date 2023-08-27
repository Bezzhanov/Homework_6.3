#include "class_quadrangle.h"

Quadrangle::Quadrangle() {};
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "Четырёхугольник";
}
void Quadrangle::print() {
	std::cout << this->get_name() << ":" << std::endl;
	std::cout << "Стороны: " << "a=" << this->get_a() << " b=" << this->get_b() << " c=" << this->get_c() << " d=" << this->get_d() << std::endl;
	std::cout << "Углы: " << "A=" << this->get_A() << " B=" << this->get_B() << " C=" << this->get_C() << " D=" << this->get_D() << std::endl;
	std::cout << std::endl;
};

int Quadrangle::get_a() { return this->a; };
int Quadrangle::get_b() { return this->b; };
int Quadrangle::get_c() { return this->c; };
int Quadrangle::get_d() { return this->d; };
int Quadrangle::get_A() { return this->A; };
int Quadrangle::get_B() { return this->B; };
int Quadrangle::get_C() { return this->C; };
int Quadrangle::get_D() { return this->D; };