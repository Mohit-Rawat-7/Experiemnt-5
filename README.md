## Experiment 5
## Theory:
Control structures in C++ let you decide which code to run based on certain conditions:

if: Runs a block of code if a condition is true.
else: Runs a block of code if the previous if condition is false.
else if: Checks another condition if the previous if condition was false. You can have multiple else if conditions.
switch: Compares a variable against a set of values (cases) and runs the code for the matching case. If no cases match, it runs the default block (if provided).
### Program 1
### Aim:
To determine if a number is even, odd, or zero.

### Software Used:
Visual Studio Code

# Program code;
``` javascript
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
```

### Output:
![image](https://github.com/user-attachments/assets/fc391cc0-9cfe-4c9e-9aad-f8ee9435632d)


### Program 2
Aim:
To find the largest of two numbers.

### Software Used:
Visual Studio Code

# Program code:
``` javascript
#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    if(n1>n2) {
        cout<<n1<<" is greater than "<<n2;
    } else {
        cout<<n2<<" is greater than "<<n1;
    }

    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/188cdf1c-770b-4f14-9cc3-b43bcbd3e52e)


### Program 3
### Aim:
To check if a given year is a leap year.

### Software Used:
Visual Studio Code

#Program code:
``` javascript
#include <iostream>
using namespace std;

int main() {
  int y;
  cout << "Enter a year: ";
  cin >> y;
  if((y%4==0 && y%100!=0)||(y%400==0)){
    cout<<y<<" is a leap year";
  } else{
    cout<<y<<" is not a leap year";
  }
  return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/9c8e29b6-9437-40dc-8df5-a7b892b46b43)


### Program 4
### Aim:
To validate a password.

### Software Used:
Visual Studio Code

# Program code:
``` javascript
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
```

### Output:
![image](https://github.com/user-attachments/assets/a75d7d5b-6005-4ac3-9e67-c85f4581bf68)



### Program 5
### Aim:
To display the days of the week based on user input.

### Software Used:
Visual Studio Code

# Program code:
``` javascript
#include <iostream>
using namespace std;
int main(){
    string password;
    cout<<"Enter password: ";
    cin>> password;
    if(password=="Password"){
        cout<<"Access Granted";
    } else {
        cout<<"Access Denied";
    }
    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/9735d46b-97ee-48e2-884e-2b95a2fdf76c)


### Program 6
### Aim:
To create a simple calculator using switch statements.

### Software Used:
Visual Studio Code

# Program code:
``` javascript
#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout << "Enter a number: ";
  cin >> a;
  if(a>7){
      cout<<"Enter valid number";
  } else { 
      switch(a){
          case 1:
          cout<<"Monday";
          break;
          case 2:
          cout<<"Tuesday";
          break;
          case 3:
          cout<<"Wednesday";
          break;
          case 4:
          cout<<"Thursday";
          break;
          case 5:
          cout<<"Friday";
          break;
          case 6:
          cout<<"Saturday";
          break;
          case 7:
          cout<<"Sunday";
          break;
        }
  }
  return 0;
 }
```

### Output:
![image](https://github.com/user-attachments/assets/34e691bb-e802-4f76-b5fd-8526f3334b92)

