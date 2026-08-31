#include<iostream>
using namespace std;
int main(){
    int bookIDs[5];
    cout<<"Enter the IDs of 5 books:\n";
    for(int i=0; i<5; i++){
    cout<<"Book"<<i+1<<": ";
    cin>>bookIDs[i];   
}
 for (int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
        if(bookIDs[i]>bookIDs[j]){
            int temp=bookIDs[i];
            bookIDs[i]=bookIDs[j];
            bookIDs[j]=temp;
        }
    }
}
cout<<"\nSorted Book IDs:\n";
for(int i=0; i<5; i++){
    cout<<"Book"<<i+1<<": "<<bookIDs[i]<<endl;
}
return 0;
}