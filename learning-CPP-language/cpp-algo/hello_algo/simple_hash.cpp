#include <iostream>
#include <string>
using namespace std;

long long addHash(string str)
{
    long long hash = 0;
    const long long MODULUS = 1000000007;
    for (const char s : str)
    {
        hash = (hash + (int)s) % MODULUS;
    }
    return hash;
}

long long mulHash(string str)
{
    long long hash = 0;
    const long long MODULUS = 1000000007;
    for (const char s : str)
    {
        hash = (hash * 35 + (int)s) % MODULUS;
    }
    return hash;
}

long long xorHash(string str)
{
    long long hash = 0;
    const long long MODULUS = 1000000007;
    for (const char s : str)
    {
        hash ^= (int)s;
    }
    return hash;
}

long long rotHash(string str)
{
    long long hash = 0;
    const long long MODULUS = 1000000007;
    for (const char s : str)
    {
        hash = ((hash >> 4) ^ (s << hash) ^ (int)s) % MODULUS;
    }
    return hash;
}

int main()
{
    return 0;
}