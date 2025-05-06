#include<iostream>
#include<string>
using namespace std;

int main(int argc ,char **argv)
{
    int i=0;
    string m=" ";
    for(;i!=argc;i++)
    {
        m+=(argv[i]);
    }
    cout<<m<<endl;
    return 0;
}