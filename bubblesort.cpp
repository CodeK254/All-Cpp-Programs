#include<iostream>
using namespace std;

int main()
{
    int Array[6] = {5,0,2,8,9,1};

    for(int a = 0;a < 6;a++)
    {
        for(int b = 0;b < 6;b++)
        {
            if(Array[b] > Array[b+1])
            {
                int temp;
                temp = Array[b];
                Array[b] = Array[b + 1];
                Array[b + 1] = temp;
            }
        }
        cout<<"\nAfter pass: "<<a<<endl;
        for(int c = 0;c < 6;c++)
        {
            cout<<" "<<Array[c];
        }
    }
    cout<<"\n\nSorted array is:\n\n";
    for(int a = 0;a < 6;a++)
    {
        cout<<" "<<Array[a];
    }
}
