// TODO: Update your includes as necessary.

#include "client_server.hpp"

void sendOnServer() {
    // TODO: Set up the loopback address and a port to bind the server to.

    // TODO: Set up a socket.

    // TODO: Bind the socket to the address and port.

    // TODO: Listen on the socket.

    // TODO: Accept a client connection.

    // TODO: Send the string "Hail to the Victors!" over the socket.

    // TODO: Close the sockets.
}

std::string receiveOnClient() {
    // TODO: Set up the address and port of the server to be used for connect().

    // TODO: Set up a socket.

    // TODO: Connect the socket to the server in server.cpp. Loop and retry connecting until success.

    // TODO: Allocate a buffer big enough to hold the string. Receive on the socket.
    /* 
     * NOTE: If you make the buffer big enough and you are using the loopback address,
     *       then you will get the whole string on one recv() call. This does not
     *       apply in general. There is no gaurantee on all bytes being sent or received.
     */ 

    // TODO: Close the socket.

    // TODO: Decode the string and return it.
}
