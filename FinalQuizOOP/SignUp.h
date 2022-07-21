#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<cstdlib>
#include<sstream>

using namespace std;


bool SignUp(string fname, string lname, string email, string Uname, string key)
{
    ofstream in;
    in.open("logIN.txt", ios::app);
    if (in.is_open()) 
    {
        in << Uname << " " << key << " " << fname << " " << lname << " " << email<<endl ;
        return true;
    }
    return false;

}