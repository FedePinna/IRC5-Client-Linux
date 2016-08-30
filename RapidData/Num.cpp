#include "Num.h"

Num::Num(string name_var) {
    this->name = name_var;
    this->rapid_type = "num";
}

string Num::getName(){
    return this->name;
}

string Num::getRapidType(){
    return "num";
}

string Num::getStringValue(){
    
    stringstream ssnum;
    
    ssnum << this->num;
    
    return ssnum.str();

}

void Num::setNum(float num){
    this->num = num;
}

Num::~Num() {
}

