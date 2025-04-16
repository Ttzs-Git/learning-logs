#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    vector<int> b(begin(a),end(a));
    return 0;
}