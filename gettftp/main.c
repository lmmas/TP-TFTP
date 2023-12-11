//gettftp
// Created by zinelahm13 on 11/12/23.
//
#include "main.h"

int main(int argc, char* argv[]){
	int addrinfostatus;
	struct addrinfo* res;
	struct addrinfo hints;
	memset(&hints, 0, sizeof(hints));
    if(argc == NORMAL_ARG_COUNT){
    	char* host = argv[1];
    	char* file = argv[2];
    	if((addrinfostatus = getaddrinfo(host, NULL, &hints, &res)) == 0){
    		if(res!=NULL){
    			printf("%d\n", res->ai_family);
    		}
    	}
    	printf("%d\n", addrinfostatus);
    }
    return EXIT_SUCCESS;
}

