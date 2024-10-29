#ifndef SEVENSEGMENT_C_CONNECTOR_H
#define SEVENSEGMENT_C_CONNECTOR_H

#ifdef __cplusplus
extern "C"
{
#endif
    void s1_displayOn();
    void s1_displayOff();
    void s2_displayOn();
    void s2_displayOff();
    void s1_displayNumber(int number);
    void s2_displayNumber(int number);

#ifdef __cplusplus
}
#endif

#endif