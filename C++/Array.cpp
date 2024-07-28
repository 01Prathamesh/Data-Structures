/*Array Implementation*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Put the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Put elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    cout<<endl;
    }
    cout<<"The array is :"<<"\t";
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<"\t";
    }
    cout<<endl<<endl<<endl;
}