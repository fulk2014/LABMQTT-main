#include "led_c_connector.h"
#include "LED.h"

#ifdef __cplusplus
extern "C" {
#endif

// Inside this "extern C" block, I can implement functions in C++, which will externally 
//   appear as C functions (which means that the function IDs will be their names, unlike
//   the regular C++ behavior, which allows defining multiple functions with the same name
//   (overloading) and hence uses function signature hashing to enforce unique IDs),


LED led1(16); 

void LED_ON() 
{
    led1.ON();
}

void LED_OFF() 
{
    led1.OFF();
}

#ifdef __cplusplus
}
#endif