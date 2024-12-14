#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
    int n,i,i2,prime;
    char repeat,shutdown_checker;
    while(1)
    {
        cout<<"Enter a number : ";
    cin>>n;
    cout<<"\nPrime Factors are :\n";
    for(i=1;i<=n;i++)
    {
            if(n%i==0)
        {
            for(i2=2;i2<i;i2++)
            {
                if(i%i2==0)
                {
                    prime=0;
                    break;
                }
            }
            if(i==i2)
            {
                cout<<"\n"<<i;
            }
        }
    }
    if(n==1)
        cout<<"\n"<<n<<" has no prime factors .\nNOTE : 1 is the only factor of 1 and it is neither prime nor composite .";
    if(n==0)
        cout<<"\n"<<n<<" is divisible by all numbers so all prime numbers are its prime factors .";
    getch();
    system("cls");
    while(1)
    {
    cout<<"Do u want to Prime Factors of Another Number (y/n) :";
    repeat=getch();
    system("cls");
    if(repeat=='y'||repeat=='Y')
    {
        break;
    }
    else if(repeat=='n'||repeat=='N')
    {   
        shutdown_checker=1;
        break;
    }
    else
    {
        cout<<"Invalid input ...\nEnter y/Y for yes or n/N for no ...\nPress any key to try again ...";
        getch();
        system("cls");
    }
    }
    if(shutdown_checker==1)
    {
        cout<<"Thanks for Using Primus ...\nSee you next time ... Good Bye !";
        getch();
        break;
    }
    }
}