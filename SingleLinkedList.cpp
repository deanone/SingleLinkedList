#include "SingleLinkedList.h"
#include "Node.h"
#include <iostream>

SingleLinkedList::SingleLinkedList(int data)
{
	this->head = new Node(data);
}

SingleLinkedList::~SingleLinkedList()
{
	if (this->head != nullptr)
	{
		delete this->head;
		this->head = nullptr;
	}
}

void SingleLinkedList::append(int data)
{
	if (head != nullptr) // if list not empty
	{
		Node* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		Node* node = new Node(data);
		current->next = node;
		return;
	}
	return;
}

void SingleLinkedList::prepend(int data)
{
	Node* node = new Node(data);
	node->next = head;
	head = node;
	return;
}

void SingleLinkedList::remove(int data)
{
	if (head != nullptr)
	{
		if (head->data == data)
		{
			head = head->next;
			return;
		}

		Node* current = head;
		while (current->next != nullptr)
		{
			if (current->next->data == data)
			{
				current->next = current->next->next;
				break;
			}
			current = current->next;
		}
		return;
	}
	return;
}

void SingleLinkedList::print()
{
	if (head != nullptr)
	{	
		if (head->next == nullptr)
		{
			std::cout << head->data;
			std::cout << "\n";
			return;
		}

		Node* current = head;
		while (current->next != nullptr)
		{
			std::cout << current->data << " ";
			current = current->next;
		}
		std::cout << "\n";
		return; 
	}
	return;
}