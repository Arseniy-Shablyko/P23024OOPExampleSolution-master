#pragma once
#include <iostream>
#include <string>
using namespace std;

class Arraylist
{
private:
	int* list;
	int size;
public:
	Arraylist();
	~Arraylist();

	void add(int element);
	void add(int index, int element);
	void addAll(int* element, int size);
	//void addAll(int index, int* elemnt, int size);
	void remove();
	void remove(int index);
	void clear();
	bool isEmpty();
	int get(int index);
	int set(int index, int element);
	int getSize();
	string toString();
};

