#pragma once

template<typename T>
class Stack
{
private:
	T* array = new T[0];
	size_t size = 0;

	void resizeArray(size_t newSize);

public:
	Stack() {};
	~Stack() { delete[] array; };

	T pop();
	void push(T element);

	T top();
	void print();

	void clear();

	bool isEmpty();
};


