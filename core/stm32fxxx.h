#if STM32F == 1
#include "stm32f10x.h"
#include <stm32f10x_gpio.h>
# define GPIO_Mode_IN GPIO_Mode_IN_FLOATING
# define GPIO_Mode_OUT GPIO_Mode_Out_PP
# define GPIO_Speed_MAX GPIO_Speed_50MHz
#endif
#if STM32F == 2
#include "stm32f2xx.h"
# define GPIO_Speed_MAX GPIO_Speed_100MHz
#endif
#if STM32F == 4
#include "stm32f4xx.h"
# define GPIO_Speed_MAX GPIO_Speed_100MHz
#endif
