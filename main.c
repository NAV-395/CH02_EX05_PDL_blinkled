
#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
int main(void)
{
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    for (;;)
    {
    	Cy_GPIO_Write(CYBSP_USER_LED_PORT, CYBSP_USER_LED_NUM,0);
    	Cy_SysLib_Delay(250);
    	Cy_GPIO_Write(CYBSP_USER_LED_PORT, CYBSP_USER_LED_NUM,1);
    	Cy_SysLib_Delay(250);
    }
}

