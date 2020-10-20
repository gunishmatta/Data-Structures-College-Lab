#include<iostream>
using namespace std;

void deleteFromEnd(int *a,int n)
{
  //incrrease the size of array
  n--;

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



deleteFromEnd(a,n);
n--;
for (int i = 0; i < n; i++) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

}
  return 0;
}
