#ifndef POINT_H
#define POINT_H



class Point {
private:
	double m_x;
	double m_y;
public:

	Point(double x, double y) : m_x(x), m_y(y) {};

	void display() const;

	friend double distance (const Point&, const Point&);

};

#endif