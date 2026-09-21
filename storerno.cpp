#include<iostream>
using namespace std;
int main()
{
    int rollno[5];
    cout<<"Enter the roll numbers of 5 students: ";
    for(int i=0;i<5;i++)
    {
        cin>>rollno[i];
    }
    cout<<"The roll numbers entered are: ";
    for(int i=0;i<5;i++)
    {
        cout<<rollno[i]<<" ";
    }
    return 0;
}