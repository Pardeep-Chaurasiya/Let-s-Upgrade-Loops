#include<iostream>
using namespace std;
 
int main(){

    int number,remainder,digit=0,temp;

    cout<<"Enter the number for finding reversed number :- ";
    cin>>number;

    temp=number;

    while(number!=0){
        remainder = number % 10;
        digit = (digit * 10) + remainder;
        number /= 10;
    }

    cout<<"Reversed of "<<temp<<" is "<<digit;
    
    return 0;
}