#include<iostream>
using namespace std;
int main()
{
   
    int book[10];
    int n = 0;
    int choice;
    int search;

    do
    {
        cout<<"\n1. Add Book\n2. Search Book\n3. Sort Books\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice == 1)
        {
            cout<<"\nEnter the number of books to add: ";
            cin>>n;
            cout<<"\nEnter the IDs of "<<n<<" books:\n";
            for(int i=0; i<n; i++)
            {
                cin>>book[i];
            }
        }
        else if (choice == 2)
        {
            cout<<"\nEnter the ID of the book to search: ";
            cin>>search;
            for(int i=0; i<n; i++)
            {
                if(book[i]==search)
                {
                    cout<<"\nBook with ID "<<search<<" found at index "<<i;
                    break;
                }
                if(i==n-1)
                {
                    cout<<"\nBook with ID "<<search<<" not found.";
                }
            }
        }
        else if (choice == 3)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(book[i]>book[j])
                    {
                        int temp=book[i];
                        book[i]=book[j];
                        book[j]=temp;
                    }
                }
            }
            cout<<"\nSorted Book IDs:\n";
            for(int i=0; i<n; i++)
            {
                cout<<"Book"<<i+1<<": "<<book[i]<<endl;
            }
        }
    }
    while(choice != 4);
    return 0;
}