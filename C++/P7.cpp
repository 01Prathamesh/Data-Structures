/*Programf to print
1
22
333
4444
55555
WHERE number of row= count .
*/

// 1
// 2 9
// 3 8 10
// 4 7  11 14
// 5 6  12 13 15
#include <iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Type counting"<<endl;
    cin>>count;
    int num=1;
    int row=1;
    while(row<=count)
    {
        int col=1;
        while(col<=row)
        {
            cout<<num;
            col+=1;
        }
        num+=1;
        cout<<endl;
        row+=1;
    }
}