#ifndef RAPIDDATA_H
#define RAPIDDATA_H

#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class RapidData{
    
public:
    RapidData();
    virtual string getRapidType()=0;
    virtual string getName()=0;
    virtual string getStringValue()=0;   
    virtual ~RapidData();

protected:
    string name;
    string rapid_type;
    string string_value;
    
};

#endif /* RAPIDDATA_H */

