#include "Histogram.h"

void parseAdd(Histogram &h1,std::string line)
{
    int i=0;
    while (line[i]) {
        if(isalpha(line[i])) {
            h1.SetChars();
        } else if(isdigit(line[i])) {
            h1.SetNumbers();
        } else if(ispunct(line[i])) {
            h1.SetPuncts();
        } else if(isspace(line[i])) {
            h1.SetSpaces();
        } 
        i++;
    }
}
std::ostream& operator<<(std::ostream& out,Histogram &h1)
{
    out << "CharCount: " << h1.GetChars() << std::endl \
        << "NumberCount: " << h1.GetNumbers() << std::endl \
        << "PunctCount: " << h1.GetPuncts() << std::endl \
        << "SpaceCount: " << h1.GetSpaces() << std::endl;

    return out;
}

void file_count(void)
{
    std::ifstream infile("TestHarness.h");
    std::string line;
    Histogram h1;

    while(getline(infile,line)) {
        parseAdd(h1,line);
    }
    std::cout << h1; //operator overloading
}
