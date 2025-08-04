#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/dma.h"
#include "hardware/timer.h"
#include "hardware/clocks.h"
#include "hardware/flash.h"
#include "hardware/sync.h"

#define BUTA 0
#define BUTB 1
#define BUT1 10
#define BUT2 11
#define BUT3 9
#define BUT4 8

#define LED 12