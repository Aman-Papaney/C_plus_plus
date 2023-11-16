# include <iostream>
using namespace std;

// Loops are generally used when we have to execute multiple lines repeatedly and for efficient programming and better readability. 
int main()
    {
        // while loops runs the lines repeatedly until the given condition is true.
        // Syntax -
        //     while (condition){

        //        body
    
        //     }
        int num = 1, sum = 0;
        while (num < 15){
            sum += num;
            cout << "The new value of sum is " << sum << endl;
            // simply updating the value of num else it will be infinite loop
            // other ways to do it num+=1, num = num + 1 
            num++;
        }
        return 0;
    }    

