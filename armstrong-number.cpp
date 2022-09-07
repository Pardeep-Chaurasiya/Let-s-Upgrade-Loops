#include<iostream>
using namespace std;
 
int main(){

    int number,remainder,digit=0,temp,count = 1;

    cout<<"Enter the number for finding armstrong number :- ";
    cin>>number;

    temp=number;

    for(int i=0;i<=number;i++){
        temp = number % 10;
        count = count + 1;
        number = number / 10;
    }
    cout<<count;

    while(number!=0){
        remainder = number % 10;
        digit = digit + (remainder * remainder * remainder);
        number /= 10;
    }

    if(digit == temp)
        cout<<"Entered number "<<temp<<" is a armstrong number";
    else
        cout<<"Entered number "<<temp<<" is not a armstrong number";
    
    return 0;
}