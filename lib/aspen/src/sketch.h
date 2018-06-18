#ifndef SRC_CORE_SKETCH_H_
#define SRC_CORE_SKETCH_H_

#include <mbed.h>
#include <stdio.h>
#include <stdlib.h>

// #region Board specific pin definitions
#define SDA B7
#define SCL B6

#define TX A9
#define RX A10

#define LED1 PC_13
// #endregion

void setup();
void loop();

#endif