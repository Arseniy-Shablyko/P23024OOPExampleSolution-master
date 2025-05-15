#include "Arraylist.h"

Arraylist::Arraylist() {
	list = nullptr;
	size = 0;
}
Arraylist::~Arraylist() {
	clear();
}

void Arraylist::add(int element) {}
void Arraylist::add(int index, int element) {}
void Arraylist::addAll(int* element, int size) {}
//Arraylist:: addAll(int index, int* elemnt, int size);
void Arraylist::remove() {}
void Arraylist::remove(int index) {}

void Arraylist::clear() {
	if (list != nullptr) {
		delete[] list;
		size = 0;
	}
}

bool Arraylist::isEmpty() {
	return size == 0;
}

int Arraylist::get(int index) {
	if (!isEmpty() && index >= 0 && index < size) {
		return list[index];
	}

	return 0;
}

int Arraylist::set(int index, int element) {
	if (!isEmpty() && index >= 0 && index < size) {
		list[index] = element;
	}


}

int Arraylist::getSize() {
	return size;
}

string Arraylist::toString() {
	string s = "list is empty";

	if (!isEmpty() ) {
		s = "";

		for (int i = 0; i < size; i++) {
			s += to_string(list[i]) + " ";
		}
	}

	return s;
}