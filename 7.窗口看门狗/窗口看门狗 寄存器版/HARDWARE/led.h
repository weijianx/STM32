#ifndef __LED_H__
#define __LED_H__
#include  "sys.h"

#define LED0 PBout(5)
#define LED1 PEout(5)

void led_init(void);



#endif

