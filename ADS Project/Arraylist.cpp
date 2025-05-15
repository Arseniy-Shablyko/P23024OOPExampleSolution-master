#include "Arraylist.h"

Arraylist::Arraylist() {
	list = nullptr;
	size = 0;
}
Arraylist::~Arraylist() {
	clear();
}

void Arraylist::add(int element) {
	if (isEmpty()) {
		size = 1;
		list = new int[size];
		list[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}

		temp[size] = element;
		delete[] list;
		list = temp;
		size++;
	}
}
void Arraylist::add(int index, int element) {
	if (isEmpty()) {
		size = 1;
		list = new int[size];
		list[0] = element;
	}
	else if (!isEmpty() || index < 0 || index >= size) {
		return;
	}
	else {
		size++;
		int* temp = new int[size];
		for (int i = 0, j = 0; j < size; j++) {
			if (i != index) {
				temp[j] = list[i];
				i++;
			}
			else {
				temp[j] = element;
			}
		}

		temp[size] = element;
		delete[] list;
		list = temp;
		size++;
	}
}
void Arraylist::addAll(int* element, int size) {
	for (int i = 0; i < size; i++) {
		add(element);
	}
}

//Arraylist:: addAll(int index, int* elemnt, int size);

void Arraylist::remove() {
	remove(size - 1);
}
void Arraylist::remove(int index) {
	if (!isEmpty()) {
		size--;
		int* temp = new int[size];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
			
		}

		delete[] list;
		list = temp;
	}
}

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