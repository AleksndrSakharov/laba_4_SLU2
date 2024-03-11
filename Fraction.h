#pragma once
#include <cstdint>
#include <cmath>
#include "sstream"
#include <iostream>

class Fraction{
private:
    int32_t _numerator;
    uint32_t _denominator;
    double _sqrt;

public:
    Fraction();

    Fraction(double Res){
        _sqrt = 0;
        if (Res == 0){
            _denominator = 1;
            _numerator = 0;
        }else{
            int32_t flag = 1;
            if (Res < 0){
                flag = -1;
                Res *= flag;
            }
            uint32_t denom = 1;
            int16_t count = 0;
            while (fmod(Res, 1) != 0 && count < 15){
                Res *= 10;
                count++;
            }
            denom = pow(10, count);
            Res *= flag;
            _numerator = Res;
            _denominator = denom;
            MethodSocr(); 
            }
    };

    Fraction(double Res, double SQRT){
        _sqrt = SQRT;
        if (Res == 0){
            _denominator = 1;
            _numerator = 0;
        }else{
            int32_t flag = 1;
            if (Res < 0){
                flag = -1;
                Res *= flag;
            }
            uint32_t denom = 1;
            int16_t count = 0;
            while (fmod(Res, 1) != 0 && count < 15){
                Res *= 10;
                count++;
            }
            denom = pow(10, count);
            Res *= flag;
            _numerator = Res;
            _denominator = denom;
            MethodSocr(); 
            }
    };

    Fraction(int32_t numerator, uint32_t denominator, double SQRT){
        _sqrt = SQRT;
        _numerator = numerator;
        if (denominator == 0)
            throw "Error! Denominator is 0!";
        
        _denominator = denominator;
    }

    Fraction(const Fraction& fraction);

    void MethodSocr();

    Fraction& operator=(const Fraction& tmp){
        _sqrt = tmp._sqrt;
        _numerator = tmp._numerator;
        _denominator = tmp._denominator;
        return *this;
    }

    // Fraction operator*(const Fraction& fraction)const{
    //     int32_t new_numerator = fraction._numerator * x; 
        
    //     Fraction result = Fraction(new_numerator, fraction._denominator, fraction._sqrt);
    //     return result;
    // }


    operator double() const {
        return static_cast<double>(_numerator) / _denominator;
    }

    void SetNumerator(int32_t new_numerator);
    inline int32_t GetNumerator() const { return _numerator; }

    void SetDenominator(uint32_t new_denominator);
    inline uint32_t GetDenominator() const { return _denominator; }

    void SetSqrt(double new_numerator);
    inline double GetSqrt() const { return _sqrt; }

    inline double GetDouble() { return static_cast<double>(_numerator) / _denominator; }

    inline void Print(){
        std::cout << _numerator << "/" << _denominator << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &os, const Fraction &fraction)
    {
        if (fraction._sqrt == 0) return os << fraction._numerator << "/" << fraction._denominator;
        else if (fraction._sqrt < 0){
            if (fraction._numerator == 0) return os << " - sqrt(" << -fraction._sqrt << ")";
            return os << fraction._numerator << "/" << fraction._denominator << " - sqrt(" << -fraction._sqrt << ")";
        } 
        else{
            if (fraction._numerator == 0) return os << " + sqrt(" << fraction._sqrt << ")";
            return os << fraction._numerator << "/" << fraction._denominator << " + sqrt(" << fraction._sqrt << ")";
        } 
    }
};


// bool operator<(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) < (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // bool operator>(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) > (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // bool operator<=(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) <= (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // bool operator>=(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) >= (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // bool operator==(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) == (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // bool operator!=(const Fraction& fraction)const{
    //     if ((static_cast<double>(_numerator) / _denominator) != (static_cast<double>(fraction._numerator) / fraction._denominator))
    //     return true;
    //     else return false;
    // }
    // Fraction& operator++(){
    //     this->_numerator += this->_denominator; 
    //     return *this;
    // }
    // Fraction& operator--(){
    //     this->_numerator -= this->_denominator; 
    //     return *this;
    // }
    // Fraction operator++(int32_t x){
    //     Fraction result(*this);
    //     this->_numerator += this->_denominator; 
    //     return result;
    // }
    // Fraction operator--(int32_t x){
    //     Fraction result(*this);
    //     this->_numerator -= this->_denominator; 
    //     return result;
    // }
    // Fraction operator^(const Fraction& fraction)const{
    //     int32_t new_numerator = pow(fraction._numerator, 2); 
    //     uint32_t new_denominator = pow(fraction._denominator, 2);
        
    //     Fraction result = Fraction(new_numerator, new_denominator);
    //     return result;
    // }
    // Fraction operator-(const Fraction& fraction)const{
    //     int32_t new_numerator = fraction._numerator * (-1); 
    //     Fraction result = Fraction(new_numerator, fraction._denominator);
    //     return result;
    // }