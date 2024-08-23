#include<bits/stdc++.h>
using namespace std;
int* sort_it(int x)
{
    int *a = new int[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    sort(a, a+x, greater<int>());
    return a;
}
int main()
{
    int n;
    cin>>n;
    int *a = sort_it(n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
