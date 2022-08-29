#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));

    int i,j;
    int Array[10];
    int searchKey;
    bool keyFound = false;

    for(i = 0;i < 10;i++)
    {
        Array[i] = rand()%20;
    }
    cout<<"Array is: "<<endl;
    cout<<"[ ";
    for(i = 0;i < 10;i++)
    {
        cout<<Array[i]<<", ";
    }
    cout<<" ]";

    searchKey = rand()%15;

    cout<<"\n\nSearch-Key is: "<<searchKey<<endl;

    for(int j = 0;j < 10;j++)
    {
        if(Array[j] == searchKey)
        {
            keyFound = true;
            break;
        }
    }

    if(keyFound == false)
    {
        cout<<"\nSearch-Key not Found!"<<endl;
    }
    else
    {
        cout<<"\nSearch-Key '"<<searchKey<<"' found in: "<<i<<endl;
    }
}
