# include <iostream>
using namespace std;

int main()
{
    // Essentially for loop does the same job but in a different manner.
    // In for loop we give the starting value of the variable(sometimes called iterator), the condition which will be checked after every iteration and the increment so that loop doesn't run infinitely.
    // Syntax- 
    // for(starting value; condition; increment){

    //     body
        
    // }
    for (int i = 0; i < 15; i++)
    {
        cout << "The value of num is " << i << endl;
    }
    return 0;
}