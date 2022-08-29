#include<iostream>
#include<time.h>

using namespace std;

void pattern() {
int countH = 0;
int countV = 0;
    for(int x = 0; x <= 16; x++){   
        for(int y = 0; y <= 16; y++){ 
            if(x == 0 || y == 0 || countV % 4 == 0 || countH % 4 == 0){
                cout<<" *";
            } else {
                cout<<"  ";
            }
            countH++;
        }
        countH = 0;
        countV++;
        cout<<endl;
    }
    //cout<<count;
}

int main()
{
    pattern ();

    return 0;
}