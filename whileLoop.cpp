# include <iostream>
using namespace std;

// Loops are generally used when we have to execute multiple lines repeatedly and for efficient programming and better readability. 
int main()
    {
        int num = 5;

        // while loops runs the lines repeatedly until the given condition becomes false
        while (num < 15){
            cout << "The value of num is " << num << endl;
            // simply updating the value of num else it will be infinite loop
            // other ways to do it num+=1, num = num + 1 
            num++;
        }
        return 0;
    }    
