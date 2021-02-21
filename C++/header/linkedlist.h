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
    };
    Node *head = NULL; 
    
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
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
    } 
    temp->data = data;
    temp->next = NULL;    
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