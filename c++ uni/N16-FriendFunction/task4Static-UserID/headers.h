#ifndef HEADER_H
#define HEADER_H

class User {
private:
	int personalID;
	static int ID;
public:

	User() { ++ID; personalID = ID; };
	~User() { --ID; personalID = ID; };


	int getID() { return personalID; }

};

#endif