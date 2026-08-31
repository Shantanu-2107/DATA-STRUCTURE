#include<iostream>
using namespace std;
int main()
{
    int book[5];
    int searchId;
    cout<<"Enter the IDs of 5 books:\n";
    for(int i=0; i<5; i++)
    {
        cin>>book[i];
    }
    cout<<"\nEnter the ID of the book to search: ";
    cin>>searchId;
    for(int i=0; i<5; i++)
    {
        if(book[i]==searchId)
        {
            cout<<"\nBook with ID "<<searchId<<" found at index "<<i;
            return 0;
        }
    }
    cout<<"\nBook with ID "<<searchId<<" not found.";
    return 0;
}