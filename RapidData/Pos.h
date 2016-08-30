#ifndef POS_H
#define POS_H

#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include <stdio.h> 
#include "RapidData.h"

using namespace std;

class Pos:public RapidData{
    
public:
    
    Pos(string name_var);
    string getRapidType();
    string getName();
    string getStringValue(); 
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setPos(float x , float y , float z);
    virtual ~Pos();
private:   
    float x;
    float y;
    float z;
};

#endif /* POS_H */

