#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,result;
  cout<<"Enter an integer:";
  cin>>n;
  result=cbrt(n);
  cout<<"cube root of"<<n<<"is:"<<result;
  return 0;
}