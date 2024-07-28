/*Linear Search*/

#include<iostream>
using namespace std;
int main()
{
    //Array Implementation code start.
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
    //Array Implementation code end.
    
    cout<<endl<<endl<<endl;

    
    //LS Start
    int key;
    cout<<"Type the key that you have to search:";
    cin>>key;
    cout<<endl<<endl;
    int k;
    bool p=false;
    for( k=0;k<n;k++)
    {
        
        if(a[k]==key){p=true;cout<<"SUCCESS...$$$"<<endl<<"Your key is FOUND on the Index:"<<k<<endl<<endl<<endl;}
       
    }
        if(p==false)
            {cout<<"FAILED...!!!!"<<endl<<"Your key is NOT FOUND"<<endl<<endl<<endl;}
}