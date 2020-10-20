#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array ";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }

  for (int i = 0; i < n; i++) {

cout<<"Value of a["<<i<<"] ="<<a[i]<<endl;

cout<<"Address of a["<<i<<"] ="<<&a[i]<<endl;

  }


  return 0;
}
