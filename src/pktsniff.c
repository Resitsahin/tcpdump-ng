
#include "pktsniff.h"


pcap_t *open_device( char *device, int snaplen, int promisc, int tout_ms )
{
	pcap_t *handle;
	char ebuf[256];

	handle = pcap_open_live(device, READBUFSIZE, 1 , tout_ms , ebuf);

	if (handle == NULL) {
	 log_info(  "Couldn't  open device  device: %s err: \n" , device , ebuf );
	 return NULL;
	}
	log_info("Opened the device %s" , device );

	return handle;
}

char *finddefault_dev(){
	char *dev, errbuf[PCAP_ERRBUF_SIZE] ;

	dev = pcap_lookupdev(errbuf);
	if (dev == NULL) {
		log_info(  "Couldn't find default device: %s\n" , errbuf);
		return (char *)NULL ;
	}
	log_info("found the device %s " , dev );

	return dev;
}

