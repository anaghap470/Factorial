#include<iostream>
using namespace std;

int factorial(int n)
{ if(n<=1)
     {
      return 1;
     }
  else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int number,result;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if (number<0)
      {
        cout<<"Can't find the factorial for negative number"<<endl;
      }else
      {
       result=factorial(number);
       cout<<number<<"!="<<result<<endl;
      }
    return 0;
}

