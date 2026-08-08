# include <iostream>
using namespace std;

int main(){
    int a , b;
    char op;
    cout <<"Enter the first no : "<<endl;
    cin>>a;
    cout<<"Enter the second no : "<<endl;
    cin>>b;
    cout<<"Enter the Operator : "<<endl;
    cin>>op;
    if(op == '+'){
        cout<<"a + b = "<< (a+b)<<endl;
    }else if(op == '-'){
        cout<<"a - b = "<< (a-b)<<endl;
    }else if(op == '*'){
        cout<<"a * b = "<<(a*b)<<endl;
    }else if(op == '/'){
        cout<<"a / b = "<<(a/b)<<endl;
    }else{
        cout<<"Invalid operator";
    }
}