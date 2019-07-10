//

#include "stdafx.h"
#include <iostream>
using namespace std;

int fun (int a[],int n)
{int p=1;
for (int i=0; i<n; i++)
	if(a[i]<10)
	p*=a[i];
return p;
}
int main ()
{int n=0,i,P,ind=0;
cout<<"Input n=";cin>>n;
int *a=new int [n];
cout<<"Input "<<n<<" integers\n";	
for (i=0; i<n; i++)
	cin>>a[i];
for (i=0; i<n; i++)
	if(a[i]==0)
	{ind=i;break;}

int *b=new int [ind];
 for (i=0; i<ind; i++)
 b[i]=a[i];
 cout<<"Dynamic array:\n";
 for (i=0; i<ind; i++)
 cout<< b[i]<<" ";
 cout<<endl;
P=fun(b,ind);
cout<<P<<endl;
delete []a;delete []b;
system ("pause");
return 0;
}
