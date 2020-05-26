#pragma once
#include "Sequence.hpp"
#include "ArraySequence.hpp"
template <class T>
class Vector
{
private:
    Sequence<T>* items;
    int size;
public:
    Vector()
    {
        this->items = nullptr;
        this->size = 0;
    }
    Vector(Sequence<T>* items)
    {
        this->items = items;
        this->size = items->GetLength();
    }
    int GetLength()
    {
        return this->size;
    }
    T Get(int index)
    {
        return this->items->Get(index);
    }
};