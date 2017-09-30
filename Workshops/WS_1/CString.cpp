/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 Date:      2017/09/14
 
 */
#include <cstring>
#include <iostream>
#include "CString.h"

static int counter=0;

w1:: CString::CString(const char *temp)
        {
            if(temp==nullptr)
            {
                str[0]='\0';
                return;
            }
            strncpy(str,temp,SIZE);
            str[SIZE]='\0';
        }
void w1::CString::display(std::ostream& os) const
        {
            os<<str;
        }
    
std::ostream& w1:: operator<<(std::ostream& os,const CString s)
    {
        os<<counter++<<": ";
        s.display(os);
        return os;
    }

