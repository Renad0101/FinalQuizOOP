#include <iostream>
#include "quiz.h"
# include <string>
using namespace std;


void Question::check()
{
    if (answer == correct)
    {
        point = 1;
    }
    else point = 0;
}

void Question::ask()
{
    cout << question_no << endl;
    cout << "\n" << contents << endl;    
     cout << "-------------------\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "----------------\n";
    cout << "\n" << "answer: ";
    cin >> answer;
}