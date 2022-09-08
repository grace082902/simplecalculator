/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1,num2;
    
    cout<<"Enter the first number, operator, second number (Ex. 5 + 2):";
    cin>>num1;
    cin>>op;
    cin>>num2;
    
    cout<<endl;
    
    switch(op) {

    case '+':
      cout << "The result is " << num1 + num2;
      break;

    case '-':
      cout <<  "The result is " << num1 - num2;
      break;

    case '*':
      cout << "The result is " << num1 * num2;
      break;

    case '/':
      cout <<  "The result is " << num1 / num2;
      break;

    default:
      
      cout << "You entered an invalid operator. Use +,-*,/ only.";
      break;
  }

    return 0;
}
