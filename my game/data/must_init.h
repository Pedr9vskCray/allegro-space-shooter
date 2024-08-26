#ifndef MUST_INIT_H
#define MUST_INIT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>

void must_init(bool test, const char *description);

#endif