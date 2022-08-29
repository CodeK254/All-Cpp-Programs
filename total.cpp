#include<iostream>
using namespace std;

double totalMarks(double marks[])
{
    double total = 0;
    cout<<"\n\n------------------------------------------------Entering the Values------------------------------------------------------\n\n";
    for(int e = 1,d = 0;d < 6;d++,e++)
    {
        cout<<"Enter mark "<<e<<": ";
        cin>>marks[d];
        total += marks[d];
    }
5
    return total;
}

int main()
{
    double Marks[6];
    double total;

    total = totalMarks(Marks);

    cout<<"\nTotal marks earned by student is: "<<total<<endl;
    cout<<"\n\n------------------------------------------------------------------------------------------------------------------------\n\n";
    return 0;
}
