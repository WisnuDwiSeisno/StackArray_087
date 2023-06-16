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

	void push() {
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

	void display() {
		if (empty()) {
			cout << "\n Stack is Empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; top--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray SA;
	while (true) {

	}
}
