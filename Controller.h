#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h> 
#include <string.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>


using namespace std;

class Controller {

private:
    struct sockaddr_in serverABB_addr,cli_addr;
    char *buffer_send[81];
    char buffer_recv[100];
    socklen_t clilen;
    int sockfd;
    int bytes_read;
    int port;
    int option;
    

public:
    Controller(string ip_server,int port);
    Controller(const Controller& orig);
    void connectController();
    void disconnectController();
    string sendCommand(string command,bool wait_command);
    void getRapidData();
    virtual ~Controller();
  
};

#endif /* CONTROLLER_H */

