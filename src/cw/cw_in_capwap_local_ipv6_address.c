
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "cw.h"



int cw_in_capwap_local_ipv6_address(struct conn *conn, struct cw_action_in *a,
				 uint8_t * data, int len,struct sockaddr *from)
{
	struct sockaddr_in6 addr;
	memcpy(&addr.sin6_addr,data,4);
	addr.sin6_family=AF_INET6;

/*
	mbag_set_sockaddr(conn->incomming,CW_ITEM_CAPWAP_LOCAL_IP_ADDRESS,(struct sockaddr*)&addr);
*/	
	
	return 1;
}


