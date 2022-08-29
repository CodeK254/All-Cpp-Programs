#include<iostream>

using namespace std;

double ExtraVotes(double TotalNumVoters, double fullPercent, double ExtraPercentVoters);

int main()
{
    double totalNumber, fullPercentage = 100, extraPercentage;
    
    cout<<"Enter the total number of voters: ";
    cin>>totalNumber;
    
    cout<<"\nEnter the extra percentage voter turnout: ";
    cin>>extraPercentage;
    
    double extra = ExtraVotes(totalNumber, fullPercentage, extraPercentage);

    cout<<"\nExtra number of voters are :"<<extra<<endl;

    return 0;
}

double ExtraVotes(double TotalNumVoters, double fullPercent, double ExtraPercentVoters){
    double answer;
    
    answer = ( TotalNumVoters * ExtraPercentVoters ) / fullPercent;
    
    return answer;
}nn Bn nn