/******************************************************************************
* Copyright (C) 2018, Huada Semiconductor Co.,Ltd All rights reserved.
*
* This software is owned and published by:
* Huada Semiconductor Co.,Ltd ("HDSC").
*
* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND
* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
*
* This software contains source code for use with HDSC
* components. This software is licensed by HDSC to be adapted only
* for use in systems utilizing HDSC components. HDSC shall not be
* responsible for misuse or illegal use of this software for devices not
* supported herein. HDSC is providing this software "AS IS" and will
* not be responsible for issues arising from incorrect user implementation
* of the software.
*
* Disclaimer:
* HDSC MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS),
* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,
* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED
* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED
* WARRANTY OF NONINFRINGEMENT.
* HDSC SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,
* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,
* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR
* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,
* SAVINGS OR PROFITS,
* EVEN IF Disclaimer HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED
* FROM, THE SOFTWARE.
*
* This software may be replicated in part or whole for the licensed use,
* with the restriction that this Disclaimer and Copyright notice must be
* included with each copy of this software, whether used in part or whole,
* at all times.
*/
/******************************************************************************/
/** \file main.c
 **
 ** A detailed description is available at
 ** @link Sample Group Some description @endlink
 **
 **   - 2018-05-08  1.0  Lux First version for Device Driver Library of Module.
 **
 ******************************************************************************/

/******************************************************************************
 * Include files
 ******************************************************************************/
#include "gpio.h"
#include "lcd.h"

uint32_t numCode;
/******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/

/******************************************************************************
 * Global variable definitions (declared in header file with 'extern')
 ******************************************************************************/

/******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/

/******************************************************************************
 * Local function prototypes ('static')
 ******************************************************************************/

/******************************************************************************
 * Local variable definitions ('static')                                      *
 ******************************************************************************/

/******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/

/*****************************************************************************
 * Function implementation - global ('extern') and local ('static')
 ******************************************************************************/
static void App_LedInit(void);
unsigned int CalcuCode(unsigned char num);
/**
 ******************************************************************************
 ** \brief  Main function of project
 **
 ** \return uint32_t return value, if needed
 **
 ** This sample
 *******************************************
 *******************************************
 **	author:xys	wechat:18665321219   *******
 *******************************************
 *******************************************
 ******************************************************************************/
int32_t main(void)
{
    ///< LED端口初始化
    App_LedInit();

    while(1)
    {
        
				///< LED点亮
        Gpio_SetIO(STK_LED_PORT, STK_LED_PIN);
        delay1ms(500);
				Gpio_ClrIO(STK_LED_PORT, STK_LED_PIN);
        delay1ms(1000);
				Gpio_SetIO(STK_LED_PORT, STK_LED_PIN);
        delay1ms(500);
				Gpio_ClrIO(STK_LED_PORT, STK_LED_PIN);
        delay1ms(1000);
				//Lcd_FullDisp();
        ///< LED关闭
				
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x01))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x01) | ((CalcuCode(0x08))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x01))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x08) | ((CalcuCode(0x05))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x01) | ((CalcuCode(0x08))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x05) | ((CalcuCode(0x06))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x08) | ((CalcuCode(0x05))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x06) | ((CalcuCode(0x06))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x05) | ((CalcuCode(0x06))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x06) | ((CalcuCode(0x02))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x06) | ((CalcuCode(0x06))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x02) | ((CalcuCode(0x03))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x06) | ((CalcuCode(0x02))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x03) | ((CalcuCode(0x09))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x02) | ((CalcuCode(0x03))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x09) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x03) | ((CalcuCode(0x09))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x09) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x00))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x00) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(0,numCode);
				numCode = (CalcuCode(0x0a) | ((CalcuCode(0x0a))<<16));
				Lcd_WriteRam(1,numCode);
				delay1ms(700);
				
    }
}

unsigned int CalcuCode(unsigned char num)
{
	unsigned int pcode;
	switch(num & 0x0f)
	{
		case 0	:	pcode =	0x0f05;break;
		case 1	:	pcode	=	0x0600;break;
		case 2	:	pcode	=	0x0b06;break;
		case 3	:	pcode	=	0x0f02;break;
		case 4	:	pcode	= 0x0603;break;
		case 5	:	pcode	=	0x0d03;break;
		case 6	:	pcode = 0x0d07;break;
		case 7	:	pcode	=	0x0700;break;
		case 8	:	pcode	= 0x0f07;break;
		case 9	:	pcode	=	0x0f03;break;
		default	:	pcode	=	0x0000;break;
	}
	return	pcode;
}

static void App_LedInit(void)
{
    stc_gpio_cfg_t stcGpioCfg;
		stc_lcd_cfg_t	 stcLcdCfg;									//LCD
		stc_lcd_segcompara_t stcLcdsegcompara;		//LCD
		stc_lcd_segcom_t	stcLcdsegcom;						//LCD
    
		DDL_ZERO_STRUCT(stcLcdCfg);
       
    Sysctrl_ClkSourceEnable(SysctrlClkRCL,TRUE);			//系统时钟源使能,内部低速时钟
    Sysctrl_SetRCLTrim(SysctrlRclFreq32768);          //内部低速时钟频率TRIM值加载

		//< 打开GPIO外设时钟门控
    Sysctrl_SetPeripheralGate(SysctrlPeripheralGpio, TRUE); 
    Sysctrl_SetPeripheralGate(SysctrlPeripheralLcd,TRUE);
    ///< 端口方向配置->输出(其它参数与以上（输入）配置参数一致)
    stcGpioCfg.enDir = GpioDirOut;
    ///< 端口上下拉配置->下拉
    stcGpioCfg.enPu = GpioPuDisable;
    stcGpioCfg.enPd = GpioPdDisable;
    
    ///< LED关闭
    Gpio_ClrIO(STK_LED_PORT, STK_LED_PIN);
    
    ///< GPIO IO LED端口初始化
    Gpio_Init(STK_LED_PORT, STK_LED_PIN, &stcGpioCfg);
    
		//lcd io
		Gpio_SetAnalogMode(STK_LCD_COM0_PORT,STK_LCD_COM0_PIN);
		Gpio_SetAnalogMode(STK_LCD_COM1_PORT,STK_LCD_COM1_PIN);
		Gpio_SetAnalogMode(STK_LCD_COM2_PORT,STK_LCD_COM2_PIN);
		Gpio_SetAnalogMode(STK_LCD_COM3_PORT,STK_LCD_COM3_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG0_PORT,STK_LCD_SEG0_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG1_PORT,STK_LCD_SEG1_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG2_PORT,STK_LCD_SEG2_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG3_PORT,STK_LCD_SEG3_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG4_PORT,STK_LCD_SEG4_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG5_PORT,STK_LCD_SEG5_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG6_PORT,STK_LCD_SEG6_PIN);
		Gpio_SetAnalogMode(STK_LCD_SEG7_PORT,STK_LCD_SEG7_PIN);
		
		//lcd 
		stcLcdsegcom.u32Seg0_31 = 0xffffff00;		//SEG0-SEG7
		stcLcdsegcom.stc_seg32_51_com0_8_t.seg32_51_com0_8 = 0x000010ff;		//COM0-COM3
		
		stcLcdCfg.LcdBias = LcdBias3;				//偏置电压1/3
		stcLcdCfg.LcdBiasSrc = LcdInResMidPower;		//偏压来源 外部电容
		stcLcdCfg.LcdClkSrc = LcdRCL;				//LCD内部
		stcLcdCfg.LcdScanClk = LcdClk128hz;	//扫描频率
		stcLcdCfg.LcdCpClk 	=	LcdClk4k;			//LCD 
		stcLcdCfg.LcdDuty 	=	LcdDuty4;			//1/4
		stcLcdCfg.LcdEn	= LcdEnable;				//LCD使能
		stcLcdCfg.LcdMode =	LcdMode0;				//模式0
		
		Lcd_SetSegCom(&stcLcdsegcom);
		Lcd_Init(&stcLcdCfg);
		Lcd_ClearDisp();
	
}

/******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/


