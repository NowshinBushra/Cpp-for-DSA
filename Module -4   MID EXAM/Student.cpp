#include<bits/stdc++.h>

using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    int Marks;
};
int main()
{
    int Test;
    cin >> Test;
    while(Test--)
    {
        Student a,b,c;
        cin>>a.id >> a.name >>a.section>>a.Marks;
        cin>>b.id >> b.name >>b.section>>b.Marks;
        cin>>c.id >> c.name >>c.section>>c.Marks;

        if(a.Marks>b.Marks && a.Marks>c.Marks)
        cout<< a.id<<" "<< a.name <<" " << a.section<<" " <<a.Marks<<" "<< endl;

        else if(b.Marks>a.Marks && b.Marks>c.Marks)
        cout<< b.id<<" "<< b.name <<" " << b.section<<" " <<b.Marks<<" "<< endl;

        else if(c.Marks>a.Marks && c.Marks>b.Marks)
        cout<< c.id<<" "<< c.name <<" " << c.section<<" " <<c.Marks<<" "<< endl;


        if(a.Marks==b.Marks && b.Marks==c.Marks)
        {
            if(a.id<b.id && a.id<c.id)
                cout << a.id<<" "<< a.name <<" " << a.section<<" " <<a.Marks<<" "<< endl;
            else if(b.id<a.id && b.id<c.id)
                cout << b.id<<" "<< b.name <<" " << b.section<<" " <<b.Marks<<" "<< endl;
            else if(c.id<a.id && c.id<b.id)
                cout << c.id<<" "<< c.name <<" " << c.section<<" " <<c.Marks<<" "<< endl;
        }
        else if(a.Marks==b.Marks && a.Marks>c.Marks)
        {
            if(a.id<b.id)
                cout << a.id<<" "<< a.name <<" " << a.section<<" " <<a.Marks<<" "<< endl;
            else
                cout << b.id<<" "<< b.name <<" " << b.section<<" " <<b.Marks<<" "<< endl;
        }

        if(b.Marks==c.Marks && b.Marks>a.Marks)
        {
            if(b.id<c.id)
                cout << b.id<<" "<< b.name <<" " << b.section<<" " <<b.Marks<<" "<< endl;
            else
                cout << c.id<<" "<< c.name <<" " << c.section<<" " <<c.Marks<<" "<< endl;
        }
        if(a.Marks==c.Marks && a.Marks>b.Marks)
        {
            if(a.id<c.id)
                cout << a.id<<" "<< a.name <<" " << a.section<<" " <<a.Marks<<" "<< endl;
            else
                cout << c.id<<" "<< c.name <<" " << c.section<<" " <<c.Marks<<" "<< endl;
        }
    }

    return 0;
}
