#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "questionSet.h"
#include "quiz.h"

using namespace std;


void MyQuizz::load()
{
    fstream file;
    file.open("questions.txt", ios::in);

    if (file.good() == false)
    {
        cout << "failed to open!";
        exit(0);
    }

    string line;

    Question question;
    while (getline(file, line))
    {
        questions.push_back(question);

        questions[questions.size()-1].contents = line;
        getline(file, line);

        questions[questions.size() - 1].a = line;
        getline(file, line);

        questions[questions.size() - 1].b = line;
        getline(file, line);

        questions[questions.size() - 1].c = line;
        getline(file, line);

        questions[questions.size() - 1].d = line;
        getline(file, line);

        questions[questions.size() - 1].correct = line;
    }
    file.close();

}