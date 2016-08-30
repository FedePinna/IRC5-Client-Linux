#include "Commands.h"

Commands::Commands(){
   
}

string Commands::writeData(RapidData* rd){
    
    stringstream ssend;
     
    ssend << "wrdata " << rd->getRapidType() << " " << rd->getName() << " " << rd->getStringValue();
   
    return ssend.str();
}
string Commands::executeRutine(string name_rutine){

    stringstream ssend;
    string request;
    
    ssend << "rutine " << name_rutine;
    
    return ssend.str();
       
}

string Commands::infoController(){
    return "infoctrl all";
}

Commands::Commands(const Commands& orig) {
}

Commands::~Commands() {
}

