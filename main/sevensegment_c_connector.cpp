#include "sevensegment_c_connector.h"
#include "SevenSegment.h"

#ifdef __cplusplus
extern "C" {
#endif

SevenSegment s1(0);
SevenSegment s2(4);

void s1_displayOn()
{
    s1.DisplayOn();    
}

void s1_displayOff()
{
    s1.DisplayOff();
}

void s2_displayOn()
{
    s2.DisplayOn();    
}

void s2_displayOff()
{
    s2.DisplayOff();
}

void s1_displayNumber(int number)
{
    s1.DisplayNumber(number);
}

void s2_displayNumber(int number)
{
    s2.DisplayNumber(number);
}

#ifdef __cplusplus
}
#endif