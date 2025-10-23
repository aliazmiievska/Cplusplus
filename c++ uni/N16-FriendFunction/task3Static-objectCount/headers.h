#ifndef HEADER_H
#define HEADER_H


class CounterObject {
private:
	static int objectCount;
public:

	CounterObject() {
		++objectCount;
	}

	static int getCount () {
		return objectCount;
	}

	~CounterObject() {
		--objectCount;
	}

};

#endif