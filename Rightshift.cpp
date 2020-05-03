#include<iostream>
using namespace std;
int main()
{
int a,b,n,k,count=0,i;
cin>>a>>b;
n=a;
while(n!=0)
{
  n=n/10;
  count++;
}
n=a;
k=count;
int j[count];
count--;
int t=count;
while(n!=0)
{
  int d=n%10;
  j[count]=d;
  count--;
  n/=10;
}

count=t;

for(int v=0;v<b;v++)
{

  int last=j[count];
  for(i=count;i>0;i--)
  j[i]=j[i-1];

  j[0]=last;
}

for(i=0;i<k;i++)
cout<<j[i];

return 0;

}
