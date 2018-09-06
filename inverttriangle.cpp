//program to print a inverted right triangle of number of rows as input by user
//include the library
#include <iostream>
using namespace std;
//declaring the main function
int main()
{
  int i;
  cout<<"Enter number of rows: ";
  cin>>i;
  for(int j=i;j>=0; --j)
    {
      for(int k=1;k<=j; ++k)
      {
        cout << "* ";
      }
      cout <<endl;
    }
  return 0;
}
