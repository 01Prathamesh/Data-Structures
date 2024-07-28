/*Program to print
1
21
321
4321
54321
WHERE number of row= count.
*/

#include<iostream>
using namespace std;
int main()
{
    int count ;
    cout<<"Type number"<<endl;
    cin>>count;
    int row=1;
    while(row<=count)
    {
        int col=1;
        while(col<=row)
        {
            cout<<row-col+1;  //IMP line of code.
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}