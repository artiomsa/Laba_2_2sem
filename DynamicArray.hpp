#pragma once
#include <iostream>
using namespace std;
class Exception1 {};
template <class T>
class DynamicArray
{
private:
	T* items;
	bool* itemsCheck;
	int size;
public:
	//________________________КОНСТРУКТОРЫ_________________________
	//заданная длина
	DynamicArray(int size)
	{
		if (size < 0) {
			throw new Exception1;
		}
		this->size = size;
		this->items = new T[size];
		this->itemsCheck = new bool[size];
		for (int i = 0; i < size; i++) {
			this->itemsCheck[i] = false;
		}

	}
	//копировать элементы
	DynamicArray(T* items, int count)
	{
		this->size = count;
		this->items = new T[count];
		this->itemsCheck = new bool[count];
		for (int i = 0; i < count; i++) {
			//cout << "jdfjlk" << endl;
			this->items[i] = items[i];
			this->itemsCheck[i] = true;
		}
	}
	//копирующий конструктор
	DynamicArray(DynamicArray<T>& dynamicArray)
	{
		this->size = dynamicArray.size;
		this->items = new T[this->size];
		this->itemsCheck = new bool[this->size];
		for (int i = 0; i < this->size; i++) {
			this->items[i] = dynamicArray.items[i];
			this->itemsCheck[i] = true;
		}
	}
	//________________________ОПЕРАЦИИ_________________________
	//получение элемента по индексу
	T Get(int index)
	{
		if (index >= this->size || index < 0 ) {
			throw new Exception1;
		}
		return this->items[index];
	}
	// получение длины
	int GetSize()
	{
		return this->size;
	}
	//задать элемент по индексу
	void Set(int index, T value)
	{
		if (index >= this->size || index < 0) {
			throw new Exception1;
		}
		this->items[index] = value;
		this->itemsCheck[index] = true;
	}
	//изменить размер массива
	void Resize(int newSize)
	{
		if (newSize < 0) {
			throw new Exception1;
		}
		if (newSize <= this->size) {
			T* pa = new T[newSize];
			for (int i = 0; i < newSize; i++) {
				pa[i] = this->items[i];
				this->itemsCheck[i] = true;
			}
			delete[] this->items;
			this->items = pa;
			this->size = newSize;
		}
		if (newSize > this->size) {
			T* pa = new T[newSize];
			for (int i = 0; i < this->size; i++) {
				pa[i] = this->items[i];
				this->itemsCheck[i] = true;
			}
			for (int i = this->size; i < newSize; i++) {
				this->itemsCheck[i] = false;
			}
			delete[] this->items;
			this->items = pa;
			this->size = newSize;
		}
	}
};