\\\Write a c++ program to store 5 customer order number in the queue and 
procesus the orders in the same order in which they were received.\\\

#include<iostream>
using namespace std;

int main(){
    int queue[5];
    int front = 0, rear = 0;
    cout<<"Enter 5 customer order numbers: "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>queue[rear];
        rear++;
    }
    
    cout<<"Processing orders in the order they were received: "<<endl;
    while(front < rear)
    {
        cout<<"Order number:"<<queue[front]<<endl;
        front++;
    }  
    return 0; 
     
}