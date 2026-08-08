# include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter three digit no :";
    cin>>n;
    int num = n;
    int dig1 = num%10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num % 10;
    int sum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    if (sum == n){
        cout<<"Number is armstrong no "<<endl;
    }else{
        cout<<"Number is not armstrong"<<endl;
    }
}