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


#include "process.h"
#include "CString.h"


int main(int argc, const char * argv[]) {
    std::cout<<"Command Line";
    
    for(int arg=0;arg<argc;arg++)
        std::cout<<" "<<argv[arg];
    
    std::cout<<"\n";
    
    if (argc == 1){
        std::cout << "Insufficient number of arguments(min 1)" << std::endl;
        return 1;
    }
    
    std::cout << "Maximum number of characters stored : " << SIZE << std::endl;
    
    
    for (int arg = 1; arg < argc; arg++)
        process(argv[arg]);
   
    
    return 0;
}
