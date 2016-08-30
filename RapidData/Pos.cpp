#include "Pos.h"

using namespace std;

Pos::Pos(string name_var){
    this->name = name_var;
    this->rapid_type = "pos";
}

string Pos::getName(){
    return this->name;
}

string Pos::getRapidType(){
    return "pos";
}

string Pos::getStringValue(){
    
    stringstream sspos;
    
    sspos << "[" << this->x << "," << this->y << "," << this->z << "]";
    
    return sspos.str();
    
}

void Pos::setX(float x){
    this->x= x;
}

void Pos::setY(float y){
    this->y= y;
}

void Pos::setZ(float z){
    this->z= z;
}

void Pos::setPos(float x, float y, float z){
    this->x= x;
    this->y= y;
    this->z= z;
}

Pos::~Pos(){
}
