#include <iostream>
#include "infixToPostfix.cpp"
#include <string.h>
#include<stdlib.h>

using namespace std;

int IsOperator(char value){
	if(value == '*' || value == '/' || value == '+' || value =='-'){
		return 1;
	}else{
        return 0;
	}
}

int Precedence(char value){
	if(value == '*' || value == '/'){
		return 2;
	}else if(value == '+' || value == '-'){
		return 1;
	}else{
		return 0;
	}
}

bool Validation(char infix[]){
    int counter, open = 0, close = 0;
    for(counter = 0; infix[counter] != '\0'; counter++){
        if(infix[counter] == 40){
            open++;
        }else if(infix[counter] == 41){
            close++;
        }
    }

    if(open == close){
        for(counter = 0; infix[counter] != '\0'; counter++){
            if(IsOperator(infix[counter])){
                int nextCounter = counter+1;
                if(IsOperator(infix[nextCounter])){
                    return false;
                }
            }
        }
        return true;
    }else{
        return false;
    }
}

double Operation(double firstValue, double secondValue, char mathOperator){
	if(mathOperator == '+'){
		return firstValue+secondValue;
	}else if(mathOperator == '-'){
		return firstValue-secondValue;
	}else if(mathOperator == '*'){
		return firstValue*secondValue;
	}else if(mathOperator == '/'){
		return firstValue/secondValue;
	}else{
		return 0;
	}
}

int main(){
    StackType<char> salekur;
    char infix[100], postfix[100];

    cout << "Enter a String Equation: ";
    cin >> infix;

    if(!Validation(infix)){
        cout << "\nInvalid Expression" << endl;
    }else{
        cout << "\nPostfix Expression: ";
        salekur.Push('(');
        strcat(infix, ")");

        int counter, postCounter = 0;
        char lastOperator;
        for(counter = 0; infix[counter] != '\0'; counter++){
            if(infix[counter] == '('){
                salekur.Push(infix[counter]);
            }else if(IsOperator(infix[counter]) == 1){
                lastOperator = salekur.Top();
                salekur.Pop();
                while(IsOperator(lastOperator) == 1 && Precedence(lastOperator)>= Precedence(infix[counter])){
                    postfix[postCounter] = lastOperator;
                    cout << postfix[postCounter];
                    postCounter++;
                    lastOperator = salekur.Top();
                    salekur.Pop();
                }
                salekur.Push(lastOperator);
                salekur.Push(infix[counter]);
            }else if(infix[counter] == ')'){
                lastOperator = salekur.Top();
                salekur.Pop();
                while(lastOperator != '('){
                    postfix[postCounter] = lastOperator;
                    cout << postfix[postCounter];
                    postCounter++;
                    lastOperator = salekur.Top();
                    salekur.Pop();
                }
            }else{
                //infix to postfix
                postfix[postCounter] = infix[counter];
                cout << postfix[postCounter];
                postCounter++;
            }
        }
        //Evaluating of postfix
        StackType<double> polas;
        double result;
        for(counter = 0; postfix[counter] != '\0'; counter++){
            if(IsOperator(postfix[counter]) == 0){
                polas.Push(postfix[counter] - '0');
            }else if(IsOperator(postfix[counter]) == 1){
                double x = polas.Top();
                polas.Pop();
                double y = polas.Top();
                polas.Pop();
                result = Operation(y, x, postfix[counter]);
                polas.Push(result);
            }
        }
        cout << "\n\nResult is: " << result << endl;
    }
    return 0;
}
