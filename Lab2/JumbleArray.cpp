#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array ";
  for (int i = 1; i <= n; i++) {
  cin>>a[i];
  }
int sum =0;
cout<<"Before \n";
  for (int i = 1; i <= n; i++) {
cout<<a[i]<<" ";
  }
cout<<"\n After \n";
  for (int i = 1; i <= n; i++) {
a[i]=i;
cout<<a[i]<<" ";
  }

  return 0;
}
