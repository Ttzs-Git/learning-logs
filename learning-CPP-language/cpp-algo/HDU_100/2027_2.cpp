#include<bits/stdc++.h>
using namespace std;

// HDU 2027

int main()
{
    int num=0;
    cin>>num;
    getchar(); 
    while(num--)
    {
        string str;
        
        getline(cin,str);
        int arr[]={0,0,0,0,0};
        auto eof=str.size();
        for(decltype(eof) i=0;i!=eof;++i)
        {
            if(str[i]=='a') arr[0]++;
            else if(str[i]=='e') arr[1]++;
            else if(str[i]=='i') arr[2]++;
            else if(str[i]=='o') arr[3]++;
            else if(str[i]=='u') arr[4]++;
            else continue;
        }
        cout<<"a:"<<arr[0]<<endl
        <<"e:"<<arr[1]<<endl
        <<"i:"<<arr[2]<<endl
        <<"o:"<<arr[3]<<endl
        <<"u:"<<arr[4]<<endl;
        if(num!=0) cout<<endl;
    }
    return 0;
}