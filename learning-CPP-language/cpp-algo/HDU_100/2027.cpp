#include <bits/stdc++.h>
using namespace std;

// HDU 2027

int main()
{
    int num = 0;
    cin >> num;
    getchar();
    while (num--)
    {
        string str;

        getline(cin, str);
        map<char, int> map;
        map['a'] = 0;
        map['e'] = 0;
        map['i'] = 0;
        map['o'] = 0;
        map['u'] = 0;
        auto eof = str.size();
        for (decltype(eof) i = 0; i != eof; ++i)
        {
            if (str[i] == 'a')
                map['a']++;
            else if (str[i] == 'e')
                map['e']++;
            else if (str[i] == 'i')
                map['i']++;
            else if (str[i] == 'o')
                map['o']++;
            else if (str[i] == 'u')
                map['u']++;
            else
                continue;
        }
        cout << "a:" << map['a'] << endl
             << "e:" << map['e'] << endl
             << "i:" << map['i'] << endl
             << "o:" << map['o'] << endl
             << "u:" << map['u'] << endl;
        if (num != 0)
            cout << endl;
    }
    return 0;
}