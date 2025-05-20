#pragma once
#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
	int* stack;
	int size;
public:
	Stack();
	~Stack();

	void push(int element);
	int pop();
	int peek();
	bool isEmpty();
	int getString();
	void clear();
	string toString();
};

