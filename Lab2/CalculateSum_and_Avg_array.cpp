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
int sum =0;
  for (int i = 0; i < n; i++) {
sum = sum+a[i];
  }
cout<<"Sum of array = "<<sum<<endl;
cout<<"Average of array ="<<sum/n<<endl;

  return 0;
}
