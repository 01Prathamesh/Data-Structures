/*Program to print
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
WHERE number of rows = count.

*/

#include <iostream>
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
            char ch='A'+col-1;  //IMP LINE //Here character depends on column as well,that is column changes then ch also change.
            cout<<ch;
            col+=1;

        }
        cout<<endl;
        row+=1;
    }
}