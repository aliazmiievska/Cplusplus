#ifndef HEADER_H
#define HEADER_H

class Point {
private:
	double m_a;
	double m_b;
public:

	Point(double a, double b) : m_a(a), m_b(b) {};

	void print();

	//double distanceTo(Point point);

	friend double distanceBetween(Point point1, Point point2);

};

#endif