#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter the day number: ";
    cin>>day;

    switch(day)
    {
        case 1:
            cout<<"\nDay 1 is: Monday"<<endl;
            break;

        case 2:
            cout<<"\nDay 2 is: Tuesday"<<endl;
                break;

        case 3:
            cout<<"\nDay 3 is: Wednesday"<<endl;
            break;

        case 4:
            cout<<"\nDay 4 is: Thursday"<<endl;
                break;

        case 5:
            cout<<"\nDay 5 is: Friday"<<endl;
            break;

        case 6:
            cout<<"\nDay 6 is: Saturday"<<endl;
                break;

        case 7:
            cout<<"\nDay 7 is: Sunday"<<endl;
            break;

        default:
            cout<<"\nWrong input. Input should be greater than 0 and less than 8."<<endl;
                break;
    }

    return 0;
}
