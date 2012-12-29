#include <stdio.h>
#include <pcap.h>
#include "include/log.h"

#define PCAP_ERRBUF_SIZE 256
#define READBUFSIZE BUFSIZ

/*Referance : http://www.tcpdump.org/pcap.html */


char *finddefault_dev();
pcap_t *open_device( char *device, int snaplen, int promisc, int tout_ms );
