/*Program to Ptint
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
WHERE number of rows=count;
*/

#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Type counting"<<endl;
    cin>>count;
    int row=1;
    int start=1;
    while(row<=count)
    {
        
        int col=1;
        while(col<=count)
        {
            char ch='A'+col+start-2;  //IMP LINE  //TypeCaasting concept.
            cout<<ch;
            col+=1;
        }
        start+=1;
        cout<<endl;
        row+=1;
    }
    int p;
    cout<<"enter value to exit"<<endl;
    cin>>p;

}