#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string message;
    cout<<"Enter the message: "<<endl;
    getline(cin,message);

    int rows = (message.length()/5) + 1;
    int columns = 5;

    string use = "fewew";
    string sue = "erhrh";

    string esu[2] = {{use},{sue}};

    for(int a = 0;a < 2;a++)
    {
        for(int b = 0;b < 5;b++)
        {
            cout<<esu[b][a];
        }
    }

    return 0;
}
