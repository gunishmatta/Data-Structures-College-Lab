#include<iostream>
using namespace std;

void printArray(int a[],int n)
{

  for (int i = 0; i < n; i++) {
  cout<<"a["<<i<<"] ="<<a[i]<<endl;

  }
void deleteAtBegin(int *a,int n)
{
  //incrrease the size of array

for(int i=0;i<n;i++)
{
  a[i]=a[i+1];
}
n--;
printArray(a,n);
}
}
int main() {
  int n;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n+1];
  cout<<"Enter Elements  of array ";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }

deleteAtBegin(a,n);

  return 0;
}
