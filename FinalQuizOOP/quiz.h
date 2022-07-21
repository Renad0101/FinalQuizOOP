#ifndef QUIZ_HH
#define QUIZ_HH


#include <iostream>

using namespace std;

class Question
{
public:
    string contents;
    string a, b, c, d;
    string correct;
    string answer;

    int question_no;
    int point;

    void ask();
    void check();

};

#endif // QUIZ_HH