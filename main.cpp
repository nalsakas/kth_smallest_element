#include "kth_smallest.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "kth smallest element of array" << endl;
    vector<int> b = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << kth_smallest(b, k) << endl;

    return 0;
}