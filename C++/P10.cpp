/*Program to Print 
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
WHERE number of rows= count.
NOTE:Here we use TypeCasting concept to convert 'int' value to 'char' alphabet.
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
        while(col<=count)
        {
            char ch='A'+row-1;   //TypeCasting was used here.//IMP LINE //here ch only depends on row , if row changes ch also changes.
            cout<<ch;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}