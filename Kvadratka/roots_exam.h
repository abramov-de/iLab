#ifndef ROOTSEXAMHEADER
#define ROOTSEXAMHEADER

enum Roots
{
    Roots_Default,
    Roots_One,                      //one root
    Roots_Two,                      //two roots
    Roots_Noroots = 630000,         //no roots
    Roots_Infinityroots = 550000    //infinity roots
};

const double error = 0.001;
#endif
