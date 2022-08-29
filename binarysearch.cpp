#include<iostream>
#include<time.h>
using namespace std;


int main()
{
    srand(time(0));
    int search_key = rand()%15;
    int arr_size = 10,val;
    int Array[arr_size];
    cout<<"Searck key is: \n\t"<<search_key<<endl;
    for(int val = 5, a = 0;a < arr_size;a++,val++)
    {
        Array[a] = val;
    }
    cout<<"\nArray elements are: \n\t";
    for(int a = 0;a < arr_size;a++)
    {
        cout<<Array[a]<<", ";
    }

    int index = -1;
    int MIDDLE,LEFT = 0,RIGHT = arr_size - 1;

    for(;LEFT <= RIGHT && index == -1;)
    {
        MIDDLE = (LEFT + RIGHT) / 2;
        if(Array[MIDDLE] == search_key)
        {
            index = MIDDLE;
            break;
        }
        else  if(Array[MIDDLE] > search_key)
        {
            RIGHT = MIDDLE - 1;
        }
        else
        {
            LEFT = MIDDLE + 1;
        }
        //cout<<"The index is: "<<index<<endl;
    }
    if(index == -1)
        cout<<"\n\nSearch key not found !"<<endl;
    else
        cout<<"\n\nThe index is: "<<index<<endl;
}
