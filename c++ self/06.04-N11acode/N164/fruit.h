#ifndef FRUIT_H
#define FRUIT_H
#include <string>

class Fruit {
private:
	std::string m_name;
	std::string m_color;
public:

	Fruit(std::string name, std::string color) : m_name(name), m_color(color) {};

	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }

	friend std::ostream& operator<<(std::ostream& os, const Fruit& fruit) {
		os << "Fruit (" << fruit.m_name << ", " << fruit.m_color << ")\n";
		return os;
	}
};

#endif