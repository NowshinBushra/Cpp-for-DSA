#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    string S, X ;
    cin >> S >> X;

    int t = S.find(X);
    while(S.find(X) != -1)
    {
        S.replace(S.find(X), X.length(),"#");
        t = S.find (X);
        t++;
    }
    cout << S <<endl;
    }
    return 0;
}
