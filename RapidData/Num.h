#ifndef NUM_H
#define NUM_H

#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include <stdio.h> 
#include "RapidData.h"

using namespace std;

class Num:public RapidData{
public:
    Num(string name_var);
    string getRapidType();
    string getName();
    string getStringValue();
    void setNum(float num);
    virtual ~Num();
private:
    float num;
};

#endif /* NUM_H */

