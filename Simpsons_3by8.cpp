//Simpson 3/8th Rule
#include <bits/stdc++.h>
#define f(x) 1/(1+pow(x,2))
using namespace std;
float simpson(float low,float up,int n)
{
 float k, h = (up - low)/n, ans = f(low) + f(up);
 for(int i=1; i <= n-1; i++)
 {
  k = low + i*h;
  (i%3==0)? ans+=2*(f(k)) : ans+=3*(f(k));
 }
 return ans*= 3*h/8;;
}

int main()
{
 float low = 0,up = 6;
 int n = 6;
 cout << "Integrated Value:" << simpson(low,up,n) << endl;
 return 0; 
}