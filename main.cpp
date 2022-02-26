#include "SingleLinkedList.h"
#include <string>
#include <iostream>

/* Driver application for the custom single linked list implementation. */
int main(int argc, char* argv[])
{
	if (argc == 2)
	{
		int startVal = std::stoi(argv[1]);

		SingleLinkedList* list = new SingleLinkedList(startVal);

		list->print();

		for (int i = 0; i < 3; i++)
		{
			list->append(i);
		}

		list->print();

		for (int i = 1; i <= 3; i++)
		{
			list->prepend(10 * i);
		}

		list->print();

		list->remove(startVal);

		list->print();

		delete list;
	}
	else
	{
		std::cout << "Please provide the initial value for the head of the list after the name of the program.";
		std::cout << "e.g., ./SingleLinkedList.out 2";
	}
	return 0;
}