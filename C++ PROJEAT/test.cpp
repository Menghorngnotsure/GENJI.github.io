#include <iostream>
using namespace std;

double add(double a, double b, double c)
{
return a + b + c;
}

double subtract(double a, double b, double c){
    return a - b - c;
}

double multiply (double a, double b, double c){
    return a * b * c;
}

double divide (double a, double b, double c){
    if (b == 0 || c == 0) {
        cout<< "Division by zero is not allowed." <<endl
        return 0;

    } else { 
        return a / b / c;
}
int main() {
    double num1 , num2 , num3;
    char operation;
    //Taking input from the user
    cout << "Enter first number :";
    cin >> num1;
     cout << "Enter second number :";
    cin >> num2;
     cout << "Enter third number :";
    cin >> num3;

        cout << "Enter opretion (+ , - , * , % , / )";

    switch (operation) {
        case '+';
            cout << "Relsult :" << 
            add(num1, num2 , num3) <<endl;
                            break;
                        case '-':
                            cout << "Result :"<<
            subtract(num1, num2 , num3) <<endl;
                            break;
                        case '*':
                            cout << "Result :"<<
            multiply(num1, num2 , num3) <<endl;
                            break;
                        case '/':
                            cout << "Result :"<<
            divide(num1, num2 , num3) <<endl;
                            break;
                        default:
                            cout << "Invaild operation."<< endl;

            return 0;
            
            
            
            
        
    }
   