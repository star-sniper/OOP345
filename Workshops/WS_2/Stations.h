/*
 
 Name:      Harshit Arora
 Section:   D
 Student ID:132895160
 Email:     harora4@myseneca.ca
 Prof:      Cornel Barna
 
 */
#ifndef W2_STATIONS_H
#define W2_STATIONS_H


#include "Station.h"

namespace w2
{
    class Stations
    {
    private:
        int noOfStns;
        Station *stnTable;
        char* filename;
    public:
        Stations (char* file);
        ~Stations();
        void update() const;
        void restock() const;
        void report() const;
    };
}

#endif /* Stations_h */
