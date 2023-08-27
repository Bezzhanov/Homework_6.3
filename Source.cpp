#include <iostream>
#include "class_figure.h"
#include "class_triangle.h"
#include "class_right_triangle.h"
#include "class_isosceles_triangle.h"
#include "class_equilateral_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "class_rectangle.h"
#include "class_square.h"
#include "class_rhombus.h"


void print_info(Figure* x) {
	x->print();
}

int main() {
	setlocale(LC_ALL, "Ru");
	Triangle t(10, 20, 30, 50, 60, 70);
	print_info(&t);
	RightTriangle rt(10, 20, 30, 50, 60);
	print_info(&rt);
	IsoscelesTriangle it(10, 20, 50, 60);
	print_info(&it);
	EquilateralTriangle et(30);
	print_info(&et);
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&q);
	Rectangle r(10, 20);
	print_info(&r);
	Square s(20);
	print_info(&s);
	Parallelogram p(20, 30, 30, 40);
	print_info(&p);
	Rhombus rmb(30, 30, 40);
	print_info(&rmb);
	return 0;
}