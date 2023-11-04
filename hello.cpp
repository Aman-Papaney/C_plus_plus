// iostream to use input and output
# include <iostream>

// a namespace may contain definitions of class, function, etc. that we are going to use here
// else we have to use them like namespace::functionName eg. std::cout, std::string
using namespace std;

// all c++ programs start execution from main function
int main()
{
    int num;
    cin >> num;
    cout << "HELLO WORLD !! " << num << endl;
    return 0;
}