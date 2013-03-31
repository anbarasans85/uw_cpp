#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#pragma once

#include <iostream>
#include <stdint.h>
#include <string>
#include <sstream>
#include <fstream>

class Histogram
{
    public:
        Histogram()
        {
            chars=numbers=puncts=spaces=0;
        }
        void SetChars() { chars++; }
        void SetNumbers() { numbers++; }
        void SetPuncts() { puncts++; }
        void SetSpaces() { spaces++; }
        int GetChars() { return chars; }
        int GetNumbers() { return numbers; }
        int GetPuncts() { return puncts; }
        int GetSpaces() { return spaces; }
        friend std::ostream& operator<<(std::ostream&,Histogram &);
    private:
        int chars;
        int numbers;
        int puncts;
        int spaces;
};

void parseAdd(Histogram &,std::string);
void file_count(void);

#endif
