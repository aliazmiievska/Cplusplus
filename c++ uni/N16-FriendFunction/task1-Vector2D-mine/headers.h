#ifndef HEADER_H
#define HEADER_H


class Vector {
private:
	int m_a;
	int m_b;
public:

	Vector(int a, int b) : m_a(a), m_b(b) {};

	int vectorLength() const;

	Vector vectorMultiply(int num);

};

#endif