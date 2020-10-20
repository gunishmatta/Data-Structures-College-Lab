#include<iostream>
using namespace std;
int main() {
  int number;
  cout<<"Enter Number";
  cin>>number;
  int temp,rev=0,rem;
  temp = number;
  while(number>0)
  {
    rem = number%10;
    rev = (rev*10)+rem;
    number = number/10;
  }

  if (temp==rev) {
  cout<<"It is pallindrome";
  }
  else
  {
    cout<<"It is not a pallindrome";
  }
  return 0;
}
