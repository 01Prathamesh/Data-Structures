/*Program to print 
    123
    123
    123
    WHERE number of row=col=count=n times.
*/
#include<iostream>
using namespace std;
int main()
{
    int count, row , col;
    cout<<"Type Number"<<endl;
    cin>>count;
    row=1;
    while(row<=count)
    {
        col=1;
        while(col<=count)
        {
            cout<<col;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}