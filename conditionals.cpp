# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number :";
    cin >> num;

    // if keyword checks for condition and executes the code if condition is true
    // else it will jump to else block(if found) and excute it
    if (num > 0){
         cout << num << " is positive" << endl;
    } 
    else{
        cout << num << " is not positive" << endl;
    }

    // NESTED IF-ELSE
    // when an if condition is used inside another if condition then it is called nested 
    if (num >= 0){
        if (num > 0){
             cout << num << " is positive" << endl;
        }
        else{
            cout << num << " is zero" << endl;
        }
        
    }
     
    else{
        cout << num << " is not positive" << endl;
    }

    return 0;
}