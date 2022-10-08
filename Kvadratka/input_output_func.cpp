#include <stdio.h>
#include "roots_exam.h"
#include <assert.h>

static void clear_input (void)
{
    while (getchar() != '\n');
}


void output (enum Roots roots_num, const double x1, const double x2)
{
    switch (roots_num)
    {
        case Roots_Noroots:
            printf("No solution\n");
            break;

        case Roots_Infinityroots:
            printf("Infinity solution\n");
            break;

        case Roots_One:
            printf("x = %lg \n", x1);
            break;

        case Roots_Two:
            printf("x1 = %lg ; x2 = %lg \n", x1, x2);
            break;

        case Roots_Default:
            printf("Error \n");
            break;
    }
}


int input (double *a, double *b, double *c)
{
    assert(a);
    assert(b);
    assert(c);

    printf("Enter the coefficients : \n");

    while (scanf ("%lg %lg %lg", a, b, c) != 3)
    {
        printf ("Error: incorrect input. \n");
    }

    clear_input ();
}
