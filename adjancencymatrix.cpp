#include<iostream>
using namespace std;


int vertArr[9][9];

void DisplayMatrix(int v)
{
    cout<<"\tX";
    for(int a = 0;a < v;a++)
    {
        cout<<"\t"<<a;
    }
    cout<<"\n"<<endl;
    for(int i = 0;i < v;i++)
    {
        cout<<"\t"<<i;
        for(int j = 0;j < v;j++)
        {
            cout<<"\t"<<vertArr[i][j];
        }
        cout<<"\n\n"<<endl;
    }
}
void add_edge(int u,int v)
{
    vertArr[u][v] = 1;
}
int main()
{
    int v = 9;
    add_edge(0,1);
    add_edge(0,2);
    add_edge(1,7);
    add_edge(1,8);
    add_edge(1,4);
    add_edge(2,3);
    add_edge(2,4);
    add_edge(4,6);
    add_edge(5,4);
    add_edge(7,8);
    add_edge(4,1);   //Loop.
    add_edge(2,0);   //Loop.
    add_edge(7,1);   //Loop.

    DisplayMatrix(v);
    return 0;
}
