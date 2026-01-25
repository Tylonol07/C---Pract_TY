#include <iostream>

using namespace std;

int main()
{// If statement practice

    // Grade checker program
	cout << "wassup chat" << endl;

    cout << "Type your grade percentage: ";
    int grade;
    cin >> grade;

    //int Passinggrade[] = {100, 90, 80, 70};
    //int Failinggrade[] = {60, 50, 40, 30};

    if(grade >= 70)
    {
        cout << "You passed the class!" << endl;

    } else if(grade <= 60)
    {
        cout << "You failed the class NIMROD !" << endl;

    }
    return 0;
}
// SYNTAX
/* if (condition) 
{
       // code to be executed if condition is true
}
*/
