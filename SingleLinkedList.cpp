#include "SingleLinkedList.h"
#include "Node.h"

#include <iostream>
#include <stack>

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

int SingleLinkedList::size1()
{
    if (head == nullptr)    // empty list
    {
        return 0;
    }

    if (head->next == nullptr)   // list with only 1 element
    {
        return 1;
    }

    int s = 1;
    Node* current = head;
    while (current->next != nullptr)
    {
        s++;
        current = current->next;
    }
    return s;
}

int SingleLinkedList::size2()
{
    int s = 0;
    Node* current = head;
    while (current != nullptr)
    {
        s++;
        current = current->next;
    }
    return s;
}

bool SingleLinkedList::find(int key)
{
    if (head == nullptr)
    {
        return false;
    }

    Node* current = head;
    while (current != nullptr)
    {
        if (current->data == key)
        {
            return true;
        }
        current = current->next;
    }
    return false;
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
    if (head != nullptr)    // if list not empty
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
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << "\n";
        return; 
    }
    return;
}

void SingleLinkedList::reverse(Node* start, Node* end)
{
    std::stack<int> s;
    Node* current = start;
    while (current != end->next)
    {
        int data = current->data;
        s.push(data);
        current = current->next;
    }

    current = start;
    while (!s.empty())
    {
        int data = s.top();
        current->data = data;
        current = current->next;
        s.pop();
    }
}

void SingleLinkedList::reverse()
{
    Node* current = head;
    Node* end = nullptr;
    while (current != nullptr)
    {
        end = current;
        current = current->next;
    }

    reverse(head, end);
}