#include <iostream>
using namespace std;
#include "io.h"

int main()
{
	int answer = readNubmer() + readNubmer();
	writeAnswer(answer);

	system("stop");
	return 0;
}