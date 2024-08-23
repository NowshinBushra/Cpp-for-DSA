#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[100005];

    while(cin.getline(S, 100005))
    {
        sort(S, S+strlen(S));
        int n=strlen(S);
        for(int i=0; i<n; ++i)
        {
            if (S[i] == ' ')
                continue;
            cout << S[i];
        }
        cout << endl;
    }
    return 0;
}
