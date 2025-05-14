#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number: ";
  cin>>n;

  int i=1;
  cout << "Odd numbers: ";
  while(i<=n) //break
  {
    cout<<i<<endl;
    i+=2; //update
  }

  cout << "even numbers: ";
  i=2;
  while(i<=n) //break
  {
    cout<<i<<endl;
    i+=2; //update
  }
  return 0;
}