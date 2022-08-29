#include<iostream>
using namespace std;

int main(){

    string name = "Tittoh";

    float shoePrice,torsoPrice,capPrice;

    cout<<"Enter the Shoe Price: "<<endl;
    cin>>shoePrice;
    cout<<"Enter the Shoe Price: "<<endl;
    cin>>torsoPrice;
    cout<<"Enter the Shoe Price: "<<endl;
    cin>>capPrice;

    float totalShopingMoneyNeeded = shoePrice + torsoPrice + capPrice;

    cout<<"Total Shopping Money Needed is: "<<totalShopingMoneyNeeded<<" Kshs"<<endl;

    cout<<name<<endl;

    return 0;

}
