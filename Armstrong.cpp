#include<iostream>
using namespace std;
bool check_a(int n){
    int sum=0,rem=0,t;
    t=n;
    while(n>0){
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if (sum==t)
    return true;
    else
    return false;
}
int main(){
    int num;
    cout<<"Enter a Number:- ";
    cin>>num;
    if(check_a(num))
    {
    cout<<"Armstrong Number";
    }
    else{ 
    cout<<"Not Armstrong Number";
    }
    //return 0;
}
