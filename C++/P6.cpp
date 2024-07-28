/*Program to print
*
**
***
****
*****
WHERE number of rows = count times.
*/

#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Type counting"<<endl;
    cin>>count;
    int row=1;
    while(row<=count)
    {
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }

}