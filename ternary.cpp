# include <iostream>
using namespace std;

int main(){
    bool isadult ;
    int age;
    cout<<"Enter your age";
    cin>>age;
    isadult = age>=18 ? true : false;
    cout<<isadult<<endl;
    int num ;
    cout<<"Enter the no : ";
    cin>>num;
    bool isEven = num%2==0 ? true : false;
    cout<<isEven<<endl;
}
