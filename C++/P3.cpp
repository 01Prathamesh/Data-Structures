/*Program to print
*******
*     *
*     *
*     *
*     *
*     *
*******
WHERE number of row=n times
*/

#include<iostream>
using namespace std;
int main()
{

	int n,p;
	cout<<"Type number"<<endl;
	cin>>n;
	p=n-1;
	cout<<p<<endl;
	int i=0;
	while(i<n)
	{
		int j;
		if(i==0 || i==p)
		{
			j=0;
			while(j<n)
			{cout<<"*";j=j+1;}
		}
		else
		{
			j=0;
			while(j<n)
			{
				if(j==0 || j==p)
				{cout<<"*";}
				
				else{cout<<" ";}
				j=j+1;
			}
		}
		cout<<endl;
		i=i+1;
	}
}