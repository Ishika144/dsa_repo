#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number: ";
  cin>>n;

  int i=1;
  int sum =0;

  do{
  sum +=i;
  i++;
  }
  while(i<=n);
  cout<<"sum of first n nos.: "<<sum<<endl;
}