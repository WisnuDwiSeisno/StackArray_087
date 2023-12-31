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
		int element;
		cout << "Masukan Nilai: ";
		cin >> element;
		if (top == 4) {
			cout << "Number of data exceed the list" << endl;
			return ;
		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;
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
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray SA;
	char ch;
	while (true) {
		cout << "\nMenu" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Display" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			SA.push();
			break;
		}
		case '2': 
			if (SA.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			SA.pop();
			break;

		case'3':
			SA.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\n Invalid Choice." << endl;
			break;
		}
	}
}
