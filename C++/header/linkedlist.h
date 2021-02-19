/* C++ Header file for Linked List */
#include <ostream>

template <class T>
class LinkedList
{
private:
    int max; 
    class Node
    {
        private:
            T data;
            Node *next;
        public:
            friend class LinkedList; 
    };
    Node *head = NULL; 
    Node *list[10] = NULL;
public:
    LinkedList();
    friend class Node; 
public:
    T createMemory();   
    bool insertFirst(T data);
};
// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
    std::cout << "Node created and attached to head successfully" << std::endl;
    head = new Node();
    list = new Node();
}
template <class T>
T LinkedList<T>::createMemory()
{
    return new Node();
}
template <class T>
bool LinkedList<T>::insertFirst(T data)
{

    if (head == NULL)
    {
        return false;  
    }
    else if(head != NULL)
    {
        T *temp = createMemory();
        temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        list->next = temp;
                
    }
    else{
        head = data;
    }   
}