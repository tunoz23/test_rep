//
// Created by TUN on 13.09.2022.
//
#include <iostream>
#include <vector>
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

int main()
{
    vector<int> v1 = {-10, 20, 30 ,40};
    int a = 10;
    LOG(math(v1));
    return 0;
}
