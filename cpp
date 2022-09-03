#include "iostream"
using namespace std;
int summation ( int x ,int y )
        {
            if( x == 0 || x ==1 )
            {
              return y ;
            }

            else
            {
              return summation(x -1, x+y );

            }

        }

int main()
  {
    int a;
    cout<<"enter range  value to print-summation: "; }

//give this code with out giving the parameters int y and int b in the function which is the bug to find
    cin>>a;
    int b = 1;
    cout<<"summation upto ",a,"is",summation(a,b)<<endl ;
   }
