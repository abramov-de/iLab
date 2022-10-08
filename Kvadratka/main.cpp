#include <stdio.h>
#include <math.h>
#include "roots_exam.h"
#include "solve_func.cpp"
#include "input_output_func.cpp"


int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;
    Roots roots_num = Roots_Default;


 input (&a, &b, &c);
 roots_num = solve_sq (a, b, c, &x1, &x2);
 output (roots_num, x1, x2);

}
