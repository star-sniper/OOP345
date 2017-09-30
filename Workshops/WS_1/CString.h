
/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 Date:      2017/09/14
 
 */
#ifndef CSTRING_H
#define CSTRING_H

#include <iostream>

#define SIZE 3

namespace w1
{
   
    class CString
    {
    private:
        char str[SIZE+1];
    public:
        CString(const char *temp);
        void display(std::ostream&) const;
    };
    std::ostream& operator<<(std::ostream& os,const CString cs);
}
#endif /* Cstring_h */
