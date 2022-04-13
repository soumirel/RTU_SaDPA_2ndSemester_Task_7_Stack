#include "Stack.h"
#include <iostream>


template<typename T>
void Stack<T>::resizeArray(size_t newSize)
{
	T* newArray = new T[newSize];
	for (size_t i = 0; (i < this->size && i < newSize); i++)
	{
		newArray[i] = (this->array)[i];
	}

	delete[] array;
	array = newArray;
	this->size = newSize;
}


template<typename T>
T Stack<T>::pop()
{
	T popedEl = (this->array)[size - 1];
	resizeArray(this->size - 1);
	return (popedEl);
}


template<typename T>
void Stack<T>::push(T element)
{
	resizeArray(size + 1);
	this->array[size - 1] = element;
}


template<typename T>
T Stack<T>::top()
{
	return (this->array[size - 1]);
}


template<typename T>
void Stack<T>::print()
{
	for (size_t i = 0; i < this->size; i++)
	{
		std::cout.width(5);
		std::cout << (this->array)[i];
	}
}


template<typename T>
void Stack<T>::clear()
{
	delete array;
	array = new T[0];
	this->size = 0;
}


template<typename T>
bool Stack<T>::isEmpty()
{
	return (size > 0);
}

