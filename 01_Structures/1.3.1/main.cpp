#include <iostream>
using namespace std;

class complexNumber
{
    public:
        int real;
        int imaginary;
};

class complexMaths: public complexNumber
{
    public:
        void addComplexNumbers(complexNumber a, complexNumber b)
        {
            complexNumber sum;

            sum.real = a.real + b.real;
            sum.imaginary = a.imaginary + b.imaginary;

            cout << "Sum of two complex numbers is : " << sum.real << " + i" << sum.imaginary << endl;           
        }

        void multiplyComplexNumbers(complexNumber a, complexNumber b)
        {
            complexNumber product;

            product.real = (a.real * b.real) - (a.imaginary * b.imaginary);
            product.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);

            cout << "Product of two complex numbers is : " << product.real << " + i" << product.imaginary << endl;
        }

        void negateComplexNumber(complexNumber a)
        {
            complexNumber negative;

            negative.real = -a.real;
            negative.imaginary = -a.imaginary;

            cout << "Negative of complex number is : (" << negative.real << ") + i(" << negative.imaginary << ")" << endl;
        }
};

int main()
{
    complexNumber a;
    complexNumber b;

    a.real = 2;
    a.imaginary = 3;

    b.real = 3;
    b.imaginary = 2;

    complexMaths operation;

    operation.addComplexNumbers(a, b);
    operation.multiplyComplexNumbers(a, b);
    operation.negateComplexNumber(a);
    

    return 0;
}