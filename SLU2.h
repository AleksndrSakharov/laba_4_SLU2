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

    void countAnswer(){
        if (_d >= 0){
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction((-_b + pow(_d, 0.5) / 2.0 / _a)), Fraction(0));
                _x2 = Complex(Fraction((-_b - pow(_d, 0.5) / 2.0 / _a)), Fraction(0));
                std::cout << "x1 = " << _x1 << std::endl;
                std::cout << "x2 = " << _x2 << std::endl;
            }
            else{
                std::cout << "x1 = " << -(_b / 2.0) << " + sqrt(" << _d << ") / 2" << _a << std::endl;
                std::cout << "x2 = " << -(_b / 2.0) << " - sqrt(" << _d << ") / 2" << _a << std::endl;
            }
        }
        else{
            _d *= -1;
            if (pow(_d, 0.5) == static_cast<int>(pow(_d, 0.5))){
                _x1 = Complex(Fraction((-_b / 2.0 / _a)), Fraction(-pow(_d, 0.5) / 2.0 / _a));
                _x2 = Complex(Fraction((-_b / 2.0 / _a)), Fraction(-pow(_d, 0.5) / 2.0 / _a));
                std::cout << "x1 = " << _x1 << std::endl;
                std::cout << "x2 = " << _x2 << std::endl;
            }
            else{
                std::cout << "x1 = " << -(_b / 2.0) << " + sqrt(" << _d << ")*i / 2a" << std::endl;
                std::cout << "x2 = " << -(_b / 2.0) << " - sqrt(" << _d << ")*i / 2a" << std::endl;
            }
        }
    };
};

