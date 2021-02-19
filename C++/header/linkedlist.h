/* C++ Header file for Linked List */






template <class T>
class LinkedList
{
private:
    T *head; 
    int max; 
    class Node
    {
        private:
            T data;
            T *next;
    };
public:
    LinkedList();
    T createMemory();
    bool insertFirst(T data);
    ~LinkedList();
};
// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
    head = new T;
}
template <class T>
T createMemory()
{
    return new T;
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
        head = data
    }

    
}