/* C++ Header file for Linked List */






template <class T>
class LinkedList
{
private:
    int max; 
    class Node
    {
        private:
            T data;
            T *next;
        public:
            friend class LinkedList; 
    };
    Node *head = NULL; 

public:
    LinkedList();
    friend class Node; 
    ~LinkedList();
public:
    T createMemory();   
    bool insertFirst(T data);
};
// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
    head = Node();
}
template <class T>
T LinkedList<T>::createMemory()
{
    return new Node();
}
// template <class T>
// bool LinkedList<T>::insertFirst(T data)
// {

//     if (head == NULL)
//     {
//         return false;  
//     }
//     else if(head != NULL)
//     {
//         T *temp = createMemory();
//         temp = head;
//         while (temp != NULL)
//         {
//             temp = temp->next;
//         }
//         list->next = temp;
                
//     }
//     else{
//         head = data;
//     }

    
// }