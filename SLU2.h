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
    double _x3;
    double _x4;
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
            // _x3
        }
    };
};

