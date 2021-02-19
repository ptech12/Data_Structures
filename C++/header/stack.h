// #include <ostream>

template <class T>
class Stack
{
private:
	int top;
	int max;
	T *stk;
public:
	Stack(int size);
	bool push(T x);
	T pop();
	T peek();
	bool isEmpty();
	bool isFull();
	int stackSize();
};

template <class T>
Stack<T>::Stack(int size)
{
	top = -1;
	max = size;
	stk = new T(max);
}
template <class T>
bool Stack<T>::isEmpty()
{
	return (top < 0 ? true : false);
}

template <class T>
bool Stack<T>::isFull()
{
	return (top > (max-1) ? true : false);
}

template <class T>
int Stack<T>::stackSize()
{
	return top+1;
}

template <class T>
T Stack<T>::peek()
{
	return stk[top];
}

template <class T>
bool Stack<T>::push(T x)
{
	if(isFull())
		return false;
	stk[++top] = x;

	return true;
}

template <class T>
T Stack<T>::pop()
{
	if (isEmpty())
	{
		return -1;
	}
	T x = stk[--top];
	return x;
}