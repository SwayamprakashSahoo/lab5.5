//program to print a solid square of side as input by user
//include the library
#include <iostream>
using namespace std;
//declaring the main function
int main()
//the program begins
{
  int i;
  cout<<"Please input the length of side of square"<<endl;
  cin>>i;
  for(int j=1;j<=i;++j)
  {
    for(int k=1;k<=i;++k)
    {
      cout<<"*";
    }
   cout<<endl;
  }
return 0;
}
