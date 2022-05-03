#include "Figure.h"
#include <iostream>

int main()
{
    Rhomb a(4, 5);
    double s = a.square();
    std::cout << s;
}