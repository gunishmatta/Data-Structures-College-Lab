#include<iostream>
using namespace std;

void insertAtPos(int *a,int element,int pos,int n)
{
  //incrrease the size of array
  n++;
  for(int i=n;i>=pos;i--)
  {
    a[i]= a[i-1]; //shift elements to one step forward
  }
  a[pos-1]=element;

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



insert(a,5,5,n);
for (int i = 0; i < n+1; i++) {
cout<<"a["<<i<<"] ="<<a[i]<<endl;

}
  return 0;
}
