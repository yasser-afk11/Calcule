#include<cmath>
#include<iostream>
using namespace std;

void sum(int a, int b) {
    cout<<"your sum is: "<<a+b<<endl;
}
void mins(int a, int b) {
    cout<<"your minus is: "<<a-b<<endl;
}
void multiply(int a, int b) {
    cout<<"your multiply is: "<<a*b<<endl;
}
void divide(float a, float b) {
    cout<<"your divide is: "<<a/b<<endl;
}
void power(int a, int b) {
    cout<<"your power is: "<<pow(a,b)<<endl;
}
void cosine(float a) {
    cout<<"your cos is: "<<cos(a)<<endl;
}
void sine(float a) {
    cout<<"your sin is: "<<sin(a)<<endl;
}
void exponent(float a) {
    cout<<"your exponent is: "<<exp(a)<<endl;
}
void logarithm(float a) {
    cout<<"your logarithm is: "<<log(a)<<endl;
}

int main() {
    float x,y;
    char operation;
    string operation1;
    cout<<"-------------------Welcome to C++ Calcules---------------"<<endl;
    cout<<"what operation you want , example: + * / ^"<<endl;
    cout<<"IF you want others press x: ";
    cin>>operation;
    if(operation == '+') {
        cout<<"Enter x : ";
        cin>>x;
        cout<<"Enter y : ";
        cin>>y;
        sum(x,y);
    }
    else if(operation == '-') {
        cout<<"Enter x : ";
        cin>>x;
        cout<<"Enter y : ";
        cin>>y;
        mins(x,y);
    }
    else if(operation == '*') {
        cout<<"Enter x : ";
        cin>>x;
        cout<<"Enter y : ";
        cin>>y;
        multiply(x,y);
    }
    else if(operation == '/') {
        cout<<"Enter x : ";
        cin>>x;
        cout<<"Enter y : ";
        cin>>y;
        if (y == 0) {
            cout<<"division by zero isnt valid";
            return 0;
        }
        divide(x,y);
    }
    else if(operation == '^') {
        cout<<"Enter the number that you want in base : ";
        cin>>x;
        cout<<"Enter the power : ";
        cin>>y;
        power(x,y);
    }
    //here we are going in 'others'
    else if(operation == 'x') {
        cout<<"--------------We have cos,sin,log base 10(log),exponential(e)--------"<<endl;
        cout<<"if you are interested in one of these type it , example : cos sin log e"<<endl;
        cout<<"--We apologize if you didnt find what you need , more is coming soon--"<<endl;
        cin>>operation1;
        if( operation1 == "cos") {
            cout<<"Enter x and make sure its in rad: ";
            cin>>x;
            cosine(x);
        }
        else if( operation1 == "sin") {
            cout<<"Enter x and make sure its in rad: ";
            cin>>x;
            sine(x);
        }
        else if( operation1 == "exponential") {
            cout<<"Enter x : ";
            cin>>x;
            exponent(x);
        }
        else if( operation1 == "logarithm") {
            cout<<"Enter x : ";
            cin>>x;
            logarithm(x);
        }
        else {
            cout<<"Invalid operation"<<endl;
        }
    }
    else {
        cout<<"Invalid operation"<<endl;
    }


    return 0;
}
