#include <iostream>
#include<string.h>
using namespace std;

class Students
{
  public:
    int id;
    string name;
    string reg_no;
};

int main(){
    int num = 5;
    Students all[num];
    
    for(int i = 0; i < num; i++) {
        all[i].id = i+1;
        
        cout<<"\nEnter student "<<i + 1<<"'s name: ";
        getline(cin,all[i].name);
        
        cout<<"Enter student "<<i + 1<<"'s Registration Number: ";
        getline(cin,all[i].reg_no);
        
    }
    
    for(int j = 0; j < 1; j++) {
        cout<<"\n\tID\tName\t\tReg_No"<<endl;
    }
    
    for(int i = 0; i < num; i++) {
        cout<<"\t"<<all[i].id<<"\t"<<all[i].name<<"\t"<<all[i].reg_no<<endl;
    }
    
    return 0;
}