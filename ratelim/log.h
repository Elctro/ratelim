#pragma once

#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "thread_shared.h"

#define C_MOD_MUTEX "mutex.ratelim.kres.module\0"
#define C_MOD_LOGFILE "/var/log/whalebone/ratelim.log\0"

void debugLog(const char *format, ...);