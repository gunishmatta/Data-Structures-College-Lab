#include<iostream>
using namespace std;

void sort(int a[],int n)
{
  int temp;
  for (int i = 1; i <= n-1; i++) {
    for(int j =1;j<=(n-i)-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
int findksmallest(int a[],int k,int n)
{
  sort(a,n);
  return a[k-1];
}


int main() {
  int n,k;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array ";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }
cout<<"Enter k for which you want smallest number";
cin>>k;
cout<<findksmallest(a,k,n);

  return 0;
}
