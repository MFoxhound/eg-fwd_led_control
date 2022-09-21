#ifndef __SYS_CLK__
#define __SYS_CLK__


//RCC register configuration bits from page 253
#define __SYS_RCC_ACG             ((SYS_RCC_ACG           &0x01) <<27)
#define __SYS_RCC_SYS_DIV         ((SYS_RCC_SYS_DIV       &0x0F) <<23)
#define __SYS_RCC_USE_SYS_DIV     ((SYS_RCC_USE_SYS_DIV   &0x01) <<22)
#define __SYS_RCC_USE_PWM_DIV     ((SYS_RCC_USE_PWM_DIV   &0x01) <<20)
#define __SYS_RCC_PWM_DIV         ((SYS_RCC_PWM_DIV       &0x07) <<17)
#define __SYS_RCC_PLL_PWR_DN      ((SYS_RCC_PLL_PWR_DN    &0x01) <<13)
#define __SYS_RCC_PLL_BYPASS      ((SYS_RCC_PLL_BYPASS    &0x01) <<11)
#define __SYS_RCC_XTAL_OSC        ((SYS_RCC_XTAL_OSC      &0x1F) <<6)
#define __SYS_RCC_OSC_SRC         ((SYS_RCC_OSC_SRC       &0x03) <<4)
#define __SYS_RCC_MAIN_OSC_DIS    ((SYS_RCC_MAIN_OSC_DIS  &0x01))

//RCC2 register configuration bits from page 259
#define __SYS_RCC2_USE_RCC2       ((SYS_RCC2_USE_RCC2     &0x01) <<31)
#define __SYS_RCC2_DIV_400        ((SYS_RCC2_DIV_400      &0x01) <<30)
#define __SYS_RCC2_SYS_DIV2       ((SYS_RCC2_SYS_DIV2     &0x3F) <<23)
#define __SYS_RCC2_SYS_DIV2_LSB   ((SYS_RCC2_SYS_DIV2_LSB &0x01) <<22)
#define __SYS_RCC2_USB_PWR_DN     ((SYS_RCC2_USB_PWR_DN   &0x01) <<14)
#define __SYS_RCC2_PLL_PWR_DN_2   ((SYS_RCC2_PLL_PWR_DN_2 &0x01) <<13)
#define __SYS_RCC2_PLL_BYPASS_2   ((SYS_RCC2_PLL_BYPASS_2 &0x01) <<11)
#define __SYS_RCC2_OSC_SRC_2      ((SYS_RCC2_OSC_SRC_2    &0x07) <<4)

#define SYS_RCC      (__SYS_RCC_ACG | __SYS_RCC_SYS_DIV | __SYS_RCC_USE_SYS_DIV | __SYS_RCC_USE_PWM_DIV | __SYS_RCC_PWM_DIV | __SYS_RCC_PLL_PWR_DN | __SYS_RCC_PLL_BYPASS | __SYS_RCC_XTAL_OSC | __SYS_RCC_OSC_SRC | __SYS_RCC_MAIN_OSC_DIS)
#define SYS_RCC2     (__SYS_RCC2_USE_RCC2 | __SYS_RCC2_DIV_400 | __SYS_RCC2_SYS_DIV2 | __SYS_RCC2_SYS_DIV2_LSB | __SYS_RCC2_USB_PWR_DN | __SYS_RCC2_PLL_PWR_DN_2 | __SYS_RCC2_PLL_BYPASS_2 | __SYS_RCC2_OSC_SRC_2)
#endif