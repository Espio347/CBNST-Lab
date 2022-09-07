#include <bits/stdc++.h>

using namespace std;

//for calculating factorial
int factorial(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f = f*i;
    return f;
}

//for calculating u
float calculate_u(float u, int n)
{
    float tempvar = u;
    for (int i = 1; i < n; i++)
        tempvar = tempvar * (u - i);
    return tempvar;
}

int main()
{
 //two inputs n & x
 int n = 5;
 int x[] = { 1891, 1901, 1911, 1921, 1931 };

 //for difference table using a matrix
 int m[n][n];
 
 m[0][0] = 46;
 m[1][0] = 66;
 m[2][0] = 81;
 m[3][0] = 93;
 m[4][0] = 101;
 
 //forward difference table calculation
 for (int i = 1; i < n; i++) 
 {
        for (int j = 0; j < n - i; j++)
            m[j][i] = m[j + 1][i - 1] - m[j][i - 1];
 }
 
 
 // Interpolation Value
    float val = 1895;
 
 // calculating Sum and u
    float sum = m[0][0];
    
    float u = (val - x[0]) / (x[1] - x[0]); //initial value of u
    
    for (int i = 1; i < n; i++) 
    {
        sum = sum + ( calculate_u(u, i) * m[0][i] ) / factorial(i);
    }
cout << "Calculated Value for " << val << " is "<< sum << endl;
return 0;
}

