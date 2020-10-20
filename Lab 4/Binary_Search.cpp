#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
  int start = 0;
int  end = n-1;
  while (start<=end) {
    /* code */
    int mid = (start+end)/2;
        if(a[mid]==key)
        {
          return mid;
          cout << "Element found at "<<mid<<"index"<< '\n';
        }
        else if (a[mid]>key) {
          end = mid -1;
        }
        else
start = mid+1;
  }
return -1;
}
int main() {
int n,key;
cout<<"Enter size of array";
cin>>n;
int a[n];
cout<<"Enter elements of array \n ";
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  cout<<"enter key ";
  cin>>key;
  int ans = binary_search(a,n,key);
if(key==-1)
{
  cout<<"Element not found";
}
else
cout<<"Element found at "<<n<<"th position";

  return 0;
}
