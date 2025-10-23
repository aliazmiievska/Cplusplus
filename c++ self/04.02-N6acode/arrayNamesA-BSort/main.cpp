#include <iostream>

int enterNamesNum();
void inputNames(std::string *namesArr, int namesNum);
void sortNames(std::string* namesArr, int namesNum);
void outputNames(std::string* namesArr, int namesNum);

int main()
{	
	int namesNum = enterNamesNum();
	std::string* namesArr = new (std::nothrow) std::string[namesNum];
	inputNames(namesArr, namesNum);
	sortNames(namesArr, namesNum);
	outputNames(namesArr, namesNum);

	system("pause");
	return 0;
}

int enterNamesNum() {
	std::cout << "Enter the number of names: ";
	int namesNum;
	std::cin >> namesNum;
	return namesNum;
}

void inputNames(std::string *namesArr, int namesNum) {
	for (int iii = 0; iii < namesNum; ++iii) {
		std::cout << "Enter the name: ";
		std::cin >> namesArr[iii];
	}
}

void sortNames(std::string* namesArr, int namesNum) {
    for (int iii = 0; iii < namesNum - 1; ++iii)
    {
        int endOfArray = namesNum - iii;

        bool swapped(false);

        for (int jjj = 0; jjj < endOfArray - 1; ++jjj)
        {
            if (namesArr[jjj] > namesArr[jjj + 1])
            {
                std::swap(namesArr[jjj], namesArr[jjj + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

void outputNames(std::string* namesArr, int namesNum) {
	for (int iii = 0; iii < namesNum; ++iii) {
		std::cout << namesArr[iii] << std::endl;
	}
}