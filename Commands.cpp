#include "Commands.h"

Commands::Commands(){
   
}

string Commands::writeData(string rapid_data, string name_var, string var){
    
    stringstream ssend;
     
    ssend << "wrdata " << rapid_data << " " << name_var << " " << var;
   
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

