#pragma once
#include "Fraction.h"
class Complex{
private:
    Fraction _re;
    Fraction _im;
public:
    Complex(){
        _re = Fraction(0, 0);
        _im = Fraction(0, 0);
    }
    Complex(Fraction re, Fraction im){
        _re = re;
        _im = im;
    }

    Complex& operator=(const Complex& tmp){
        _re = tmp._re;
        _im = tmp._im;
        return *this;
    }



    friend std::ostream& operator<<(std::ostream &os, const Complex &complex)
    {
            os << complex._re;
            if (complex._im != 0 || (complex._im == 0 && complex._im.GetSqrt() != 0)){
                if (complex._im > 0) return os << " + " << complex._im << " * i";
                if (complex._im < 0) return os << " - " << -complex._im << " * i";
            }
            if (complex._im == 0 && complex._im.GetSqrt() == 0) return os;
            return os << complex._im << " * i";
    }
};