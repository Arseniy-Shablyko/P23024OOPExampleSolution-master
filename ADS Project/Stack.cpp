#include "Stack.h"
Stack::Stack() {
	stack = nullptr;
	size = 0;
}
Stack::~Stack() {}

void Stack::push(int element) {}
int Stack::pop() {}
int Stack::peek() {
	
}
bool Stack::isEmpty() {}
int Stack::getString() {}
void Stack::clear() {}
string Stack::toString() {
	string s = "Stack is empty";

	if (!isEmpty()) {
		s = "";
		for (int i = size; i > 0; i--) {
			s += stack[i] + " ";
		}
	}
}