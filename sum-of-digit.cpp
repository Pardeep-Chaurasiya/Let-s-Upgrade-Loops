#include<iostream>
using namespace std;
 
int main(){

    int number,remainder,sum=0,temp;

    cout<<"Enter the number for finding sum of digit of a number :- ";
    cin>>number;

    temp=number;

    while(number!=0){
        remainder = number % 10;
        sum = sum +  remainder;
        number /= 10;
    }

    cout<<"Sum of entered number "<<temp<<" is "<<sum;
    
    return 0;
}