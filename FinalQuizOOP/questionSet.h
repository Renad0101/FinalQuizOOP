#pragma once
#ifndef FILE_QUESTION_HH
#define FILE_QUESTION_HH


#include <iostream>
#include <vector>
#include "quiz.h"
using namespace std;


class MyQuizz
{
public:
    vector<Question> questions;

    int question_no;
    string correct;
    string answer;
    void load();

};


#endif FILE_QUESTION_HH