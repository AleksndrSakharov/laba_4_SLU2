#include "Fraction.h"

void Fraction::MethodSocr(){
    int32_t numerator = abs(_numerator), denominator = _denominator;
    if (numerator == 0 || denominator == 0) return;
    while (numerator != denominator || numerator < 0 || denominator < 0){
        if (numerator > denominator) numerator -= denominator;
        else denominator -= numerator;
    }
    _numerator /= numerator;
    _denominator /= denominator;
}

void Fraction::SetDenominator(uint32_t new_denominator){
    if (new_denominator != 0)
        _denominator = new_denominator;
}

void Fraction::SetNumerator(int32_t new_numerator){
    _numerator = new_numerator;
}

void Fraction::SetSqrt(double new_sqrt){
    _sqrt = new_sqrt;
}

Fraction::Fraction(){
    // std::cout << "Construct default" << std::endl;
    _sqrt = 0;
    _numerator = 0;
    _denominator = 1;
}

Fraction::Fraction(const Fraction& fraction) {
    // std::cout << "Construct copy" << std::endl;
    _sqrt = fraction._sqrt;
    _numerator = fraction._numerator;
    _denominator = fraction._denominator;
}