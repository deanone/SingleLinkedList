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

    /*!
     * Returns the number of elements in the list.
     * @return the number of elements in the list. 
     */
    int size1();
    
    /*!
     * Returns the number of elements in the list.
     * @return the number of elements in the list. 
     */
    int size2();

    /*!
     * Searches for a data item (key) in the list.
     * @return true if the key is in the list, false otherwise. 
     */
    bool find(int key);

    /*!
     * Insert a new data item at the back of the list.
     * @param data the data item to be inserted at the back of the list.
     */
    void append(int data);

    /*!
     * Insert a new data item at the front of the list.
     * @param data the data item to be inserted at the front of the list.
     */
    void prepend(int data);

    /*!
     * Remove a specific data item.
     * @param data the value of the data item to be removed. 
     */
    void remove(int data);

    /*!
     * Remove a specific data item at a specific index.
     * Head of the list has index 0.
     * @param index the index of the data item to be removed.
     */
    void removeAtIndex(int index);

    /*!
     * Prints all data items of the list. 
     */
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