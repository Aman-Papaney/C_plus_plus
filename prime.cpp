# include <iostream>
using namespace std;

int main()
{
    int factors = 0, temp = 1;
    cout << "Enter a number :";
    cin >> num;

    // calculating all the factors of a given number
    while (temp < num/2){
        if (num % temp == 0){
            factors++;
        }
        temp++;
    }

    // no. of factors > 1 means it is composite number and vice-versa
    if (factors > 1){
        cout << "notPrime" << endl;
        }
    else{
        cout << "prime" << endl;
        }
    return 0;
}