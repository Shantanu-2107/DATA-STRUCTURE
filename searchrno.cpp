#include<iostream>
using naemspace std;
int main()
{
    int rollno[5], searchrollno;
    cout<<"Enter the roll numbers of 5 students: ";
    for(int i=0;i<5;i++)
    {
        cin>>rollno[i];
    }
    cout<<"Enter the roll number to search: ";
    cin>>searchrollno;
    bool found = false;
    for(int i=0;i<5;i++)
    {
        if(rollno[i] == searchrollno)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"Roll number found.";
    }
    else
    {
        cout<<"Roll number not found.";
    }
    return 0;
}