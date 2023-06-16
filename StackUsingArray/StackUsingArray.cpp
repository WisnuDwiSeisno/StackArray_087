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

	void pop() {
		if (empty()) { //step 1
			cout << "\n Stack is empty. Cannot pop." << endl;	//1. a
			return; // 1. b
		}
		cout << "\n The Popped element is : " << stack_array[top] << endl; //step 2
		top--; // step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

};
