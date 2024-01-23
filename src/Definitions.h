// EEPROM Constants
#define READ			false
#define WRITE			true

// UNIX Time Constants
#define UNIX_GET		false
#define UNIX_CLEAR		true

// Clock Constants
#define CLOCK_12H		true
#define CLOCK_24H		false
#define HZ_4096			4096
#define HZ_64			64
#define HZ_1			1
#define HZ_1_60			60000

// Include RV3028 Registers
#ifndef __RV3028_Registers__
    #include "Registers.h"
#endif
