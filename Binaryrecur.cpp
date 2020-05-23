#include<iostream>
using namespace std;
int bin(int a[],int l,int h,int k)
{
  while(l<=h)
  { int mid=(l+h)/2;
    if(k==a[mid])
    return mid;
    else if(k>mid)
    return bin(a,mid+1,h,k);
    else
    return bin(a,l,mid-1,k);
  }
  return -1;
}
int main()
{
  int *a;
  int n,i=0;
  cin>>n;
  a=(int*)malloc(n*sizeof(int));
  while(i<n)
  {
    cin>>a[i];
    i++;
  }

int k,j;
cin>>k;
k=bin(a,a[0],a[n-1],k);
cout<<k;
return 0;

}
