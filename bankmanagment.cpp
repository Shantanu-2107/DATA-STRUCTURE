#include<iostream>
using namespace std;
int main()
{
    int stack[5];
    int top = -1;
    cout<<"ENter 5 customer token numbers:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>stack[i];
        top++;
    }
    cout<<"Service history:"<<endl;
    while(top>=0)
    {
        cout<<"Customer token number: "<<stack[top]<<endl;
        top--;
    }
    return 0;
}