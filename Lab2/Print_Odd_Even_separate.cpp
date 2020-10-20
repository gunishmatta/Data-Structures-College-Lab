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
cout<<"Even Numbers \n";
  for (int i = 0; i <n; i++) {
if(i%2==0)
cout<<i<<" ";
  }
cout<<"\nOdd Numbers \n";

    for (int i = 0; i <n; i++) {
  if(i%2!=0)
  cout<<i<<" ";
    }

  return 0;
}
