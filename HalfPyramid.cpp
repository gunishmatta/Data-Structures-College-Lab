#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int n;
cin>>n;
for (int i = 1; i <= 5; i++) {
  for (int j = 1; j <= i; j++) {
cout<<"*"<<" ";
  }
  cout<<endl;
}

return 0;
}
