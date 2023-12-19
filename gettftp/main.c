//gettftp
// Created by zinelahm13 on 11/12/23.
//
#include "main.h"

int main(int argc, char* argv[]){
	int addrinfostatus;
	struct addrinfo* res;
	struct addrinfo hints;
	int sfd;

	uint32_t address_int = 0;
	char port[] =  "69"; // should be replaced by 1069 depending on what server you use
	
	memset(&hints, 0, sizeof(hints));
	
	hints.ai_family = AF_INET;
	hints.ai_protocol = IPPROTO_UDP;
	hints.ai_socktype = SOCK_DGRAM;
	
	
    if(argc == NORMAL_ARG_COUNT){
    	char* host = argv[1];
    	
    	char* file = argv[2];
    	if((addrinfostatus = getaddrinfo(host, port, &hints, &res)) != 0){
    		if(res==NULL){
    			printf("no res");
    		}
    		perror(gai_strerror(addrinfostatus));
    	}

    	sfd = socket(res->ai_family, SOCK_DGRAM, IPPROTO_UDP);
    }
    return EXIT_SUCCESS;
}

