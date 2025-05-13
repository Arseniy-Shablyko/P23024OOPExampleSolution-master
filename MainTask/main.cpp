#include "Manager.h"
#include "Initializer.h"
#include "Group.h"

void showAllStudents(Student* list, int count) {
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
}

int main() {
	Student* list = nullptr;
	Initializer initializer;
	Manager manager;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	initializer.init(group);

	cout << "All students:\n";
	showAllStudents(list, count);

	int size = 0;
	Student* bestList = manager.findBestStudents(list, count, size);
	cout << "\nList of best students:\n";
	showAllStudents(bestList, size);

	Student* worstList = manager.findWorstStudents(list, count, size);
	cout << "\nList of worst students:\n";
	showAllStudents(worstList, size);

	return 0;
}