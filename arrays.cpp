#include<iostream>
using namespace std;

int main()
{
    int data[4][2];
    int x = 1;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++, x++)
        {
            cout<<"\t"<<x;
        }
        cout<<endl<<endl;
    }
    return 0;
}
