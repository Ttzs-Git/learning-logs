#include<bits/stdc++.h>
using namespace std;

// HDU 2031
// char jz_16[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
// void trans(int N,int R)
// {
//     if(R<10){
//     if(N<R) cout<<N;
//     else
//     {
//         trans(N/R,R);
//         cout<<N%R;
//     }}
//     else{
//         if(N<R) cout<<jz_16[N];
//         else{
//             trans(N/R,R);
//             cout<<jz_16[N%R];
//         }
//     }
// }

string turn(int N,int R)
{
    stack<char> st;
    string ans;
    while(N>0)
    {
        int tem=N%R;
        if(tem<10)st.push('0'+tem);
        else st.push(tem-10+'A');
        N/=R;
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    return ans;

}

int main()
{
    int N,R;
    while(cin>>N>>R)
    {
        if(N<0){ 
            cout<<"-";
            N=-N;
        }
        //trans(N,R);
        cout<<turn(N,R);
        cout<<endl;
    }
    return 0;
}