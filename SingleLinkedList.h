#ifndef SINGLE_LINKED_LIST
#define SINGLE_LINKED_LIST

class Node;

class SingleLinkedList
{
	Node* head;
public:

	/*!
	 * Constructor. 
	 */
	SingleLinkedList(int data);

	/*!
	 * Destructor. 
	 */
	~SingleLinkedList();

	void append(int data);

	void prepend(int data);

	void remove(int data);

	void print();

};


#endif	// SINGLE_LINKED_LIST