#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    cout<<"    X";
    for(int i = 1; i <= 10; i++)
    {
        if(i < 10)
            cout<<"    "<<i;
        else
            cout<<"   "<<i;
    }
    cout<<endl<<endl;
    for(int j = 1,l = 1; j <= 10; j++,l++){
        if(l < 10)
            cout<<"    "<<l;
        else
            cout<<"   "<<l;
        for(int k = 1; k <= 10; k++){
            if((k * j) < 10)
                cout<<"    "<<k * j;
            else
                cout<<"   "<<k * j;
        }
        cout<<endl<<endl;;
    }

    return 0;
}