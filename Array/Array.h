#include<iostream>
using namespace std;

int Array()
{
    int n;
    cout<<"Put the size of array"<<endl;
    cin>>n;
    int ARR[n];
    cout<<"Put elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>ARR[i];
    cout<<endl;
    }
    cout<<"The array is :"<<"\t";
    for(int j=0;j<n;j++)
    {
        cout<<ARR[j]<<"\t";
    }
    cout<<endl<<endl<<endl;
}