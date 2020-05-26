#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"
#include "Sequence.hpp"
#include "ArraySequence.hpp"
#include "LinkedListSequence.hpp"
#include "Complex.hpp"
#include "Functions_items.hpp"
#include "Functions_vectors.hpp"
#include "Vector.hpp"
void TestArraySequence()
{
    int check = 0;
    Sequence<int>* inp = new ArraySequence<int>();
    if(inp->GetLength() == 0)
    {
        check++;
    }
    delete inp;
    Sequence<double>* dop = new ArraySequence<double>();
    if(dop->GetLength() == 0)
    {
        check++;
    }
    delete dop;
    Sequence<Complex>* cop = new ArraySequence<Complex>();
    if(cop->GetLength() == 0)
    {
        check++;
    }
    delete cop;
    int* arin = new int[100];
    double* ardo = new double[100];
    Complex* arco = new Complex[100];
    for(int i = 0; i < 100; i++)
    {
        arin[i]= i;
        ardo[i] = i;
        Complex tek(i,i);
        arco[i] = tek;
    }
    inp = new ArraySequence<int>(arin,100);
    dop = new ArraySequence<double>(ardo,100);
    cop = new ArraySequence<Complex>(arco,100);
    if(inp->GetLength() == 100 && dop->GetLength()== 100 && cop->GetLength()==100)
    {
        check++;
    }
    int k = 0;
    for(int i = 0; i < 100;i++)
    {
        if(inp->Get(i) == i && dop->Get(i) == i && cop->Get(i).GetReal() == i && cop->Get(i).GetIm() == i)
        {
            k++;
        }
    }
    if (k==100)
    {
        check++;
    }
    if(inp->GetFirst() == 0 && dop->GetFirst() == 0 && cop->GetFirst().GetReal() == 0 && cop->GetFirst().GetIm() ==0)
    {
        check++;
    }
    if(inp->GetLast() == 99 && dop->GetLast() == 99 && cop->GetLast().GetReal() == 99 && cop->GetLast().GetIm() == 99)
    {
        check++;
    }
    inp->InsertAt(999,5);
    dop->InsertAt(999,5);
    Complex ins(999,999);
    cop->InsertAt(ins,5);
    if(inp->Get(5) == 999 && dop->Get(5) == 999 && cop->Get(5).GetReal() == 999 && cop->Get(5).GetIm() ==999)
    {
        if(inp->GetLength() == 101 && dop->GetLength()== 101 && cop->GetLength()==101)
        {
            check++;
        }
    }
    Sequence<int>* inpp = new ArraySequence<int>(arin,100);
    Sequence<double>* dopp = new ArraySequence<double>(ardo,100);
    Sequence<Complex>* copp = new ArraySequence<Complex>(arco,100);
    inp = inp->Concat(inpp);
    dop = dop->Concat(dopp);
    cop = cop->Concat(copp);
    if(inp->GetLength() == 201 && dop->GetLength() == 201 && cop->GetLength() == 201)
    {
        check++;
    }
    k = 0;
    inp = inp->GetSubsequence(0,99);
    dop = dop->GetSubsequence(0,99);
    cop = cop->GetSubsequence(0,99);
    for(int i = 0; i < 5;i++)
    {
        if(inp->Get(i) == i && dop->Get(i)==i && cop->Get(i).GetReal() == i && cop->Get(i).GetIm() == i)
        {
           k++;
        }

    }
    for(int i = 6; i < 100;i++)
    {
        if(inp->Get(i) == i-1 && dop->Get(i)==i-1 && cop->Get(i).GetReal() == i-1 && cop->Get(i).GetIm() == i-1)
        {
            k++;
        }

    }
    if(k == 99)
    {
        check++;
    }
    if (check == 10)
    {
        cout << "ArraySequence --- TRUE"<<endl;
    } else
    {
        cout << "ArraySequence --- FALSE"<<endl;
        cout << check << endl;

    }

}


void TestListSequence()
{
    int check = 0;
    Sequence<int>* inp = new LinkedListSequence<int>();
    if(inp->GetLength() == 0)
    {
        check++;
    }
    delete inp;
    Sequence<double>* dop = new LinkedListSequence<double>();
    if(dop->GetLength() == 0)
    {
        check++;
    }
    delete dop;
    Sequence<Complex>* cop = new LinkedListSequence<Complex>();
    if(cop->GetLength() == 0)
    {
        check++;
    }
    delete cop;
    int* arin = new int[100];
    double* ardo = new double[100];
    Complex* arco = new Complex[100];
    for(int i = 0; i < 100; i++)
    {
        arin[i]= i;
        ardo[i] = i;
        Complex tek(i,i);
        arco[i] = tek;
    }
    inp = new LinkedListSequence<int>(arin,100);
    dop = new LinkedListSequence<double>(ardo,100);
    cop = new LinkedListSequence<Complex>(arco,100);
    if(inp->GetLength() == 100 && dop->GetLength()== 100 && cop->GetLength()==100)
    {
        check++;
    }
    int k = 0;
    for(int i = 0; i < 100;i++)
    {
        if(inp->Get(i) == i && dop->Get(i) == i && cop->Get(i).GetReal() == i && cop->Get(i).GetIm() == i)
        {
            k++;
        }
    }
    if (k==100)
    {
        check++;
    }
    if(inp->GetFirst() == 0 && dop->GetFirst() == 0 && cop->GetFirst().GetReal() == 0 && cop->GetFirst().GetIm() ==0)
    {
        check++;
    }
    if(inp->GetLast() == 99 && dop->GetLast() == 99 && cop->GetLast().GetReal() == 99 && cop->GetLast().GetIm() == 99)
    {
        check++;
    }
    inp->InsertAt(999,5);
    dop->InsertAt(999,5);
    Complex ins(999,999);
    cop->InsertAt(ins,5);
    if(inp->Get(5) == 999 && dop->Get(5) == 999 && cop->Get(5).GetReal() == 999 && cop->Get(5).GetIm() ==999)
    {
        if(inp->GetLength() == 101 && dop->GetLength()== 101 && cop->GetLength()==101)
        {
            check++;
        }
    }
    Sequence<int>* inpp = new LinkedListSequence<int>(arin,100);
    Sequence<double>* dopp = new LinkedListSequence<double>(ardo,100);
    Sequence<Complex>* copp = new LinkedListSequence<Complex>(arco,100);
    inp = inp->Concat(inpp);
    dop = dop->Concat(dopp);
    cop = cop->Concat(copp);
    if(inp->GetLength() == 201 && dop->GetLength() == 201 && cop->GetLength() == 201)
    {
        check++;
    }
    
    if (check == 9)
    {
        cout << "LinkedListSequence --- TRUE"<<endl;
    } else
    {
        cout << "LinkedListSequence --- FALSE"<<endl;
        cout << check << endl;

    }

}
void TestAll()
{
    TestArraySequence();
    TestListSequence();
}