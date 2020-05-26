#include <iostream>
#include "Complex.hpp"
#include "Functions_vectors.hpp"
#include "Vector.hpp"
#include "Tests.hpp"
using namespace std;
int main(int argc, const char* argv[]) {
    TestAll();
    int con = 1;
    while (con == 1)
    {
        cout << "Сhoose type of elements int->1 double->2 complex->3" << endl;
        int itemCode;
        cin >> itemCode;
        if (itemCode != 1 && itemCode != 2 && itemCode != 3)
        {
            cout << "Error_0" << endl;
        }
        cout << "Enter size of vectors" << endl;
        int size;
        cin >> size;
        if (itemCode == 1)
        {
            Vector<int>* a = FillVectorArrayInt(size);
            Vector<int>* b = FillVectorArrayInt(size);

            cout << "For + -> 1  || For *double -> 2  || For *vector -> 3  || For normal Vector -> 4 || For norma -> 5"<< endl;
            int operationCode;
            cin >> operationCode;
            if (operationCode == 1)
            {
                Vector<int>* c = SummVectors(a, b);
                PrintVector(c);
            }
            if (operationCode == 2)
            {
                int num;
                cout << "Choose 1 or 2" << endl;
                cin >> num;
                cout << "Enter value" << endl;
                int value;
                cin >> value;
                if (num == 1)
                {
                    Vector<double>* c = ScalDounleVector(a, value);
                    PrintVector(c);


                }
                if (num == 2)
                {
                    Vector<double>* c = ScalDounleVector(b, value);
                    PrintVector(c);

                }


            }
            if (operationCode == 3)
            {
                int c = ScalCompVectors(a, b);
                cout << c << endl;
            }
            if (operationCode == 4)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    VectorNorm(a);
                }
                if(num == 2)
                {
                    VectorNorm(b);
                }

            }
            if(operationCode == 5)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    double res;
                    res = Norma(a);
                    cout << res << endl;
                }
                if(num == 2)
                {
                    double res;
                    res = Norma(b);
                    cout << res << endl;
                }
            }

        }
        if (itemCode == 2)
        {
            Vector<double>* a = FillVectorArrayDouble(size);
            Vector<double>* b = FillVectorArrayDouble(size);
            cout << "For + -> 1  || For *double -> 2  || For *vector -> 3  || For normal Vector -> 4  || For norma -> 5" << endl;
            int operationCode;
            cin >> operationCode;
            if (operationCode == 1)
            {
                Vector<double>* c = SummVectors(a, b);
                PrintVector(c);
            }
            if (operationCode == 2)
            {
                int num;
                cout << "Choose 1 or 2" << endl;
                cin >> num;
                cout << "Enter value" << endl;
                int value;
                cin >> value;
                if (num == 1)
                {
                    Vector<double>* c = ScalDounleVector(a, value);
                    PrintVector(c);


                }
                if (num == 2)
                {
                    Vector<double>* c = ScalDounleVector(b, value);
                    PrintVector(c);

                }
            }
            if (operationCode == 3)
            {
                double c = ScalCompVectors(a, b);
                cout << c << endl;
            }
            if (operationCode == 4)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    VectorNorm(a);
                }
                if(num == 2)
                {
                    VectorNorm(b);
                }

            }
            if(operationCode == 5)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    double res;
                    res = Norma(a);
                    cout << res << endl;
                }
                if(num == 2)
                {
                    double res;
                    res = Norma(b);
                    cout << res << endl;
                }
            }
        }
        if (itemCode == 3)
        {
            Vector<Complex>* a = FillVectorArrayComplex(size);
            Vector<Complex>* b = FillVectorArrayComplex(size);
            cout << "For + -> 1  || For *double -> 2  || For *vector -> 3  || For normal Vector -> 4  || For norma ->5" << endl;
            int operationCode;
            cin >> operationCode;
            if (operationCode == 1)
            {
                Vector<Complex>* c = SummVectors(a, b);
                PrintVector(c);

            }
            if (operationCode == 2)
            {
                int num;
                cout << "Choose 1 or 2" << endl;
                cin >> num;
                cout << "Enter value" << endl;
                int value;
                cin >> value;
                if (num == 1)
                {
                    Vector<Complex>* c = ScalDounleVector(a, value);
                    PrintVector(c);
                }
                if (num == 2)
                {
                    Vector<Complex>* c = ScalDounleVector(b, value);
                    PrintVector(c);
                }
            }
            if (operationCode == 3)
            {
                Complex c = ScalCompVectors(a, b);
                cout << c.GetReal() << " " << c.GetIm() << endl;
            }
            if (operationCode == 4)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    VectorNorm(a);
                }
                if(num == 2)
                {
                    VectorNorm(a);
                }

            }
            if(operationCode == 5)
            {
                cout << "choose 1 or 2" << endl;
                int num;
                cin >> num;
                if (num == 1)
                {
                    Norma(a);
                }
                if(num == 2)
                {
                    Norma(b);
                }
            }

        }
        cout << "For continue press->1" << endl;
        cin >> con;
    }
    return 0;
}