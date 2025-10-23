#ifndef HEADER_H
#define HEADER_H
#include <string>

class Apartment {
private:
	std::string m_street{ "-" };
	int m_homeNum{ 0 };
	int m_apartmentNum{ 0 };
	int m_roomsNum{ 0 };
	int m_area{ 0 };
public:

	Apartment() {};

	void set_object(std::string street, int homeNum, int apartmentNum, int roomsNum, int area);

	void display();

	void get_in_file();

};

#endif