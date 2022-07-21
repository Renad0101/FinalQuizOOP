#ifndef MENU_HH
#define MENU_HH

#include <iostream>
#include "questionSet.h"
#include "quiz.h"
using namespace std;


class Menu
{
    string a, b, c, d;
    MyQuizz quiz;
    Question q;
    string contents;
    string answer;
    string correct;
    int question_no;
    int point;
public:
    Menu()
    {
        quiz.load();
    }
    int n;
    char choice;
    double time;
    void addQuestion();
    void start();
};
#endif // MENU_HH
