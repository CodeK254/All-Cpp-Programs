#include<iostream>
using namespace std;

class Calculator{
  private:
    int x;
    int y;

    int area(int, int);

    friend Calculator add(Calculator);
};

int Calculator::area(int a, int b){
    x = a;
    y = b;

    return x * y;
}

Calculator add(Calculator param){
    Calculator sum;

    sum.x = 13;
    sum.y = 12;

    return (sum.x * sum.y);
}

int main()
{
    int sum;

    sum = add();

    cout<<"Sum is: "<<sum<<endl;

    return 0;
}
