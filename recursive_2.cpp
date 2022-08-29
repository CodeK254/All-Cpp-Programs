#include<iostream>
using namespace std;

int multiply(int m,int n)
{
    if(n==1)
        return m;
    else
        return m + multiply(m,n - 1);
}

int main()
{
    int mult = multiply(5,5);
    cout<<"5 X 5  = "<<mult<<endl;
}
