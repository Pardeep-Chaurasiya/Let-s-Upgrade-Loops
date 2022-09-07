#include<iostream>
using namespace std;
 
int main(){

    int first_number = 0, second_number = 1,number,temp;

    cout<<"Enter the number of term in fibonacci series :- ";
    cin>>number;

    if(number >=0){
        cout<<"Fibonacci series :-  ";
        if(number == 1)
            cout<<first_number;
        else if(number == 2)
            cout<<first_number<<","<<second_number;
        else{
            cout<<first_number<<","<<second_number;
            while(number != 2){
            temp = first_number + second_number;
            first_number = second_number;
            second_number = temp;
            cout<<","<<temp;
            number = number - 1;
            }
        }
    }
    else
        cout<<"\nPlease enter a positive integer";

    return 0;
}