#include<iostream>
#include<time.h>

using namespace std;

void pattern() {
int countH = 0;
int countV = 0;

int count = 0;
    int i = 2, j = 2;
    for(int x = 0; x <= 16; x++){ 
        for(int y = 0; y <= 16; y++){ 
            if(x == 0 || y == 0 || countV % 4 == 0 || countH % 4 == 0){
                cout<<"   *";
            } 
            else if(x % 2 == 0 && y % 2 == 0 && y % 4 != 0){
                count++;
                if(count < 10)
                    cout<<"   "<<count;
                else
                    cout<<"  "<<count;
            }
            else {
                cout<<"    ";
            }
            countH++;
        }
        countH = 0;
        countV++;
        cout<<endl<<endl;
    }
}

int main()
{
     pattern();

    return 0;
}