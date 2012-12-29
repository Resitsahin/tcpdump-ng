/*
 ============================================================================
 Name        : tcpdump-ng.c
 Author      : Resit Sahin - Selcuk Miynat
 Version     :
 Copyright   : GNUE general licance.
 Description : tcpdump-ng main
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <pcap.h>

#include "pktsniff.h"
#include "include/log.h"

#define PCAP_ERRBUF_SIZE 256

void init_tcpdump_ng(){
	log_info("Welcome to ntcpdump-ng!");
}

int main(void) {
	char *default_dev ;
	pcap_t * dev_handle;

	init_tcpdump_ng();

	default_dev = finddefault_dev();

	dev_handle = open_device( default_dev , READBUFSIZE , 1 , 100 ) ;

	return 1;

	return EXIT_SUCCESS;
}

