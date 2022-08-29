#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string Pword,pword;
    int key,k,cykey,plain;
    key = rand()%15;
    cout<<"Enter password: ";
    getline(cin,Pword);

    int plaintext[Pword.length()];
    cout<<"Key: "<<key<<endl<<endl;
    cout<<"\nEncrypted password is: "<<pword<<endl<<endl;

    for(int a = 0; a < (Pword.length());a++)
    {
        k = int(Pword[a]);

        cykey = k + key;

        plaintext[a] = cykey - key;


        cout<<char(cykey)<<" ";
    }
    cout<<"\nDecrypted password is: "<<pword<<endl;
    cout<<"\n";
    for(int a = 0; a < (Pword.length());a++)
    {
        k = int(Pword[a]);

        cout<<char(plaintext[a])<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
