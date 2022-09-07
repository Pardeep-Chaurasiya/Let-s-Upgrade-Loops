#include<iostream>
using namespace std;
 
int main(){

    int number,remainder,digit=0,temp;

    cout<<"Enter the number for finding palindrome number :- ";
    cin>>number;

    temp=number;

    while(number!=0){
        remainder = number % 10;
        digit = (digit * 10) + remainder;
        number /= 10;
    }

    if(digit == temp)
        cout<<"Entered number "<<temp<<" is a palindrome";
    else
        cout<<"Entered number "<<temp<<" is not a palindrome";

    return 0;
}