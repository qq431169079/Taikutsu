#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include "random.h"

static uint32_t x, y, z, w;

void random_init(void) {
    x = time(NULL);
    y = getpid() ^ getppid();
    z = clock();
    w = z ^ y;
}

uint32_t random_next(void) {
    uint32_t t = x;
    t ^= t << 11;
    t ^= t >> 8;
    x = y; y = z; z = w;
    w ^= w >> 19;
    w ^= t;
    return w;
}