#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	unsigned long long int n,m,a,v1=0,v2=0;
	cin>>n>>m>>a;
	v1=n/a;
	if((n%a)!=0){
	    v1++;
	}
	v2=m/a;
	if((m%a)!=0)
	    v2++;
	cout<<v1*v2<<"\n";
	return 0;
}
