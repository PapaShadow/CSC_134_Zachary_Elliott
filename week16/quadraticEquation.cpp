//@author: Zachary Elliott
//@date: 12-08-25
//@purpose: Final Lab: solve quadratic equation 
//@: x = -b +- Sqrt(b(sqrd) - 4ac) /2a
//@ let a = -.01568 let b = 1.00000 let c = 1.5
//@ x = (-1 +- SQRT((1*1) - 4(-.01568)(1.5))) / 2(-.01568)

#include <iostream> //calls the iostream library for input and output operations
#include <cmath> //calls the cmath library for mathematical functions
#include <iomanip>
using namespace std; //calls the standard namespace

bool isPositive(double);
double squareRoot (double, double, double);
double negBPlusValue(double, double);
double negBMinusValue(double, double);
double divByTwo(double);
double combineAllMathBPlus();
double combineAllMathBMinus();


int main()
{
    double a = -.01568;
    double b = 1.0000;
    double negativeB = -1.00000;
    double c = 1.5;
    double xPositive = 0.0;
    double xNegative = 0.0;

    //std:: cout << squareRoot(b, a, c) << std::endl; this was for testing purposes
    std:: cout << combineAllMathBMinus() << std::endl;
    std:: cout << combineAllMathBPlus() << std::endl;



}

double squareRoot(double b, double a, double c)
{
    double valueB = b;
    double valueA = a;
    double valueC = c;

    double value = sqrt((valueB * valueB) - (4*valueA*valueC));

    return value;
}

double negBPlusValue(double b, double value)
{
    double bravo = b;
    double calcValue = value;
    double result = b + value;
    return result;
}

double negBMinusValue(double b, double value)
{
    double bravo = b;
    double calcValue = value;
    double result = b - value;
    return result;
}

double divByTwo(double a)
{
    double result = (2 * a);

    return result;
}

double combineAllMathBPlus()
{
    double a = -.01568;
    double b = 1.0000;
    double negativeB = -1.00000;
    double c = 1.5;

    double result = (negBPlusValue(negativeB, squareRoot(b, a, c))) / divByTwo(a);

    return result;
}

double combineAllMathBMinus()
{
    double a = -.01568;
    double b = 1.0000;
    double negativeB = -1.00000;
    double c = 1.5;

    double result = (negBMinusValue(negativeB, squareRoot(b, a, c))) / divByTwo(a);

    return result;
}



bool isPositive(double value)
{
    bool valid = false;

    if (value >= 0)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
    return valid;
}