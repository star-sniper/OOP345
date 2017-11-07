/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 
 */

#ifndef W2_STATION_H
#define W2_STATION_H

#include <string>

namespace w2 {
    
    enum class PassType
    {
        ADULT_PASS,
        STUDENT_PASS,
    };
    
    class Station
    {
    private:
        std::string stName;
        unsigned int ad_pass;
        unsigned int st_pass;
    public:
        Station();
        void set(const std::string&, unsigned, unsigned); //sets the instance variables to the values received in its parameters
        void update(PassType, int); //updates the number of passes - sold if negative, added if positive
        unsigned inStock(PassType) const; //returns the number of passes of the requested type
        const std::string& getName() const; //returns a reference to a string object holding the name of the station
    };
}

#endif /* Station_h */
