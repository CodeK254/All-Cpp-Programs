#include<iostream>
using namespace std;

int main()
{
    int Array_size = 6;
    int Array[Array_size] = {1,0,8,6,4,7};
    int low;
    int temp;

    for(int a = 0;a < (Array_size - 1);a++)
    {
        low = a;
        for(int b = a + 1;b < Array_size;b++)
        {
            if(Array[b] < Array[low])
            {
                low = b;
            }
        }
        temp = Array[low];
        Array[low] = Array[a];
        Array[a] = temp;
        cout<<"\nPass "<<a<<endl;
        for(int c = 0;c < (Array_size);c++)
        {
            cout<<" "<<Array[c];
        }
    }
}
