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

    int size1();
    
    int size2();

    bool find(int key);

    void append(int data);

    void prepend(int data);

    void remove(int data);

    void print();

    /*!
     * Reverses a part of the single linked list indicated by the pointers start and end (both inclusive).
     * @param start the pointer indicating the start of the part of the single linked list.
     * @param end the pointer indicating the end of the part of the single linked list. 
     */
    void reverse(Node* start, Node* end);

    /*!
     * Reverses the single linked list. 
     */
    void reverse();

};


#endif  // SINGLE_LINKED_LIST