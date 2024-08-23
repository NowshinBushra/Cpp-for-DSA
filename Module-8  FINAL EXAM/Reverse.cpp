#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student S[n];

    for(int i=0; i< n; i++)
    {
        cin >> S[i].nm >> S[i].cls >> S[i].sec >> S[i].id;
    }

    int i=0 ,j=n-1;
    while(i<j)
    {
        swap(S[i].sec, S[j].sec);
        i++;
        j--;
    }

    for(int i=0; i<n; i++)
    {
        cout << S[i].nm << " " << S[i].cls << " " << S[i].sec << " " << S[i].id << endl;
    }

    return 0;
}
