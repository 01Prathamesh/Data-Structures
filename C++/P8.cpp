/*Program to print 
1
23
345
4567
56789
WHERE number of rows = count.
*/

#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Type counting"<<endl;
    cin>>count;
   // int num;
    int row=1;
    while(row<=count)
    {
      //  num=row;
        int col=1;
        while(col<=row)
        {
            cout<<row+col-1;  //if we use extra variable 'num' then in we can simply"cout<<num;"//IMP LINE
          //  num+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}