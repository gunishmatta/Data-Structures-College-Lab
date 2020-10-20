#include<iostream>
#include<cstring>
using namespace std;

void check(char str[])
{
  int left =0;
  int right = strlen(str)-1;

  while (right>left) {

  if (str[left++]!=str[right--]) {
  cout<<"It is not pallindrome";
  return;
  }

}
cout<<"It is a pallindrome";

}


int main()
{
  char str[50];
  cout<<"Enter string";
  cin>>str;
check(str);

return 0;
}
