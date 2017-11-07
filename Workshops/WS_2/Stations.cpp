/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 
 */

#include <fstream>
#include <iostream>
#include <iomanip>
#include "Stations.h"

namespace w2
{
    
    Stations::Stations (char* name)
    {
        std::string temp_stname="";
        unsigned int temp_adpass=0u;
        unsigned int temp_stpass=0u;
        
        
        filename=name;
        
        std::fstream fs(filename);
        if (fs.is_open())
        {
            fs >> noOfStns;
            fs.ignore();
            stnTable = new Station[noOfStns];
            fs.ignore();
            for (int i = 0; i < noOfStns; i++)
            {
                std::getline(fs,temp_stname,';');
                fs>>temp_stpass>>temp_adpass;
                stnTable[i].set(temp_stname,temp_stpass,temp_adpass);
            }
        }
        fs.close();
    }
    
    Stations::~Stations()
    {
        std::ofstream fs(filename);
        if (fs.is_open())
        {
            fs << noOfStns << ";" << std::endl;
            for (int i = 0; i < noOfStns; i++) {
                fs << stnTable[i].getName() << ";"
                << stnTable[i].inStock(PassType::STUDENT_PASS) << " "
                << stnTable[i].inStock(PassType::ADULT_PASS);
            }
            fs.close();
        }
        if (stnTable)
        {
            delete []stnTable;
            stnTable = nullptr;
        }
    }
    
    void Stations::update() const
    {
        std::cout << "Passes Sold :\n";
        std::cout << "-------------\n";
        for (int i = 0; i < noOfStns; i++) {
            int std, adl;
            std::cout << stnTable[i].getName() << "\n";
            std::cout << " Student Passes sold : ";
            std::cin >> std;
            std::cout << " Adult   Passes sold : ";
            std::cin >> adl;
            stnTable[i].update(PassType::STUDENT_PASS, -std);
            stnTable[i].update(PassType::ADULT_PASS, -adl);
        }
       std::cout<<std::endl;
    }
    
    void Stations::restock() const
    {
        std::cout << "Passes Added :\n";
        std::cout << "-------------:\n";
        for (int i = 0; i < noOfStns; i++) {
            int std, adl;
            std::cout << stnTable[i].getName() << "\n";
            std::cout << " Student Passes added : ";
            std::cin >> std;
            std::cout << " Adult   Passes added : ";
            std::cin >> adl;
            stnTable[i].update(PassType::STUDENT_PASS, std);
            stnTable[i].update(PassType::ADULT_PASS, adl);
        }
        std::cout<<std::endl;

    }
    
    void Stations::report() const {
        std::cout << "Passes in Stock : Student Adult\n";
        std::cout << "-------------------------------\n";
        for (int i = 0; i < noOfStns; i++) {
            std::cout << std::left << std::setw(22) << stnTable[i].getName();
            std::cout << std::setw(6) << stnTable[i].inStock(PassType::STUDENT_PASS);
            std::cout << std::setw(3) << stnTable[i].inStock(PassType::ADULT_PASS);
            std::cout << "\n";
        }
    }
}
