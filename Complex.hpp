#pragma once
class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(double real, double imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    double GetReal()
    {
        return this->real;
    }
    double GetIm()
    {
        return this->imaginary;
    }
};










Complex operator +(Complex other1, Complex other2)
{
    Complex temp(other1.GetReal() + other2.GetReal(), other1.GetIm() + other2.GetIm());
    return temp;
}
Complex operator -(Complex other1, Complex other2)
{
    Complex temp(other1.GetReal() - other2.GetReal(), other1.GetIm() - other2.GetIm());
    return temp;
}
Complex operator *(Complex other1, Complex other2)
{
    Complex temp(other1.GetReal() * other2.GetReal() - other1.GetIm() * other2.GetIm(), other1.GetIm() * other2.GetReal() + other1.GetReal() * other2.GetIm());
    return temp;
}
Complex operator *(Complex other1, double other2)
{
    Complex temp(other1.GetReal()*other2, other1.GetIm() * other2);
    return temp;
}
Complex operator *(double other2 , Complex other1)
{
    Complex temp(other1.GetReal() * other2, other1.GetIm() * other2);
    return temp;
}
Complex operator /(Complex other1,Complex other2)
{
    Complex temp((other1.GetReal()*other2.GetReal() + other1.GetIm()*other2.GetIm())/(other2.GetReal()*other2.GetReal()+other2.GetIm()*other2.GetIm()),(other1.GetIm()*other2.GetReal()-other1.GetReal()*other2.GetIm())/(other2.GetReal()*other2.GetReal() + other2.GetIm()*other2.GetIm()));
    return temp;
}
