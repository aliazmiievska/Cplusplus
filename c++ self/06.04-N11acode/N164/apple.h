#ifndef APPLE_H
#define APPLE_H

class Apple: public Fruit {
private:
	double m_fiber;
public:

	Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber(fiber) {};

	friend std::ostream& operator<<(std::ostream& os, const Apple& apple) {
		os << "Apple (" << apple.getName()
			<< ", " << apple.getColor()
			<< ", " << apple.m_fiber << ")\n";
		return os;
	}

};

#endif#pragma once
