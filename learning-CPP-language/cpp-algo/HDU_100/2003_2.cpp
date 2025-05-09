
#include <cstdio>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define PI 3.1415927
using namespace std;
int main()
{
    double n;
    while (cin >> n)
    {
        double k = fabs(n);
        printf("%.2lf\n", k);
    }
    return 0;
}