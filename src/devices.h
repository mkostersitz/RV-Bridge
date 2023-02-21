/*********************************************************************************
 *  MIT License
 *  
 *  Copyright (c) 2023 Randy Ubillos
 *  
 *  https://github.com/rubillos/RV-Bridge
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *  
 ********************************************************************************/
 
#ifndef _DEVICES_H_
#define _DEVICES_H_

#include <stdint.h>

typedef enum {
    Lamp = 0,
    DimmableLamp,
    Switch
} SwitchType;

typedef struct {
    uint8_t index;
    SwitchType type;
    const char* name;
} SwitchDeviceRec;

typedef struct {
    uint8_t index;
    int8_t upIndex;
    int8_t downIndex;
    const char* name;
} FanDeviceRec;

typedef struct {
    uint8_t index;
    uint8_t compressorIndex;
    uint8_t fanHIndex;
    uint8_t fanLIndex;
    int8_t furnaceIndex;
    const char* name;
} ThermostatDeviceRec;

#endif
