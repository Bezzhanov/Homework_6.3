#pragma once
#include <iostream>

class Figure {
public:
	Figure();
	std::string get_name();
	virtual void print() = 0;
protected:
	std::string name{};
};