//program to print a rhombus
//including library
#include <iostream>
using namespace std;
//declaring main function
int main()
{
   int i, j, n;
   cout<<"Enter number of rows: ";
   cin>>n;
   //beginning the program
   for(i=1; i<=n; i++)
   {
     for(j=i; j<n; j++)
            {
                cout<<" ";
            }
            for(j=1; j<=n; j++)
            {
               cout<<"*";
            }
      cout<<endl;
    }
   return 0;
}




