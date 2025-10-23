#include "headers.h"
#include <iostream>
#include <fstream>
#include <cassert>

void Apartment::set_object(std::string street, int home, int homeNum, int roomsNum, int area) {
	m_street = street; m_homeNum = home; m_apartmentNum = homeNum; m_roomsNum = roomsNum; m_area = area;
}

void Apartment::display() {
	std::cout << m_street << " " << m_homeNum << " " << m_apartmentNum << " " <<
		m_roomsNum << " " << m_area << "\n";
}

void Apartment::get_in_file() {
	std::ofstream outf("text.txt");
	assert(outf && "Could not open a file");

	outf << m_street << "\n" << m_homeNum << "\n" << m_apartmentNum << "\n" <<
		m_roomsNum << "\n" << m_area << "\n";
}