/*Program to print 
*******
*******
*******
*******
*******
*******
*******
WHERE * will print n+5 times ,in both dimensions.

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"type number";
    cin>>n;
    n+=5;
    cout<<n<<endl;
   int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
   
}