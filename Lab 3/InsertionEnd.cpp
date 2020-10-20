#include<iostream>
using namespace std;

void insertAtEnd(int *a,int element,int n)
{
  //incrrease the size of array
  n++;
a[n-1] = element;
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
cout<<"Enter element to insert at end ";
cin>>element;
insertAtEnd(a,element,n);

for (int i = 0; i < n+1; i++) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

}
  return 0;
}
