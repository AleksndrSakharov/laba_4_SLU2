#include "SLU2.h"


void SLU2::countAnswer(){
    countD();
    if (_d > 0){
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction(((-_b + pow(_d, 0.5)) / (2.0 * _a))), Fraction(0));
                _x2 = Complex(Fraction(((-_b - pow(_d, 0.5)) / (2.0 * _a))), Fraction(0));
                if (_a != 1) std::cout << _a << " * ";
                if (_x1 > 0) std::cout << "(x - " << _x1;
                else std::cout << "(x + " <<_x1 * (-1);
                if (_x2 > 0) std::cout << ")(x - " << _x2 << ")" << std::endl;
                else std::cout << ")(x + " << _x2 * (-1) << ")" << std::endl;
            }
            else{
                _x1 = Complex(Fraction(-_b / (2.0 * _a), _d), Fraction(0));
                _x2 = Complex(Fraction(-_b / (2.0 * _a), -_d), Fraction(0));
                if (_a != 1) std::cout << _a << " * ";
                if (_x1 > 0) std::cout << "(x - " << _x1 << " / " << 2.0 * _a;
                else std::cout << "(x + " << _x1 * (-1) << " / " << 2.0 * _a;
                if (_x2 > 0) std::cout << ")(x - " << _x2 << " / " << 2.0 * _a << ")" << std::endl;
                else std::cout << ")(x + " << _x2 * (-1) << " / " << 2.0 * _a << ")" << std::endl;
            }
        }
        else if(_d == 0){
            _x1 = Complex(Fraction((-_b / (2.0 * _a))), Fraction(0));
            if (_a != 1) std::cout << _a << " * ";
            if (_x1 > 0) std::cout << "(x - " << _x1 << ")^2" << std::endl;
            else std::cout << "(x + " << _x1 * (-1) << ")^2" << std::endl;
        }
        else{
            _d *= -1;
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(-pow(_d, 0.5) / (2.0 * _a)));
                _x2 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(pow(_d, 0.5) / (2.0 * _a)));
                if (_a != 1) std::cout << _a << " * ";
                if (_a != 1) std::cout << _a << " * ";
                if (_x1 > 0) std::cout << "(x - " << _x1;
                else std::cout << "(x + " << _x1 * (-1);
                if (_x2 > 0) std::cout << ")(x - " << _x2 << ")" << std::endl;
                else std::cout << ")(x + " << _x2 * (-1) << ")" << std::endl;
            }
            else{
                _x1 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(0, _d));
                _x2 = Complex(Fraction(-_b / (2.0 * _a)), Fraction(0, -_d));
                if (_a != 1) std::cout << _a << " * ";
                if (_x1 > 0) std::cout << "(x - " << _x1 << " / " << 2.0 * _a;
                else std::cout << "(x + " << _x1 * (-1) << " / " << 2.0 * _a;
                if (_x2 > 0) std::cout << ")(x - " << _x2 << " / " << 2.0 * _a << ")" << std::endl;
                else std::cout << ")(x + " << _x2 * (-1) << " / " << 2.0 * _a << ")" << std::endl;
            }
        }
        return;
}