#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array \n";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }

  for (int i = n-1; i >= 0; i--) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

  }


  return 0;
}
