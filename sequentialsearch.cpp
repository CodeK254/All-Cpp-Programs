#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    int Array[20];
    srand(time(0));
    bool found = false;
    int search_key = rand()%50;
    cout<<"Search_key is: "<<search_key<<endl;
    cout<<"\nArray is:"<<endl;
    cout<<"\t";
    for(int a = 0;a < 20;a++)
    {
        Array[a] = rand()%100;
    }
    for(int a = 0;a < 20;a++)
    {
        cout<<Array[a]<<", ";
    }

    for(int x = 0;x < 20;x++)
    {
        if(Array[x] == search_key)
        {
            cout<<"\n\nSearch found in index: "<<x<<endl;
            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout<<"\n\nSearch key not found!!!!"<<endl;
    }
}
