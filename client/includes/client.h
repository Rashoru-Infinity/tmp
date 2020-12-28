#ifndef CLIENT_H
#define CLIENT_H
#include "sha256.h"
#include "read_file.h"

t_status	send_hash(int sockfd, const char *hash);
int 		request(int sockfd);

#endif
