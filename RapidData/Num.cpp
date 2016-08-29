#include "Num.h"

Num::Num() {
}

string Num::getName(){
    
    return "nada";
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

