#include <stdio.h>
#include <stdlib.h>

#include "include/Stack.h"
#include "include/Runtime.h"

Runtime RuntimeNew() {
    Runtime r = (Runtime) malloc(sizeof(struct RuntimeRep));

    r->stack = StackNew(0);

    r->payload = calloc(MAX_PAYLOAD, sizeof(int));

    r->cond = 0;
    r->cond_carry = 0;
    r->loop = 0;

    return r;
}

void RuntimeFree(Runtime r) {

    StackFree(r->stack);

    free(r->payload);

    free(r);
}