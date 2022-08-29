#include<iostream>
using namespace std;
enum UNITS{
    Com_223, Com_226, Com_225,
};
int main()
{
    UNITS myunits1, myunits2, myunits3;
    cout<<"The units codes am taking this semester are:"<<endl;
    cout<<"Com 223,Ucc 202, Ucc 203, Com 226, Com 225, Com 220, Bit 224, Sta 205"<<endl;
    cout<<"The unit i like most are:"<<endl;

    myunits1=Com_223, myunits2 = Com_226, myunits3 = Com_225;
    cout<<"I like: "<<endl;
    cout<<"\t"<<myunits1<<endl;
    cout<<"\t"<<myunits2<<endl;
    cout<<"\t"<<myunits3<<endl;

    return 0;
}

