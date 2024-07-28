/*Program to print 
123
456
789
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Type number"<<endl;
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)   
        /*if we put "while(col<=row)" then 
        1
        23
        456
        78910 will print.*/
        {
            cout<<count;
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }

}