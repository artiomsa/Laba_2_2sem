#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"
#include "Sequence.hpp"
#include "ArraySequence.hpp"
#include "LinkedListSequence.hpp"
#include "Complex.hpp"
#include "Functions_items.hpp"
#include "Vector.hpp"
void PrintVector(Vector<int>* c)
{
	for (int i = 0; i < c->GetLength();i++)
	{
		cout << c->Get(i) << endl;
	}
}
void PrintVector(Vector<double>* c)
{
	for (int i = 0; i < c->GetLength();i++)
	{
		cout << c->Get(i) << endl;
	}
}
void PrintVector(Vector<Complex>* c)
{
	for (int i = 0; i < c->GetLength();i++)
	{
		cout << (c->Get(i)).GetReal() << " " << (c->Get(i)).GetIm() << endl;
	}
}

Vector<int>* FillVectorArrayInt(int count)
{
	Sequence<int>* items = new ArraySequence<int>();
	int item;
	for (int i = 0; i < count; i++)
	{
		cin >> item;
		items->Prepend(item);
	}
	Vector<int>* res = new Vector<int>(items);
	return res;
}
Vector<double>* FillVectorArrayDouble(int count)
{
	Sequence<double>* items = new ArraySequence<double>();
	double item;
	for (int i = 0; i < count; i++)
	{
		cin >> item;
		items->Prepend(item);
	}
	Vector<double>* res = new Vector<double>(items);
	return res;
}
Vector<Complex>* FillVectorArrayComplex(int count)
{
	Sequence<Complex>* items = new ArraySequence<Complex>();
	//Complex item;
	double re, im;
	for (int i = 0; i < count; i++)
	{
		cin >> re;
		cin >> im;
		Complex item(re, im);
		items->Prepend(item);
	}
	Vector<Complex>* res = new Vector<Complex>(items);
	return res;
}

/*Sequence<int>* FillVectorListInt(int count)
{
	Sequence<int>* res = new LinkedListSequence<int>();
	int item;
	for (int i = 0; i < count; i++)
	{
		cin >> item;
		res->Prepend(item);
	}
	return res;
}
Sequence<double>* FillVectorListDouble(int count)
{
	Sequence<double>* res = new LinkedListSequence<double>();
	double item;
	for (int i = 0; i < count; i++)
	{
		cin >> item;
		res->Prepend(item);
	}
	return res;
}
Sequence<Complex>* FillVectorListComplex(int count)
{
	Sequence<Complex>* res = new LinkedListSequence<Complex>();
	Complex item;
	for (int i = 0; i < count; i++)
	{
		cin >> item.real;
		cin >> item.imaginary;
		res->Prepend(item);
	}
	return res;
}
*/
Vector<int>* SummVectors(Vector<int>* a, Vector<int>* b)
{
	Sequence<int>* c = new ArraySequence<int>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		c->Prepend(a->Get(i)+b->Get(i));
	}
	Vector<int>* cc = new Vector<int>(c);
	return cc;
}
Vector<double>* SummVectors(Vector<double>* a, Vector<double>* b)
{
	Sequence<double>* c = new ArraySequence<double>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		c->Prepend(a->Get(i) + b->Get(i));
	}
	Vector<double>* cc = new Vector<double>(c);
	return cc;
}
Vector<Complex>* SummVectors(Vector<Complex>* a, Vector<Complex>* b)
{
	Sequence<Complex>* c = new ArraySequence<Complex>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		Complex t1(a->Get(i).GetReal(), a->Get(i).GetIm());
		Complex t2(b->Get(i).GetReal(), b->Get(i).GetIm());

		c->Prepend(t1+t2);
	}
	Vector<Complex>* cc = new Vector<Complex>(c);

	return cc;
}

Vector<double>* ScalDounleVector(Vector<int>* a, double b)
{
	Sequence<double>* c = new ArraySequence<double>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		c->Prepend(a->Get(i)*b);
	}
	Vector<double>* cc = new Vector<double>(c);
	return cc;
}
Vector<double>* ScalDounleVector(Vector<double>* a, double b)
{
	Sequence<double>* c = new ArraySequence<double>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		c->Prepend(a->Get(i) * b);
	}
	Vector<double>* cc = new Vector<double>(c);
	return cc;
}
Vector<Complex>* ScalDounleVector(Vector<Complex>* a, double b)
{
	Sequence<Complex>* c = new ArraySequence<Complex>();
	for (int i = 0; i < a->GetLength(); i++)
	{
		c->Prepend(a->Get(i) * b);
	}
	Vector<Complex>* cc = new Vector<Complex>(c);
	return cc;
}

int ScalCompVectors(Vector<int>* a, Vector<int>* b)
{
	int c = 0;
	for (int i = 0; i < a->GetLength(); i++)
	{
		c += (a->Get(i)*b->Get(i));
	}
	return c;
}
double ScalCompVectors(Vector<double>* a, Vector<double>* b)
{
	int c = 0;
	for (int i = 0; i < a->GetLength(); i++)
	{
		c += (a->Get(i) * b->Get(i));
	}
	return c;
}
Complex ScalCompVectors(Vector<Complex>* a, Vector<Complex>* b)
{
	Complex c(0,0);
	for (int i = 0; i < a->GetLength(); i++)
	{
		c = c + a->Get(i) * b->Get(i);
	}
	return c;
}
double Norma(Vector<int>* a)
{
	double result = 0;
	for (int i = 0; i < a->GetLength();i++)
	{
		result += a->Get(i)*a->Get(i);
	}
	return sqrt(result);
}
double Norma(Vector<double>* a)
{
	double result = 0;
	for (int i = 0; i < a->GetLength();i++)
	{
		result += a->Get(i) * a->Get(i);
	}
	return sqrt(result);
}
double Norma(Vector<Complex>* a)
{
	Complex c(0, 0);
	for (int i = 0; i < a->GetLength(); i++)
	{
		c = c + a->Get(i) * a->Get(i);
	}
	double length =sqrt( c.GetReal() * c.GetReal() + c.GetIm() * c.GetIm());
	double res = sqrt(length)*();
	return ;
}
