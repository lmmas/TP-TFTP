# TP-TFTP

## Introduction

This practical work's goal is to develop a TFTP client using RFC specifications and Wireshark captures.

## Getting started

To test our project, follow these steps : 

1. Make sure your machine can run linux commands, otherwise you may install a linux bash shell adapted to the operating system of your machine.

2. Clone the repository on your machine :

```bash
   git clone https://github.com/lmmas/TP-TFTP.git
   ```

3. How to start ?
   
   - Connect to a TFTP server of your choice.
   - Run the main file of either of the gettftp of the puttftp clients
   -  To download a file from the server, run the command :
  ```bash
   ./getttftp <host> <file>
   ```

   -  To upload a file to the server, run the command :
  ```bash
   ./puttftp <host> <file>
   ```

## Project breakdown

1. We first start by getting the server and the file information from the command line. We chose to work with the local TFTP server provided on the virtual machine, so the <host> argument in the clients' commands had to be the domain name of the server. Prior to any connection with server, the <file> argument can be a string. The number of arguments is set to 3.

2. To get the address name of the server, we use the getaddrinfo function. It returns an addrinfo structure whose ai_family variable represents the address of the server. It's retrieved using the res structure.

3. We create a connection point to the server using the socket function. This function takes 3 arguments : the level-3 protocol, the mode of the socket and the level-4 prootcol used, which correpond respectively to : IPv4, Datagram mode and UDP. 



## Contributors
This project was the work of the contributors : 
- Louis-Mathis Massin ( lmmas )
- Zineb Lahmoudi ( Ninevv )
