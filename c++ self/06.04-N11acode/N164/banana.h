#ifndef BANANA_H
#define BANANA_H

class Banana : public Fruit {
private:
public:

	Banana(std::string name, std::string color) : Fruit(name, color) {};

	friend std::ostream& operator<<(std::ostream& os, const Banana& banana) {
		os << "Banana (" << banana.getName()
			<< ", " << banana.getColor() << ")\n";
		return os;
	}
};

#endif#pragma once
