#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout<<"Welcome to calculator"<<endl;
  cout<<"Operations: Addition(1), Subtraction(2), Multiplication(3), Division(4)"<<endl;
  cout<<"Enter your operation number: "<<endl;
  cin>>c;
  
  switch(c){
      case 1:
      cout<<"The sum of your digits is = "<<(a+b);
      break;
      case 2:
      cout<<"The difference of your digits is = "<<(a-b);
      break;
      case 3:
      cout<<"The product of your digits is = "<<(a*b);
      break;
      case 4:
      if(b!=0){
          cout<<"The division of your digits is = "<<(a/b);
      } else { 
          cout<<"divide by 0 error";
      break; }
  }
  return 0;
 }