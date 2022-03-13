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

        std::cout << "Single linked list size: " << list->size1() << "\n";

        for (int i = 0; i < 3; i++)
        {
            list->append(i);
        }

        list->print();

        std::cout << "Single linked list size: " << list->size1() << "\n";

        for (int i = 1; i <= 3; i++)
        {
            list->prepend(10 * i);
        }

        std::cout << "The single linked list in initial order:\n";
        list->print();

        std::cout << "The single linked list in reverse order:\n";
        list->reverse();
        list->print();

        // back to initial order;
        list->reverse();

        std::cout << "Single linked list size: " << list->size1() << "\n";

        list->remove(startVal);

        list->print();

        std::cout << "Single linked list size: " << list->size1() << "\n";

        int key = 10;
        bool found = list->find(key);
        if (found)
        {
            std::cout << key << " found in the list.\n";
        }

        delete list;
    }
    else
    {
        std::cout << "Please provide the initial value for the head of the list after the name of the program.\n";
        std::cout << "e.g., ./SingleLinkedList.out 2\n";
    }
    return 0;
}