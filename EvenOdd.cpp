#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0){
        cout<<"Entered number is 0";
    } else if(num%2==0){
        cout<<"Entered number is Even";
    } else {
        cout<<"Entered number is Odd";
    }

    return 0;
}