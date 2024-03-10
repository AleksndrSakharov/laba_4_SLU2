#pragma once
#include "Fraction.h"
#include "Complex.h"

class SLU2
{
private:
    double _a;
    double _b;
    double _c;
    double _d;
    Complex _x1;
    Complex _x2;
public:
    SLU2(){
        _a = 1;
        _b = 1;
        _c = 1;
    };
    SLU2(double a, double b, double c){
        _a = a;
        _b = b;
        _c = c;
    };

    void countD(){
        _d = pow(_b, 2) - 4 * _a * _c;
    };

    void setA(double x){
        _a = x;
    };

    void setB(double x){
        _b = x;
    };

    void setC(double x){
        _c = x;
    };

    void countAnswer();

    // Fraction& operator=(const SLU2& tmp){
    //     _a = tmp._a;
    //     _b = tmp._b;
    //     _c = tmp._c;
    //     return *this;
    // }


    friend std::istream& operator>>(std::istream &in, SLU2 &tmp)
    {
        double a, b, c;
        in >> a >> b >> c;
        tmp.setA(a);
        tmp.setB(b);
        tmp.setC(c);
        return in;
    }
};

