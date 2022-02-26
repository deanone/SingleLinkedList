#ifndef NODE_H
#define NODE_H

class Node
{
public:
	int data;
	Node* next;
public:
	/*!
	 * Constructor. 
	 */
	Node(int data);

	/*!
     * Destructor.
 	 */
	~Node();

};

#endif	// NODE_H