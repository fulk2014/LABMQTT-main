#include <stdio.h>
#include "SevenSegment.h"

void SevenSegment::HardwareTest()
{
    common.ON();
    seg_a.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_b.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_c.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_d.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_e.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_f.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
    seg_g.ON();
    vTaskDelay(500/portTICK_PERIOD_MS);
}

void SevenSegment::DisplayBlank()
{
    common.ON();
    seg_a.OFF();
    seg_b.OFF();
    seg_c.OFF();
    seg_d.OFF();
    seg_e.OFF();
    seg_f.OFF();
    seg_g.OFF();
    common.OFF();
}

void SevenSegment::DisplayNumber(int number)
{
    switch (number)
    {
        case 0:
            DisplayNum0();
        break;
        case 1:
            DisplayNum1();
        break;
        case 2: 
            DisplayNum2();
        break;
        case 3:
            DisplayNum3();
        break;
        case 4:
            DisplayNum4();
        break;
        case 5:
            DisplayNum5();
        break;
        case 6:
            DisplayNum6();
        break;
        case 7:
            DisplayNum7();
        break;
        case 8:
            DisplayNum8();
        break;
        case 9:
            DisplayNum9();
        break;
    }
}

void SevenSegment::DisplayOff()
{
    common.OFF();
}

void SevenSegment::DisplayOn()
{
    common.ON();
}


void SevenSegment::DisplayNum0()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.ON();
    seg_d.ON();
    seg_e.ON();
    seg_f.ON();
    seg_g.OFF();
    
}

void SevenSegment::DisplayNum1()
{
    
    seg_a.OFF();
    seg_b.ON();
    seg_c.ON();
    seg_d.OFF();
    seg_e.OFF();
    seg_f.OFF();
    seg_g.OFF();
    
}

void SevenSegment::DisplayNum2()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.OFF();
    seg_d.ON();
    seg_e.ON();
    seg_f.OFF();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum3()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.ON();
    seg_d.ON();
    seg_e.OFF();
    seg_f.OFF();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum4()
{
    
    seg_a.OFF();
    seg_b.ON();
    seg_c.ON();
    seg_d.OFF();
    seg_e.OFF();
    seg_f.ON();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum5()
{
    
    seg_a.ON();
    seg_b.OFF();
    seg_c.ON();
    seg_d.ON();
    seg_e.OFF();
    seg_f.ON();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum6()
{
    
    seg_a.ON();
    seg_b.OFF();
    seg_c.ON();
    seg_d.ON();
    seg_e.ON();
    seg_f.ON();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum7()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.ON();
    seg_d.OFF();
    seg_e.OFF();
    seg_f.OFF();
    seg_g.OFF();
    
}

void SevenSegment::DisplayNum8()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.ON();
    seg_d.ON();
    seg_e.ON();
    seg_f.ON();
    seg_g.ON();
    
}

void SevenSegment::DisplayNum9()
{
    
    seg_a.ON();
    seg_b.ON();
    seg_c.ON();
    seg_d.ON();
    seg_e.OFF();
    seg_f.ON();
    seg_g.ON();
    
}