#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int encrKey(int prime, int prime_2, int Totient, int product)
{
    int enkey = 0;
    int counter = 0;

    for(int i = 2;i < Totient;i++)
    {
        if(Totient % i == 0)
        {
            continue;
        }
        else if(product % i == 0)
        {
            continue;
        }
        else if(product % 2 == 0 && i % 2 == 0)
        {
                continue;
        }
        else if(Totient % 2 == 0 && i % 2 == 0)
        {
                continue;
        }
        enkey = i;
        return enkey;
    }
}

int decrKey(int key, int totient)
{
    int decKey = 0;
    for(int d = 1;;d ++)
    {
        if(((d * key) % totient) == 1)
        {
            decKey = d;
            break;
        }
        //cout<<"\nDec key: "<<d;
    }

    return decKey;
}

int main()
{
    int prime,prime_2;
    string message;

    cout<<"Enter the first prime number: "<<endl;
    cin>>prime;

    cout<<"Enter the first prime number: "<<endl;
    cin>>prime_2;

    cout<<"\nEnter your message: "<<endl;
    cin>>message;

    int product = prime * prime_2;

    int Totient = (prime - 1) * (prime_2 - 1);

    int encKey = encrKey(prime, prime_2, Totient, product);
    //cout<<"\nEncryption Key: "<<encKey;

    int decKey = decrKey(encKey, Totient);
    //cout<<"\nDecryption Key: "<<decKey;

    for(int a = 0;a < message.length();a++)
    {
        long int x = (int)message[a];
        long int temp = x;
        long int mult;
        cout<<"\n"<<x;
        //cout<<(pow(x,encKey)) % product;
        for(int a = 1;a <= encKey;a++)
        {
            x *= temp;
            mult = x;
            cout<<"\nMult: "<<mult<<endl;
        }
        //cout<<"\nMult: "<<mult;
    }

    return 0;
}
