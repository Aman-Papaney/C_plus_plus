# include <iostream>
using namespace std;

int main()
{
    // Essentially for loop does the same job but in a different manner.
    // In for loop we give the starting value of the variable(sometimes called iterator), the condition and the updation so that loop doesn't run infinitely.
    // The condition will be checked after every iteration. 
    // Syntax- 
    // for(starting value; condition; updation){

    //     body
        
    // }
    for (int i = 0; i < 15; i++)
    {
        cout << "The value of num is " << i << endl;
    }
    return 0;
}
// Flow of for loop
// 0. Condition initialized
// 1. Follow steps 2, 3 as long as the condition is true
// 2. Execute the for loop body
// 3. Update the variable(s)
// 4. When condition become false, exit the loop