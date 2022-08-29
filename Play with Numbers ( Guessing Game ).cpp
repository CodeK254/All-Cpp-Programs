#include<iostream>
#include<time.h>

using namespace std;

int calc(int guess, char dummy) {
    int ans = guess + 0;
    
    int rand1 = rand()%750;
    cout<<"\n\tAdd "<<rand1<<" to your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans += rand1;
    
    int rand2 = rand()%750;
    cout<<"\n\tSubtract "<<rand2<<" to your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans -= rand2;
    
    int rand5 = rand()%750;
    cout<<"\n\tAdd "<<rand5<<" to your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans += rand5;
    
    int rand3 = rand()%750;
    cout<<"\n\tSubtract "<<rand3<<" to your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans -= rand3;
    
    int rand4 = rand()%750;
    cout<<"\n\tAdd "<<rand4<<" to your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans += rand4;
    
    //int rand1 = rand()%750;
    cout<<"\n\tSubtract your guess. If done press any key then hit enter."<<endl;
    cin>>dummy;
    ans -= guess;
    
    return ans;
}

int main()
{
    srand(time(NULL));


    int guess = rand()%750;
    char dummy = 'x';
    cout<<"Guess any number of your choice: Then: .\n";
    
    int answer = calc(guess, dummy);
    
    cout<<"\n\t\tYou got: "<<answer<<" right??. "<<endl;
    //cout<<"\n\tIf already guessed press any key, then hit enter."<<endl;
    return 0;
}