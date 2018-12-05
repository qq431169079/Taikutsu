#pragma "once"
#include "includes.h"

struct error_t {
	int error_code;
	char error_buffer[1024];
};

struct ssh_common_t {
	sturct error_t error;
};

struct ssh_session_t {
	struct ssh_common_t common;
	struct ssh_socket_t *socket;
	char *serverbanner, *clientbanner;
	int protoversion, server, client, openssh;
	uint32_t send_seq, recv_seq;

//status flags
	int closed, closed_by_except;
	int connected;
	ssh_string banner;
};

typedef ssh_session_t *ssh_session;