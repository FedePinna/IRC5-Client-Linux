#ifndef COMMANDS_H
#define COMMANDS_H

#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include <stdio.h> 
#include "RapidData/RapidData.h"

using namespace std;

class Commands { 
public:
    Commands();
    Commands(const Commands& orig);
    string executeRutine(string name_rutine);
    string writeData(RapidData* rd);
    string infoController();
 //   void ReadData();
    virtual ~Commands();
private:
    
};

#endif /* COMMANDS_H */

