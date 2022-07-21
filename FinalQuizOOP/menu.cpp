#include <iostream>
#include "questionSet.h"
#include "quiz.h"
#include "menu.h"
#include <time.h>
#include <windows.h>


#include <conio.h>
#include <cstdlib>
#include <string>
#include <fstream>
#include<sstream>
# include"SignUp.h"
# include "SignIn.h"




using namespace std;


void Menu::addQuestion()
{
    getline(cin, contents);
    cout << "Enter the content:";
    getline(cin, contents);
    cout << "enter your answer a: ";
    getline(cin, a);
    cout << "enter your answer b: ";
   getline(cin, b);
    cout << "enter your answer c: ";
    getline(cin, c);
    cout << "enter your answer d: ";
    getline(cin, d);
    cout << "Enter your private answer: ";
    cin >> correct;
   

    fstream file;
    file.open("questions.txt", ios::out | ios::app);
    file << contents << endl;
    file << "a) " << a <<endl;
    file << "b) " << b <<endl;
    file << "c) " << c <<endl;
    file << "d) " << d <<endl;
    file << correct << endl;
    file.close();
}


void Menu::start()
{
    ////////////////////////////// For Registration ////////////////////////////////////////


    int s;
    cout << "Press 1 for Login :" ;
    cout << endl;
    cout << "Enter 2 for SignUP :";
    cin >> s;
    if (s == 1) 
    {
   label:;
       system("cls");
        string s4, ke;
        cout << "Enter your Username : ";
        cin >> s4;
        cout << "Enter your Password : ";
        cin >> ke;
        if (SignIN(s4, ke)) 
        {
            cout << "You are now loge IN" << endl;
           
        }
        else
        {
            cout << "Invalid Login " << endl;
            goto label;
        }
    }
    if (s == 2)
    {
        system("cls");
        string s1, s2, s3, s4, ke;
        cout << "Enter your first name :";
        cin >> s1;
        cout << "Enter your last name :";
        cin >> s2;
        cout << "Enter your Email name :";
        cin >> s3;
        cout << "Enter your Username name :";
        cin >> s4;
        cout << "Enter your password name :";
        cin >> ke;
        bool x = SignUp(s1, s2, s3, s4, ke);
        if (x)
            goto label;

    }


    else
        cout << "All Right" << endl;



////////////////////////////////////////////////   Starting Game  ////////////////////////////////////////////////






    cout << "\t-----------Welcome to the Quiz Game------------" << endl;;
    Sleep(1000);
    cout << "**************************************************"<<endl;
    cout << "1-> Start the Quiz"<<endl;
    cout << "2-> Add a question" << endl;
    cout << "3-> Finish"<<endl;

    choice = _getch();

    switch (choice)
    {
    case '1':
    {

        clock_t start, stop;

        cout << "How many questions you want to attempt?" << endl;
        cin >> n;
        if (n > quiz.questions.size())
        {
            cout << "There are not enough questions in this quiz." << endl;
            break;

        }


        start = clock();
        int sum = 0;
 
      
        for (int i = 0; i <= n - 1; i++)
        {

            quiz.questions[i].ask();
            system("cls");
            quiz.questions[i].check();
            sum += quiz.questions[i].point;

       
        }
    
           
        cout << "*********** Each Question is worth 10 Points ******************* " << endl;
        cout << "  Your Quiz points result is: " << sum*10<<endl;
     
        stop = clock();
        time = (double)(stop - start) / CLOCKS_PER_SEC;
        cout << "Duration of the Quiz is: " << time << " seconds" << endl;
    }

    break;
    case '2':
    {
        Menu p1;
        Menu p2;
       p1.addQuestion();
        system("cls");
     
     
        p1.start();

    }
    break;
    case '3':
    {
        exit(0);
    }
    break;
    }


}