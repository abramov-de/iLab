#include <stdio.h>
#include <math.h>
#include "roots_exam.h"
#include <assert.h>

static int zero_exam (const double x)
{
    return (fabs (x) < error);
}


enum Roots solve_lin (const double b, const double c, double *x);


enum Roots solve_sq (const double a, const double b, const double c, double *x1, double *x2)
{

    assert(x1);
    assert(x2);

    if (zero_exam(a))
    {
        return solve_lin (b, c, x1);
    }


    double discr = b * b - 4 * a * c;


    if (zero_exam(discr))
    {
        *x1 = (-b / (2 * a));
        return Roots_One;
    }
    else if (discr < 0)
    {
        return Roots_Noroots;
    }
    else
    {
        double discr_sqrt = sqrt(discr);
        *x1 = (-b + discr_sqrt) / (2 * a);
        *x2 = (-b - discr_sqrt) / (2 * a);
        return Roots_Two;
    }
}


enum Roots solve_lin (const double b, const double c, double *x)
{
    if (zero_exam(b))
    {
        if (zero_exam(c))
        {
            return Roots_Infinityroots;
        }
        else
        {
            return Roots_Noroots;
        }
    }

    *x = -c / b;

    return Roots_One;
}
