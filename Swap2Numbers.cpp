#include<iostream>
#include<cstring>
using namespace std;

int main() {
int n1,n2,temp;
cout<<"Enter Number 1 ";
cin>>n1;
cout<<"Enter Number 2 ";
cin>>n2;
temp=n1;
n1=n2;
n2=temp;
cout<<endl;
cout<<"After Swapping "<<endl<<"Number 1 ="<<n1<<endl<<"Number 2 "<<n2;

  return 0;
}
