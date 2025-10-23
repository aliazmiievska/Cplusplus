#include <iostream>

class Stack {
	int array[10]{ 0 };
	int stackSize;

public:

	void reset() {
		for (int iii = 0; iii < 10; ++iii) {
			array[iii] = 0;
		}
	}

	void push(int a) {
		for (int iii = 0; iii < 10; ++iii) {
			if (array[iii] == 0) {
				array[iii] = a;
				break;
			}
		}
	}

	int pop() {
		int result;
		bool isZero = false;

		for (int iii = 0; iii < 10; ++iii) {
			if (array[iii] == 0) {
				result = array[iii - 1];
				array[iii - 1] = 0;
				isZero = true;
				break;
			}
		}

		if (isZero) {
			result = array[9];
			array[9] = 0;
		}

		return result;
	}

	void print() {
		std::cout << "( ";
		for (int iii = 0; iii < 10; ++iii) {
			if (array[iii] != 0) {
				std::cout << array[iii] << " ";
			}
		}
		std::cout << ")\n";
	}

};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	system("pause");
	return 0;
}