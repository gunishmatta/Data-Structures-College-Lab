#include<iostream>
using namespace std;

void insertAtBegin(int *a,int element,int n)
{
  //incrrease the size of array

  n++;
for(int i=0;i<max;i++)
{
  a[i+1]=a[i];
}
a[0] = element;
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
  int element;
cout<<"Enter element to insert at beginning ";
cin>>element;
insertAtBegin(a,element,n);

for (int i = 0; i < n+1; i++) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

}
  return 0;
}
