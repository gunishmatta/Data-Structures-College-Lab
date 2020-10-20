#include<iostream>
using namespace std;

void deleteAtPos(int *a,int pos,int n)
{
  //incrrease the size of array
  a[pos] = a[pos+1];
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



deleteAtPos(a,5,n);
n--;
for (int i = 0; i < n; i++) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

}
  return 0;
}
