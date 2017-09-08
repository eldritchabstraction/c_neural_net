/*
 * main.cpp
 *
 *  Created on: Sep 8, 2017
 *      Author: eldr
 */

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class sigmoid {
public:
    sigmoid() {};

    void demo(double start, double finish)
    {
        printf("Demoing sigmoid between values of %f and %f\n", start, finish);

        for (double i = start; i < finish; i += 0.1)
        {
            printf("sigmoid(%f) = %f\n", i, exercise(i));
        }

    }

    double operator()(double x)
    {
        return exercise(x);
    }

private:
    double exercise(double x)
    {
        return (1 / (1 + exp(-x)));
    }
};

int main (void)
{
   sigmoid a_sigmoid;

}




