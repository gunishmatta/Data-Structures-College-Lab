#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int n;
cin>>n;
int n1=0,n2=1,n3;
cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
for (int i = 2; i < n; ++i) {
n3 = n1+n2;
cout<<n3<<" ";
n1=n2;
n2=n3;
  }
  return 0;
}
