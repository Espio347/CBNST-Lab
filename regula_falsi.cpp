#include<bits/stdc++.h>

#define f(x) x*x*x - 2*x - 5
#define e 0.0001

using namespace std;

int main()
{
	 
	 float x0, x1, x, f0, f1, f;
	 cout<<"For the Equation: x³-2x-5"<<endl;
	 cout<<"Enter x0: ";
     cin>>x0;
     cout<<"Enter x1: ";
     cin>>x1;

     //getting function values
	 f0 = f(x0);
	 f1 = f(x1);

	 //checking if the values can converge to obtain root
	 if( f0 * f1 > 0)
	 {
		  cout<<"Incorrect Approximation for the Given Equation."<< endl;
		  return 0;
	 }
	 
	 
     //Regula-Falsi Method
	 do
	 {
		  x = x0 - (x0-x1) * f0/ (f0-f1);
		  f = f(x);
		  if( f0 * f < 0)
		  {
			   x1 = x;
			   f1 = f;
		  }
		  else
		  {
			   x0 = x;
			   f0 = f;
		  }
	 }while(fabs(f(x))>e);

     //output
	 cout<< endl<<"Calculated Root is: "<<x<< endl;

	 return 0;
}


