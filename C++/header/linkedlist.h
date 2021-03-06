/* C++ Header file for Linked List */
#include <ostream>


template <class T>
class LinkedList
{
private:
    int max; 
    class Node
    {
        public:
            T data;
            Node *next;
    };
    Node *head = new Node; 
    
public:
    LinkedList();
    friend class Node; 
public:
    T createMemory();   
    bool insert_last(T data);
    void print_list();
private:
    // bool insertLast(Node **head, T data);
};
// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
    // std::cout << "Node created and attached to head successfully" << std::endl;
}
// Public Functions
template <class T>
T LinkedList<T>::createMemory()
{
    return new Node();
}
template <class T>
bool LinkedList<T>::insert_last(T data)
{

    if(head == NULL)
    {
        head->data = data;
        head->next = NULL;
        return true;
    }
    else
    {
        Node *temp = new Node;
        while(temp != NULL)
        {
            temp = temp->next;
        } 
        temp->data = data;
        temp->next = NULL;    
        return true;
    }
    return false;
}
// Print list
template <class T>
void LinkedList<T>::print_list()
{
    Node *temp = head;
    while (temp!= NULL)
    {
        std::cout << temp->data << "->" ;
        temp = temp->next;
    }
    
}









// Private Functions
// insert Functions
// template <class T>
// bool LinkedList<T>::insertLast(Node **head, T data)
// {
//     Node *temp = head;
//     while(temp != NULL)
//     {
//         temp = temp->next;
//     } 
//     temp->data = data;
//     temp->next = NULL;    
// }