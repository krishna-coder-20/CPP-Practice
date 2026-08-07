# include <iostream>
using namespace std;

int main(){
    float sala;
    cout<<"Enter Your salary :";
    cin>>sala;
    if(sala <5){
        cout<<"No Tax"<<endl;
    }
    else if(sala<10){
        float tax = (20*sala)/100;
        cout<<"Your tax is"<<tax<<endl;
    }
    else{ 
        float tax = (30 * sala)/100;
        cout<<"Your tax is" << tax<<endl;
    }
}