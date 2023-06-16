#include <iostream>
#include <array>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//Construktor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceed the list" << endl;
			return 0;
		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}
};