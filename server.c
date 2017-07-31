#include <stdlib.h>
#include <stdio.h>


#include "ikcp.h"

int udp_output(const char *buf, int len, ikcpcb *kcp, void *user) {

    return 0;
}

int main(void) {
    ikcpcb *kcp = ikcp_create(0x11223344, (void*)0);
    kcp->output = udp_output;


    printf("exit server\r\n");

    return 0;
}
