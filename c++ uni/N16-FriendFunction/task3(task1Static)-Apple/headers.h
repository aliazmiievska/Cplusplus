#ifndef HEADER_H
#define HEADER_H
#include <string>


class Apple {
private:
	double weight;
	std::string color;
	static double allWeight;
public:

	Apple(double w, std::string c);

	double addWeight();

	void displayAllWeight();

};

#endif