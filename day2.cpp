// day2

#include<iostream>
using namespace std;
int main(){
    // variables
    
    // string
    string firstName="amna";
    cout<<firstName;
    // int 
    int age=19;
    cout<<age;
    // double
    double valueOfGravity=9.8;
    cout<<valueOfGravity;
    // bool
    bool true1=true;
    cout<<true1;
    // char
    char Oneletter='A';
    cout<<Oneletter;
    
    // decalre may variables
    // int x=1,y=2,z=3;
    // cout<<x<<y<<z;
    int x,y,z;
    x=y=z=1;
    cout<<x<<y<<z;
    
    // identifiers(name of varibales call identifiers)
    // should be uniques ,dont use keywords
    // cant use special characters ike @#$%
    // use letters ,number ,_
    // should be comprehensive 
    
    int minutesPerSec=60;
    cout<<minutesPerSec;
    
    // keywords (reserved words like int string)
    
    // const (read-only ,you even cant change by yourself)
    const int gravity=9.8;
    cout<<gravity;  //value of gravity always remain 9.8
    
    // taking input from user
    string enterYourNumber="enterYourNumber";
    cin>>enterYourNumber; //see-in    >> insertion operator
    cout<<enterYourNumber;  //see-out << extraction operator
    
    // data types
    
    // int ,float=4byte
    // bool,char=1byte
    // double=8byte
    float f=12e3;  // 12*10^3 =12000
    cout<<f;
    double d=123E2;  //123*10^2  =12300
    cout<<d;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}