/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 
 */

#include "Station.h"

namespace w2
{
    
    Station::Station()
    {
        stName = "";
        ad_pass = 0u;
        st_pass= 0u;
    }
    
    void Station::set(const std::string& name, unsigned student, unsigned adult)
    {
        stName = name;
        ad_pass=adult;
        st_pass=student;
    }
    
    void Station::update(PassType pass, int count)
    {
        switch(pass)
        {
            case PassType::ADULT_PASS:
                ad_pass+=count;
                break;
            case PassType::STUDENT_PASS:
                st_pass+=count;
                break;
        }
        
    }
    
    unsigned Station::inStock(PassType pass) const
    {
        unsigned temp=0u;
        switch(pass)
        {
            case PassType::ADULT_PASS:
                temp=ad_pass;
                break;
            case PassType::STUDENT_PASS:
                temp=st_pass;
                break;
        }
        return temp;
    }
    
    const std::string& Station::getName() const {
        return stName;
    }
}
