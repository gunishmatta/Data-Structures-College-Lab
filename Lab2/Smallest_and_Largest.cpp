#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int min=INT_MAX;
  int max=INT_MIN;
  cout<<"Enter Size of array ";
  cin>>n;
  int a[n];
  cout<<"Enter Elements  of array ";
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }

for(int i=0;i<n;i++)
{
  if(a[i]>max)
  {
    max = a[i];
  }

}
for(int i=0;i<n;i++)
{

if(a[i]<min)
{
  min = a[i];
}
}
cout<<"Min = "<<min;
cout<<"Max = "<<max;




  return 0;
}
