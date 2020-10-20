#include<iostream>
using namespace std;
int lsearch(int a[],int n,int element)
{
  int pos=-1;
int i=0;
for (int i = 0; i < n; i++) {
if(a[i]==element)
{
  pos=i;
}
}
return pos;
}


int main() {
  int n;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array ";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }
  int element;
  cout<<"Enter item to be searched for ";
cin>>element;
int pos = lsearch(a,n,element);
cout<<pos;

  return 0;
}
