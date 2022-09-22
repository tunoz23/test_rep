//
// Created by TUN on 13.09.2022.
//
#include <iostream>
#include <vector>
#include <cmath>
#define LOG(a) cout << a << endl
using namespace std;

int getAbsSum(const vector<int>& vect){
    unsigned long long size = vect.size();
    int abs_sum = 0;
    for (int i = 0; i<size; i++)
    {
        int current_element = vect[i];

        if (current_element < 0){
            current_element = 0 - current_element;
        }
        abs_sum += current_element;
    }

    return abs_sum;
}
int triaunglar(int dot){
    int total = 0;
    for (int i = dot; i>0; i--, dot--){
        total += dot;
    }
    return total;
}
bool lastDig(int a, int b, int c) {
    int ld_a = a % 10;
    int ld_b = b % 10;
    int ld_c = c % 10;
    int ld_ab = (ld_a * ld_b) % 10;
    if (ld_ab == ld_c){

     return true;
    }
    else{
        return false;
    }
}
double quadraticEquation(int a, int b, int c) {
    int discr = b*b - 4 * a *c;
    double root =  (-b + sqrt(discr)) / (2 * a);
    return root;
}
//It(test10){Assert::That(cars(97, 6, 10), Equals(5));} = 6
int cars(int wheels, int bodies, int figures) {
    //4 wheels, 1 car body, and 2 figures
    int wh = wheels / 4 - ((wheels % 4)/ 4);
    //int bd = bodies / 1 - ((bodies % 1)/ 1);
    int fig = figures / 2 - ((figures % 2)/ 2);
    if (wh < bodies and wh < fig){
        return wh;

    }
    else if (bodies < wh and bodies < fig){
        return bodies;

    }
    else{
        return fig;
    }
}
int main()
{

    cars(10,20,30);

    return 0;
}
