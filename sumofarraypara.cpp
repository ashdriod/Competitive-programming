#include<iostream>
using namespace std;
void parasum(int arr[],int n)
{
  int b[n+1],u,l;
  b[0]=arr[0];
  for(int i=1;i<n;i++)
  b[i]=arr[i]+arr[i-1];
  cout<<"\n Enter the upper and lower limt";
  cin>>u>>l;
  cout<<b[u]-b[l-1];

}
int main()
{
int n,i;
cin>>n;
int a[n+1];
for(i=0;i<n;i++)
cin>>a[i];
parasum(a,n);
}
