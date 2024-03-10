#include "Fraction.h"
#include "Complex.h"
#include "SLU2.h"

int main(){
    SLU2 uravnenie = SLU2();
    std::cin >> uravnenie;
    uravnenie.countAnswer();
    return 0;
}