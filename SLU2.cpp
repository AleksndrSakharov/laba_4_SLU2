#include "SLU2.h"


void SLU2::countAnswer(){
    countD();
    if (_d > 0){
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction(((-_b + pow(_d, 0.5)) / (2.0 * _a))), Fraction(0));
                _x2 = Complex(Fraction(((-_b - pow(_d, 0.5)) / (2.0 * _a))), Fraction(0));
                std::cout << "x1 = " << _x1 << std::endl;
                std::cout << "x2 = " << _x2 << std::endl;
            }
            else{
                _x1 = Complex(Fraction(-_b / (2.0 * _a), _d), Fraction(0));
                _x2 = Complex(Fraction(-_b / (2.0 * _a), -_d), Fraction(0));
                std::cout << "x1 = " << _x1 << " / " << 2.0 * _a << std::endl;
                std::cout << "x2 = " << _x2 << " / " << 2.0 * _a << std::endl;
            }
        }
        else if(_d == 0){
            _x1 = Complex(Fraction((-_b / (2.0 * _a))), Fraction(0));
            std::cout << "x1 = " << _x1 << std::endl;
        }
        else{
            _d *= -1;
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(-pow(_d, 0.5) / (2.0 * _a)));
                _x2 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(pow(_d, 0.5) / (2.0 * _a)));
                std::cout << "x1 = " << _x1 << std::endl;
                std::cout << "x2 = " << _x2 << std::endl;
            }
            else{
                _x1 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(0, _d));
                _x2 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(0, -_d));
                std::cout << "x1 = " << _x1 << " / " << 2.0 * _a << std::endl;
                std::cout << "x2 = " << _x2 << " / " << 2.0 * _a << std::endl;
            }
        }
        return;
}