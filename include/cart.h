/**
 * define cartridge header
 */

#include <stdint.h>

typedef struct {
    uint8_t entry[4];
    uint8_t logo[0x30]; //48
    char title[16];
    
} rom_header;