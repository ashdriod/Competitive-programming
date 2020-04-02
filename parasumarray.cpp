#include<iostream>
using namespace std;
int i,b,c,s[20],n;
int parsum(int a[],int b,int c){
s[1]=a[1];
for(i=2;i<=n;i++)
s[i]=s[i-1]+a[i];

return s[c]-s[b-1];

}


int main()
{
int a[20],t;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];

cin>>b>>c;

t=parsum(a,b,c);

cout<<t;
}
