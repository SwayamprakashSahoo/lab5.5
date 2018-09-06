//program to print a right triangle of number of rows as input by user
//include the library
#include <iostream>
using namespace std;
//declaring the main function
int main()
{
  int i;
  cout<<"Enter number of rows: ";
  cin>>i;
  for(int j=1;j<=i; ++j)
    {
      for(int k=1;k<=j; ++k)
      {
        cout << "* ";
      }
      cout <<endl;
    }
  return 0;
}

