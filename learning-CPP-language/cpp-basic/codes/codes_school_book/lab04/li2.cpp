#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

void ReadFile(char *s)
{
    ifstream in;
    in.open(s);
    if (!s)
    {
        cerr << "ERROR!!!" << endl;
        return;
    }
    string n;
    while (!in.eof())
    {
        getline(in, n);
        cout << n << endl;
    }
    in.close();
}
void Change(char *s1, char *s2)
{
    ifstream in;
    ofstream out;
    in.open(s1);
    out.open(s2);
    if (!in || !out)
    {
        cerr << "ERROR" << endl;
    }
    while (!in.eof())
    {
        string n1;
        string n2;
        getline(in, n1);
        for (int i = 0; i < n1.size(); i++)
        {
            n2.push_back(toupper(n1[i]));
        }
        n2.push_back('\n');
        out << n2;
    }
    in.close();
    out.close();
}
int main()
{
    char *p = "ff.txt";
    char *q = "ff2.txt";
    ReadFile(p);
    Change(p, q);
    ReadFile(q);
    return 0;
}