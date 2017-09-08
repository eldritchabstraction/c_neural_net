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

double sigmoid(double x)
{
    return (1 / (1 + exp(-x)));
}

class layer {
public:
    layer(vector<double> &theta): _theta(theta) {};

    double process(vector<double> &x)
    {
        double sum = 0;

        if (_theta.size() != x.size())
        {
            cout << "Error: theta size: " << _theta.size() << " and x size: " << x.size() << " must be symmetric\n";
            return 0;
        }

        for (int i = 0; i < x.size(); i++)
        {
            sum += x[i] * _theta[i];
        }

        return sigmoid(sum);
    }

private:
    vector<double> _theta;
};

int main (void)
{
    vector<double> theta    = {-10, 20, 20};
    vector<double> x_one    = {1, 0, 0};
    vector<double> x_two    = {1, 0, 1};
    vector<double> x_three  = {1, 1, 0};
    vector<double> x_four   = {1, 1, 1};
    layer layer_one(theta);

    cout << "x = {0, 0} -> " << layer_one.process(x_one) << endl;
    cout << "x = {0, 1} -> " << layer_one.process(x_two) << endl;
    cout << "x = {1, 0} -> " << layer_one.process(x_three) << endl;
    cout << "x = {1, 1} -> " << layer_one.process(x_four) << endl;

}




