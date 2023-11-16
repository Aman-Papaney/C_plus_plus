# include <iostream>
using namespace std;

// Switch Case is used as an alternative for else-if statements.
// It promotes writing neat code and enhances readibility.
// Syntax -
//     switch (expression) {

//     case expectedValueOfExpression:
//         statements to execute;
//         break;

//     case otherExpectedValueOfExpression:
//         other statements to execute;
//         break;

//     //default case is not mandatory
//     default:
//     default statements;

//     } 

// Even break statement is not mandatory for functioning of switch case but without it all the cases will get executed.

// Simple Program to understand switch case

int main()
{
    int num;
    cout << "Enter a integer :";
    cin >> num;

    switch (num + 2){

        case 2 :
            cout << "You Entered 0 as input" << endl;
            break;

        case 3 :
            cout << "You Entered 1 as input" << endl;
            break;

        default :
            cout << "You Entered something else as input" << endl;
    }
    return 0;
} 