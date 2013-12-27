/*
 * (C) 2005 Renesas Technology Corporation and Renesas Solutions Corporation
 * (C) 2013 z38
 */

#ifndef _M32C_EXTRA_IOM16C62P_H
#ifndef _M32C_EXTRA_IOM16C62P_H

#include <m32c/iodef.h>

#pragma ADDRESS		PM0_ADDR	0x0004			/* Processor mode register 0 */
#pragma ADDRESS		PM1_ADDR	0x0005			/* Processor mode register 1 */
#pragma ADDRESS		CM0_ADDR	0x0006			/* System clock control register 0 */
#pragma ADDRESS		CM1_ADDR	0x0007			/* System clock control register 1 */
#pragma ADDRESS		CSR_ADDR	0x0008			/* Chip select control register */
#pragma ADDRESS		AIER_ADDR	0x0009			/* Address match interrupt enable register */
#pragma ADDRESS		PRCR_ADDR	0x000a			/* Protect register */
#pragma ADDRESS		DBR_ADDR	0x000b			/* Data bank register */
#pragma ADDRESS		CM2_ADDR	0x000c			/* Oscillation stop detection register */
#pragma ADDRESS		WDTS_ADDR	0x000e			/* Watchdog timer start register */
#pragma ADDRESS		WDC_ADDR	0x000f			/* Watchdog timer control register */
#pragma ADDRESS		RMAD0_ADDR	0x0010			/* Address match interrupt register 0 */
#pragma ADDRESS		RMAD1_ADDR	0x0014			/* Address match interrupt register 1 */
#pragma ADDRESS		VCR1_ADDR	0x0019			/* Power supply detection register 1 */
#pragma ADDRESS		VCR2_ADDR	0x001a			/* Power supply detection register 2 */
#pragma ADDRESS		CSE_ADDR	0x001b			/* Chip select expansion control register */
#pragma ADDRESS		PLC0_ADDR	0x001c			/* PLC control register 0 */
#pragma ADDRESS		PM2_ADDR	0x001e			/* Processor mode register 2 */
#pragma ADDRESS		D4INT_ADDR	0x001f			/* Power supply down detection register */
#pragma ADDRESS		SAR0_ADDR	0x0020			/* DMA0 source pointer */
#pragma ADDRESS		DAR0_ADDR	0x0024			/* DMA0 destination pointer */
#pragma ADDRESS		TCR0_ADDR	0x0028			/* DMA0 transfer counter */
#pragma ADDRESS		DM0CON_ADDR 0x002c			/* DMA0 control register */
#pragma ADDRESS		SAR1_ADDR	0x0030			/* DMA1 source pointer */
#pragma ADDRESS		DAR1_ADDR	0x0034			/* DMA1 destination pointer */
#pragma ADDRESS		TCR1_ADDR	0x0038			/* DMA1 transfer counter */
#pragma ADDRESS		DM1CON_ADDR 0x003c			/* DMA1 control register */
#pragma ADDRESS		INT3IC_ADDR 0x0044			/* INT3~ interrupt control register */
#pragma ADDRESS		TB5IC_ADDR	0x0045			/* Timer B5 interrupt control register */
#pragma ADDRESS		TB4IC_ADDR	0x0046			/* Timer B4 interrupt control register */
#pragma ADDRESS		TB3IC_ADDR	0x0047			/* Timer B3 interrupt control register */
#pragma ADDRESS		U1BCNIC_ADDR	0x0046		/* UART1 BUS collision detection interrupt control register */
#pragma ADDRESS		U0BCNIC_ADDR	0x0047		/* UART0 BUS collision detection interrupt control register */
#pragma ADDRESS		S4IC_ADDR	0x0048			/* SI/O4 interrupt control register */
#pragma ADDRESS		S3IC_ADDR	0x0049			/* SI/O3 interrupt control register */
#pragma ADDRESS		INT5IC_ADDR 0x0048			/* INT5~ interrupt control register */
#pragma ADDRESS		INT4IC_ADDR 0x0049			/* INT4~ interrupt control register */
#pragma ADDRESS		BCNIC_ADDR	0x004a			/* UART2 BUS collision detection interrupt control register */
#pragma ADDRESS		DM0IC_ADDR	0x004b			/* DMA0 interrupt control register */
#pragma ADDRESS		DM1IC_ADDR	0x004c			/* DMA1 interrupt control register */
#pragma ADDRESS		KUPIC_ADDR	0x004d			/* Key input interrupt control register */
#pragma ADDRESS		ADIC_ADDR	0x004e			/* A/D conversion interrupt control register */
#pragma ADDRESS		S2TIC_ADDR	0x004f			/* UART2 transmit interrupt control register */
#pragma ADDRESS		S2RIC_ADDR	0x0050			/* UART2 receive interrupt control register */
#pragma ADDRESS		S0TIC_ADDR	0x0051			/* UART0 transmit interrupt control register */
#pragma ADDRESS		S0RIC_ADDR	0x0052			/* UART0 receive interrupt control register */
#pragma ADDRESS		S1TIC_ADDR	0x0053			/* UART1 transmit interrupt control register */
#pragma ADDRESS		S1RIC_ADDR	0x0054			/* UART1 receive interrupt control register */
#pragma ADDRESS		TA0IC_ADDR	0x0055			/* Timer A0 interrupt control register */
#pragma ADDRESS		TA1IC_ADDR	0x0056			/* Timer A1 interrupt control register */
#pragma ADDRESS		TA2IC_ADDR	0x0057			/* Timer A2 interrupt control register */
#pragma ADDRESS		TA3IC_ADDR	0x0058			/* Timer A3 interrupt control register */
#pragma ADDRESS		TA4IC_ADDR	0x0059			/* Timer A4 interrupt control register */
#pragma ADDRESS		TB0IC_ADDR	0x005a			/* Timer B0 interrupt control register */
#pragma ADDRESS		TB1IC_ADDR	0x005b			/* Timer B1 interrupt control register */
#pragma ADDRESS		TB2IC_ADDR	0x005c			/* Timer B2 interrupt control register */
#pragma ADDRESS		INT0IC_ADDR 0x005d			/* INT0~ interrupt control register */
#pragma ADDRESS		INT1IC_ADDR 0x005e			/* INT1~ interrupt control register */
#pragma ADDRESS		INT2IC_ADDR 0x005f			/* INT2~ interrupt control register */
#pragma ADDRESS		FIDR_ADDR	0x01b4			/* Flash identification register */
#pragma ADDRESS		FMR1_ADDR	0x01b5			/* Flash memory control register 1 */
#pragma ADDRESS		FMR0_ADDR	0x01b7			/* Flash memory control register 0 */
#pragma ADDRESS		RMAD2_ADDR	0x01b8			/* Address match interrupt register 2 */
#pragma ADDRESS		AIER2_ADDR	0x01bb			/* Address match interrupt enable register 2 */
#pragma ADDRESS		RMAD3_ADDR	0x01bc			/* Address match interrupt register 3 */
#pragma ADDRESS		PCLKR_ADDR	0x025e			/* Peripheral clock select register */
#pragma ADDRESS		TBSR_ADDR	0x0340			/* Timer B3,4,5 count start flag */
#pragma ADDRESS		TA11_ADDR	0x0342			/* Timer A1-1 register */
#pragma ADDRESS		TA21_ADDR	0x0344			/* Timer A2-1 register */
#pragma ADDRESS		TA41_ADDR	0x0346			/* Timer A4-1 register */
#pragma ADDRESS		INVC0_ADDR	0x0348			/* Three-phase PWM control regester 0 */
#pragma ADDRESS		INVC1_ADDR	0x0349			/* Three-phase PWM control register 1 */
#pragma ADDRESS		IDB0_ADDR	0x034a			/* Three-phase output buffer register 0 */
#pragma ADDRESS		IDB1_ADDR	0x034b			/* Three-phase output buffer register 1 */
#pragma ADDRESS		DTT_ADDR	0x034c			/* Dead time timer */
#pragma ADDRESS		ICTB2_ADDR	0x034d			/* Timer B2 interrupt occurrences frequency set counter */
#pragma ADDRESS		TB3_ADDR	0x0350			/* Timer B3 register */
#pragma ADDRESS		TB4_ADDR	0x0352			/* Timer B4 register */
#pragma ADDRESS		TB5_ADDR	0x0354			/* Timer B5 register */
#pragma ADDRESS		TB3MR_ADDR	0x035b			/* Timer B3 mode register */
#pragma ADDRESS		TB4MR_ADDR	0x035c			/* Timer B4 mode register */
#pragma ADDRESS		TB5MR_ADDR	0x035d			/* Timer B5 mode register */
#pragma ADDRESS		IFSR2A_ADDR	0x035e			/* Interrupt request cause select register 2 */
#pragma ADDRESS		IFSR_ADDR	0x035f			/* Interrupt request cause select register */
#pragma ADDRESS		S3TRR_ADDR	0x0360			/* SI/O3 transmit/receive register */
#pragma ADDRESS		S3C_ADDR	0x0362			/* SI/O3 control register */
#pragma ADDRESS		S3BRG_ADDR	0x0363			/* SI/O3 bit rate generator */
#pragma ADDRESS		S4TRR_ADDR	0x0364			/* SI/O4 transmit/receive register */
#pragma ADDRESS		S4C_ADDR	0x0366			/* SI/O4 control register */
#pragma ADDRESS		S4BRG_ADDR	0x0367			/* SI/O4 bit rate generator */
#pragma ADDRESS		U0SMR4_ADDR	0x036c			/* UART0 special mode register 4 */
#pragma ADDRESS		U0SMR3_ADDR	0x036d			/* UART0 special mode register 3 */
#pragma ADDRESS		U0SMR2_ADDR	0x036e			/* UART0 special mode register 2 */
#pragma ADDRESS		U0SMR_ADDR	0x036f			/* UART0 special mode register */
#pragma ADDRESS		U1SMR4_ADDR	0x0370			/* UART1 special mode register 4 */
#pragma ADDRESS		U1SMR3_ADDR	0x0371			/* UART1 special mode register 3 */
#pragma ADDRESS		U1SMR2_ADDR	0x0372			/* UART1 special mode register 2 */
#pragma ADDRESS		U1SMR_ADDR	0x0373			/* UART1 special mode register */
#pragma ADDRESS		U2SMR4_ADDR	0x0374			/* UART2 special mode register 4 */
#pragma ADDRESS		U2SMR3_ADDR 0x0375			/* UART2 special mode register 3 */
#pragma ADDRESS		U2SMR2_ADDR 0x0376			/* UART2 special mode register 2 */
#pragma ADDRESS		U2SMR_ADDR	0x0377			/* UART2 special mode register */
#pragma ADDRESS		U2MR_ADDR	0x0378			/* UART2 transmit/receive mode register */
#pragma ADDRESS		U2BRG_ADDR	0x0379			/* UART2 bit rate generator */
#pragma ADDRESS		U2TB_ADDR	0x037a			/* UART2 transmit buffer register */
#pragma ADDRESS		U2C0_ADDR	0x037c			/* UART2 transmit/receive control register 0 */
#pragma ADDRESS		U2C1_ADDR	0x037d			/* UART2 transmit/receive control register 1 */
#pragma ADDRESS		U2RB_ADDR	0x037e			/* UART2 receive buffer register */
#pragma ADDRESS		TABSR_ADDR	0x0380			/* Count start flag */
#pragma ADDRESS		CPSRF_ADDR	0x0381			/* Clock prescaler reset flag */
#pragma ADDRESS		ONSF_ADDR	0x0382			/* One-shot start flag */
#pragma ADDRESS		TRGSR_ADDR	0x0383			/* Trigger select register */
#pragma ADDRESS		UDF_ADDR	0x0384			/* Up/down flag */
#pragma ADDRESS		TA0_ADDR	0x0386			/* Timer A0 register */
#pragma ADDRESS		TA1_ADDR	0x0388			/* Timer A1 register */
#pragma ADDRESS		TA2_ADDR	0x038a			/* Timer A2 register */
#pragma ADDRESS		TA3_ADDR	0x038c			/* Timer A3 register */
#pragma ADDRESS		TA4_ADDR	0x038e			/* Timer A4 register */
#pragma ADDRESS		TB0_ADDR	0x0390			/* Timer B0 register */
#pragma ADDRESS		TB1_ADDR	0x0392			/* Timer B1 register */
#pragma ADDRESS		TB2_ADDR	0x0394			/* Timer B2 register */
#pragma ADDRESS		TA0MR_ADDR	0x0396			/* Timer A0 mode register */
#pragma ADDRESS		TA1MR_ADDR	0x0397			/* Timer A1 mode register */
#pragma ADDRESS		TA2MR_ADDR	0x0398			/* Timer A2 mode register */
#pragma ADDRESS		TA3MR_ADDR	0x0399			/* Timer A3 mode register */
#pragma ADDRESS		TA4MR_ADDR	0x039a			/* Timer A4 mode register */
#pragma ADDRESS		TB0MR_ADDR	0x039b			/* Timer B0 mode register */
#pragma ADDRESS		TB1MR_ADDR	0x039c			/* Timer B1 mode register */
#pragma ADDRESS		TB2MR_ADDR	0x039d			/* Timer B2 mode register */
#pragma ADDRESS		TB2SC_ADDR	0x039e			/* Timer B2 special mode register */
#pragma ADDRESS		U0MR_ADDR	0x03a0			/* UART0 transmit/receive mode register */
#pragma ADDRESS		U0BRG_ADDR	0x03a1			/* UART0 bit rate generator */
#pragma ADDRESS		U0TB_ADDR	0x03a2			/* UART0 transmit buffer register */
#pragma ADDRESS		U0C0_ADDR	0x03a4			/* UART0 transmit/receive control register 0 */
#pragma ADDRESS		U0C1_ADDR	0x03a5			/* UART0 transmit/receive control register 1 */
#pragma ADDRESS		U0RB_ADDR	0x03a6			/* UART0 receive buffer register */
#pragma ADDRESS		U1MR_ADDR	0x03a8			/* UART1 transmit/receive mode register */
#pragma ADDRESS		U1BRG_ADDR	0x03a9			/* UART1 bit rate generator */
#pragma ADDRESS		U1TB_ADDR	0x03aa			/* UART1 transmit buffer register */
#pragma ADDRESS		U1C0_ADDR	0x03ac			/* UART1 transmit/receive control register 0 */
#pragma ADDRESS		U1C1_ADDR	0x03ad			/* UART1 transmit/receive control register 1 */
#pragma ADDRESS		U1RB_ADDR	0x03ae			/* UART1 receive buffer register */
#pragma ADDRESS		UCON_ADDR	0x03b0			/* UART transmit/receive control register 2 */
#pragma ADDRESS		DM0SL_ADDR	0x03b8			/* DMA0 cause select register */
#pragma ADDRESS		DM1SL_ADDR	0x03ba			/* DMA1 cause select register */
#pragma ADDRESS		CRCD_ADDR	0x03bc			/* CRC data register */
#pragma ADDRESS		CRCIN_ADDR	0x03be			/* CRC input register */
#pragma ADDRESS		AD0_ADDR	0x03c0			/* A/D register 0 */
#pragma ADDRESS		AD1_ADDR	0x03c2			/* A/D register 1 */
#pragma ADDRESS		AD2_ADDR	0x03c4			/* A/D register 2 */
#pragma ADDRESS		AD3_ADDR	0x03c6			/* A/D register 3 */
#pragma ADDRESS		AD4_ADDR	0x03c8			/* A/D register 4 */
#pragma ADDRESS		AD5_ADDR	0x03ca			/* A/D register 5 */
#pragma ADDRESS		AD6_ADDR	0x03cc			/* A/D register 6 */
#pragma ADDRESS		AD7_ADDR	0x03ce			/* A/D register 7 */
#pragma ADDRESS		ADCON2_ADDR 0x03d4			/* A/D control register 2 */
#pragma ADDRESS		ADCON0_ADDR 0x03d6			/* A/D control register 0 */
#pragma ADDRESS		ADCON1_ADDR 0x03d7			/* A/D control register 1 */
#pragma ADDRESS		DA0_ADDR	0x03d8			/* D/A register 0 */
#pragma ADDRESS		DA1_ADDR	0x03da			/* D/A register 1 */
#pragma ADDRESS		DACON_ADDR	0x03dc			/* D/A control register */
#pragma ADDRESS		PC14_ADDR	0x03de			/* Port P14 control register */
#pragma ADDRESS		PUR3_ADDR	0x03df			/* Pull-up control register 3 */
#pragma ADDRESS		P0_ADDR		0x03e0			/* Port P0 register */
#pragma ADDRESS		P1_ADDR		0x03e1			/* Port P1 register */
#pragma ADDRESS		PD0_ADDR	0x03e2			/* Port P0 direction register */
#pragma ADDRESS		PD1_ADDR	0x03e3			/* Port P1 direction register */
#pragma ADDRESS		P2_ADDR		0x03e4			/* Port P2 register */
#pragma ADDRESS		P3_ADDR		0x03e5			/* Port P3 register */
#pragma ADDRESS		PD2_ADDR	0x03e6			/* Port P2 direction register */
#pragma ADDRESS		PD3_ADDR	0x03e7			/* Port P3 direction register */
#pragma ADDRESS		P4_ADDR		0x03e8			/* Port P4 register */
#pragma ADDRESS		P5_ADDR		0x03e9			/* Port P5 register */
#pragma ADDRESS		PD4_ADDR	0x03ea			/* Port P4 direction register */
#pragma ADDRESS		PD5_ADDR	0x03eb			/* Port P5 direction register */
#pragma ADDRESS		P6_ADDR		0x03ec			/* Port P6 register */
#pragma ADDRESS		P7_ADDR		0x03ed			/* Port P7 register */
#pragma ADDRESS		PD6_ADDR	0x03ee			/* Port P6 direction register */
#pragma ADDRESS		PD7_ADDR	0x03ef			/* Port P7 direction register */
#pragma ADDRESS		P8_ADDR		0x03f0			/* Port P8 register */
#pragma ADDRESS		P9_ADDR		0x03f1			/* Port P9 register */
#pragma ADDRESS		PD8_ADDR	0x03f2			/* Port P8 direction register */
#pragma ADDRESS		PD9_ADDR	0x03f3			/* Port P9 direction register */
#pragma ADDRESS		P10_ADDR	0x03f4			/* Port P10 register */
#pragma ADDRESS		P11_ADDR	0x03f5			/* Port P11 register */
#pragma ADDRESS		PD10_ADDR	0x03f6			/* Port P10 direction register */
#pragma ADDRESS		PD11_ADDR	0x03f7			/* Port P11 direction register */
#pragma ADDRESS		P12_ADDR	0x03f8			/* Port P12 register */
#pragma ADDRESS		P13_ADDR	0x03f9			/* Port P13 register */
#pragma ADDRESS		PD12_ADDR	0x03fa			/* Port P12 direction register */
#pragma ADDRESS		PD13_ADDR	0x03fb			/* Port P13 direction register */
#pragma ADDRESS		PUR0_ADDR	0x03fc			/* Pull-up control register 0 */
#pragma ADDRESS		PUR1_ADDR	0x03fd			/* Pull-up control register 1 */
#pragma ADDRESS		PUR2_ADDR	0x03fe			/* Pull-up control register 2 */
#pragma ADDRESS		PCR_ADDR	0x03ff			/* Port control register */

/********************************************************
*	declare	 SFR char									*
********************************************************/
unsigned char	DA0_ADDR;						/* D/A register 0 */
#define		DA0		DA0_ADDR

unsigned char	DA1_ADDR;						/* D/A register 1 */
#define		DA1		DA1_ADDR

/*--------------------------------------------------------
	Up/down flag ; Use "MOV" instruction when writing to this register.
--------------------------------------------------------*/
unsigned char	UDF_ADDR;
#define		UDF		UDF_ADDR

/********************************************************
*	declare	 SFR short									*
********************************************************/
/*--------------------------------------------------------
	Timer registers : Read and write data in 16-bit units.
--------------------------------------------------------*/
unsigned short	 TA11_ADDR;						/* Timer A1-1 register */
#define		TA11	TA11_ADDR

unsigned short	 TA21_ADDR;						/* Timer A2-1 register */
#define		TA21	TA21_ADDR

unsigned short	 TA41_ADDR;						/* Timer A4-1 register */
#define		TA41	TA41_ADDR

unsigned short	 TB3_ADDR;						/* Timer B3 register */
#define		TB3		TB3_ADDR

unsigned short	 TB4_ADDR;						/* Timer B4 register */
#define		TB4		TB4_ADDR

unsigned short	 TB5_ADDR;						/* Timer B5 register */
#define		TB5		TB5_ADDR

unsigned short	 TA0_ADDR;						/* Timer A0 register */
#define		TA0		TA0_ADDR

unsigned short	 TA1_ADDR;						/* Timer A1 register */
#define		TA1		TA1_ADDR

unsigned short	 TA2_ADDR;						/* Timer A2 register */
#define		TA2		TA2_ADDR

unsigned short	 TA3_ADDR;						/* Timer A3 register */
#define		TA3		TA3_ADDR

unsigned short	 TA4_ADDR;						/* Timer A4 register */
#define		TA4		TA4_ADDR

unsigned short	 TB0_ADDR;						/* Timer B0 register */
#define		TB0		TB0_ADDR

unsigned short	 TB1_ADDR;						/* Timer B1 register */
#define		TB1		TB1_ADDR

unsigned short	 TB2_ADDR;						/* Timer B2 register */
#define		TB2		TB2_ADDR

/*------------------------------------------------------
	Processor mode register 0
------------------------------------------------------*/
union byte_def PM0_ADDR;
#define		PM0				PM0_ADDR.byte

#define		PM00			PM0_ADDR.bit.b0		/* Processor mode bit */
#define		PM01			PM0_ADDR.bit.b1		/* Processor mode bit */
#define		PM02			PM0_ADDR.bit.b2		/* R/W mode select bit */
#define		PM03			PM0_ADDR.bit.b3		/* Software reset bit */
#define		PM04			PM0_ADDR.bit.b4		/* Multiplexed bus space select bit */
#define		PM05			PM0_ADDR.bit.b5		/* Multiplexed bus space select bit */
#define		PM06			PM0_ADDR.bit.b6		/* Port P4_0 to P4_3 function select bit */
#define		PM07			PM0_ADDR.bit.b7		/* BCLK output disable bit */

/*------------------------------------------------------
	Processor mode register 1
------------------------------------------------------*/
union byte_def PM1_ADDR;
#define		PM1				PM1_ADDR.byte

#define		PM10			PM1_ADDR.bit.b0		/* CS2 area switching bit */
#define		PM11			PM1_ADDR.bit.b1		/* Port P3_4 to P3_7 function select bit */
#define		PM12			PM1_ADDR.bit.b2		/* Watch dog timer function select bit */
#define		PM13			PM1_ADDR.bit.b3		/* Intermal reserved area expansion bit */
#define		PM14			PM1_ADDR.bit.b4		/* Memory area expansion bit */
#define		PM15			PM1_ADDR.bit.b5		/* Memory area expansion bit */
#define		PM17			PM1_ADDR.bit.b7		/* Wait bit */

/*------------------------------------------------------
	System clock control register 0
------------------------------------------------------*/
union byte_def CM0_ADDR;
#define		CM0				CM0_ADDR.byte

#define		CM00			CM0_ADDR.bit.b0		/* Clock output function select bit */
#define		CM01			CM0_ADDR.bit.b1		/* Clock output function select bit */
#define		CM02			CM0_ADDR.bit.b2		/* WAIT peripheral function clock stop bit */
#define 	CM03			CM0_ADDR.bit.b3 	/* Xcin-Xcout drive capacity select bit */
#define		CM04			CM0_ADDR.bit.b4		/* Port Xc select bit */
#define		CM05			CM0_ADDR.bit.b5		/* Main clock stop bit */
#define		CM06			CM0_ADDR.bit.b6		/* Main clock division select bit 0 */
#define		CM07			CM0_ADDR.bit.b7		/* System clock select bit */

/*------------------------------------------------------
	System clock control register 1
------------------------------------------------------*/
union byte_def CM1_ADDR;
#define		CM1				CM1_ADDR.byte

#define		CM10			CM1_ADDR.bit.b0		/* All clock stop control bit */
#define		CM11			CM1_ADDR.bit.b1		/* System clock select bit */
#define		CM15			CM1_ADDR.bit.b5		/* Xin-Xout drive capacity select bit */
#define		CM16			CM1_ADDR.bit.b6		/* Main clock division select bit 1 */
#define		CM17			CM1_ADDR.bit.b7		/* Main clock division select bit 1 */

/*------------------------------------------------------
	Chip select control register
------------------------------------------------------*/
union byte_def CSR_ADDR;
#define		CSR				CSR_ADDR.byte

#define		CS0				CSR_ADDR.bit.b0		/* CS0~ output enable bit */
#define		CS1				CSR_ADDR.bit.b1		/* CS1~ output enable bit */
#define		CS2				CSR_ADDR.bit.b2		/* CS2~ output enable bit */
#define		CS3				CSR_ADDR.bit.b3		/* CS3~ output enable bit */
#define		CS0W			CSR_ADDR.bit.b4		/* CS0~ wait bit */
#define		CS1W			CSR_ADDR.bit.b5		/* CS1~ wait bit */
#define		CS2W			CSR_ADDR.bit.b6		/* CS2~ wait bit */
#define		CS3W			CSR_ADDR.bit.b7		/* CS3~ wait bit */

/*------------------------------------------------------
	Address match interrupt enable register
------------------------------------------------------*/
union byte_def AIER_ADDR;
#define		AIER			AIER_ADDR.byte

#define		AIER0			AIER_ADDR.bit.b0	/* Address match interrupt 0 enable bit */
#define		AIER1			AIER_ADDR.bit.b1	/* Address match interrupt 1 enable bit */

/*------------------------------------------------------
	Protect register
------------------------------------------------------*/
union byte_def PRCR_ADDR;
#define		PRCR			PRCR_ADDR.byte

#define		PRC0			PRCR_ADDR.bit.b0	/* Enable writting to system clock control registers 0 and 1 */
#define		PRC1			PRCR_ADDR.bit.b1	/* Enable writting to processor mode registers 0 and 1 */
#define		PRC2			PRCR_ADDR.bit.b2	/* Enable writting to port P9 direction register and SI/Oi control register(i=3,4) */
#define		PRC3			PRCR_ADDR.bit.b3	/* Enable writting to Power supply detection register 2 and Power supply down detection register */

/*------------------------------------------------------
	Data bank register
------------------------------------------------------*/
union byte_def DBR_ADDR;
#define		DBR				DBR_ADDR.byte

#define		OFS				DBR_ADDR.bit.b2		/* Offset bit */
#define		BSR0			DBR_ADDR.bit.b3		/* Bank select bit 0 */
#define		BSR1			DBR_ADDR.bit.b4		/* Bank select bit 1 */
#define		BSR2			DBR_ADDR.bit.b5		/* Bank select bit 2 */

/*------------------------------------------------------
	Oscillation stop detection register
------------------------------------------------------*/
union byte_def CM2_ADDR;
#define		CM2				CM2_ADDR.byte

#define		CM20			CM2_ADDR.bit.b0		/* Oscillation stop detection bit */
#define		CM21			CM2_ADDR.bit.b1		/* Main clock switch bit */
#define		CM22			CM2_ADDR.bit.b2		/* Oscillation stop detection status */
#define		CM23			CM2_ADDR.bit.b3		/* Clock monitor bit */
#define		CM27			CM2_ADDR.bit.b7		/* Operation select bit(when an oscillation stop is detected) */

/*------------------------------------------------------
	Watchdog timer start register
------------------------------------------------------*/
union byte_def WDTS_ADDR;
#define		WDTS			WDTS_ADDR.byte

/*------------------------------------------------------
	Watchdog timer control register
------------------------------------------------------*/
union byte_def WDC_ADDR;
#define		WDC				WDC_ADDR.byte

#define		WDC5			WDC_ADDR.bit.b5		/* Cold start / warm start discrimination flag */
#define		WDC7			WDC_ADDR.bit.b7		/* Prescaler select bit */

/*------------------------------------------------------
	Power supply detection register 1
------------------------------------------------------*/
union byte_def VCR1_ADDR;
#define		VCR1			VCR1_ADDR.byte

#define		VC13			VCR1_ADDR.bit.b3		/* Power supply down monitor flag */

/*------------------------------------------------------
	Power supply detection register 2
------------------------------------------------------*/
union byte_def VCR2_ADDR;
#define		VCR2			VCR2_ADDR.byte

#define		VC26			VCR2_ADDR.bit.b6		/* Reset area monitor bit */
#define		VC27			VCR2_ADDR.bit.b7		/* Power supply down monitor bit */

/*------------------------------------------------------
	Chip select expansion control register
------------------------------------------------------*/
union byte_def CSE_ADDR;
#define		CSE				CSE_ADDR.byte

#define		CSE00W			CSE_ADDR.bit.b0		/* CS0~ wait expansion bit */
#define		CSE01W			CSE_ADDR.bit.b1		/* CS0~ wait expansion bit */
#define		CSE10W			CSE_ADDR.bit.b2		/* CS1~ wait expansion bit */
#define		CSE11W			CSE_ADDR.bit.b3		/* CS1~ wait expansion bit */
#define		CSE20W			CSE_ADDR.bit.b4		/* CS2~ wait expansion bit */
#define		CSE21W			CSE_ADDR.bit.b5		/* CS2~ wait expansion bit */
#define		CSE30W			CSE_ADDR.bit.b6		/* CS3~ wait expansion bit */
#define		CSE31W			CSE_ADDR.bit.b7		/* CS3~ wait expansion bit */

/*------------------------------------------------------
	PLL control register 0
------------------------------------------------------*/
union byte_def PLC0_ADDR;
#define		PLC0			PLC0_ADDR.byte

#define		PLC00			PLC0_ADDR.bit.b0	/* Programmable counter select bit */
#define		PLC01			PLC0_ADDR.bit.b1	/* Programmable counter select bit */
#define		PLC02			PLC0_ADDR.bit.b2	/* Programmable counter select bit */
#define		PLC07			PLC0_ADDR.bit.b7	/* Operation enable bit */

/*------------------------------------------------------
	Processor mode register 2
------------------------------------------------------*/
union byte_def PM2_ADDR;
#define		PM2				PM2_ADDR.byte

#define		PM20			PM2_ADDR.bit.b0		/* Specifying wait when accessing SFR at PLL operation */
#define		PM21			PM2_ADDR.bit.b1		/* System clock protective bit */
#define		PM22			PM2_ADDR.bit.b2		/* WDT count source protective bit */

/*------------------------------------------------------
	 Power supply down detection register
------------------------------------------------------*/
union byte_def D4INT_ADDR;
#define		D4INT			D4INT_ADDR.byte

#define		D40				D4INT_ADDR.bit.b0		/* Power supply down detection interrupt enable bit */
#define		D41				D4INT_ADDR.bit.b1		/* STOP mode deactivation control bit */
#define		D42				D4INT_ADDR.bit.b2		/* Power supply change detection flag */
#define		D43				D4INT_ADDR.bit.b3		/* WDT overflow detect flag */
#define		DF0				D4INT_ADDR.bit.b4		/* Sampling clock select bit */
#define		DF1				D4INT_ADDR.bit.b5		/* Sampling clock select bit */

/*------------------------------------------------------
	 DMA0 control register
------------------------------------------------------*/
union byte_def DM0CON_ADDR;
#define		DM0CON			DM0CON_ADDR.byte

#define		DMBIT_DM0CON	DM0CON_ADDR.bit.b0	/* Transfer unit bit select bit */
#define		DMASL_DM0CON	DM0CON_ADDR.bit.b1	/* Repeat transfer mode select bit */
#define		DMAS_DM0CON		DM0CON_ADDR.bit.b2	/* DMA request bit */
#define		DMAE_DM0CON		DM0CON_ADDR.bit.b3	/* DMA enable bit */
#define		DSD_DM0CON		DM0CON_ADDR.bit.b4	/* Source address direction select bit */
#define		DAD_DM0CON		DM0CON_ADDR.bit.b5	/* Destination address direction select bit */

/*------------------------------------------------------
	 DMA1 control register
------------------------------------------------------*/
union byte_def	DM1CON_ADDR;
#define		DM1CON			DM1CON_ADDR.byte

#define		DMBIT_DM1CON	DM1CON_ADDR.bit.b0	/* Transfer unit bit select bit */
#define		DMASL_DM1CON	DM1CON_ADDR.bit.b1	/* Repeat transfer mode select bit */
#define		DMAS_DM1CON		DM1CON_ADDR.bit.b2	/* DMA request bit */
#define		DMAE_DM1CON		DM1CON_ADDR.bit.b3	/* DMA enable bit */
#define		DSD_DM1CON		DM1CON_ADDR.bit.b4	/* Source address direction select bit */
#define		DAD_DM1CON		DM1CON_ADDR.bit.b5	/* Destination address direction select bit */

/*------------------------------------------------------
	INT3 interrupt control register
------------------------------------------------------*/
union byte_def INT3IC_ADDR;
#define		INT3IC			INT3IC_ADDR.byte

#define		ILVL0_INT3IC	INT3IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT3IC	INT3IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT3IC	INT3IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT3IC		INT3IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT3IC		INT3IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	Timer B5 interrupt control register
------------------------------------------------------*/
union byte_def TB5IC_ADDR;
#define		TB5IC			TB5IC_ADDR.byte

#define		ILVL0_TB5IC		TB5IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB5IC		TB5IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB5IC		TB5IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB5IC		TB5IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer B4 interrupt control register
------------------------------------------------------*/
union byte_def TB4IC_ADDR;
#define		TB4IC			TB4IC_ADDR.byte

#define		ILVL0_TB4IC		TB4IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB4IC		TB4IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB4IC		TB4IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB4IC		TB4IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer B3 interrupt control register
------------------------------------------------------*/
union byte_def TB3IC_ADDR;
#define		TB3IC			TB3IC_ADDR.byte

#define		ILVL0_TB3IC		TB3IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB3IC		TB3IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB3IC		TB3IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB3IC		TB3IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART1 BUS collision detection interrupt control register
------------------------------------------------------*/
union byte_def U1BCNIC_ADDR;
#define		U1BCNIC			U1BCNIC_ADDR.byte

#define		ILVL0_U1BCNIC	U1BCNIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_U1BCNIC	U1BCNIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_U1BCNIC	U1BCNIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_U1BCNIC		U1BCNIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART0 BUS collision detection interrupt control register
------------------------------------------------------*/
union byte_def U0BCNIC_ADDR;
#define		U0BCNIC			U0BCNIC_ADDR.byte

#define		ILVL0_U0BCNIC	U0BCNIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_U0BCNIC	U0BCNIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_U0BCNIC	U0BCNIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_U0BCNIC		U0BCNIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	SI/O4 interrupt control register
------------------------------------------------------*/
union byte_def S4IC_ADDR;
#define		S4IC			S4IC_ADDR.byte

#define		ILVL0_S4IC		S4IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S4IC		S4IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S4IC		S4IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S4IC			S4IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_S4IC		S4IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	SI/O3 interrupt control register
------------------------------------------------------*/
union byte_def S3IC_ADDR;
#define		S3IC			S3IC_ADDR.byte

#define		ILVL0_S3IC		S3IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S3IC		S3IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S3IC		S3IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S3IC			S3IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_S3IC		S3IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	INT5 interrupt control register
------------------------------------------------------*/
union byte_def INT5IC_ADDR;
#define		INT5IC			INT5IC_ADDR.byte

#define		ILVL0_INT5IC	INT5IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT5IC	INT5IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT5IC	INT5IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT5IC		INT5IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT5IC		INT5IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	INT4 interrupt control register
------------------------------------------------------*/
union byte_def INT4IC_ADDR;
#define		INT4IC			INT4IC_ADDR.byte

#define		ILVL0_INT4IC	INT4IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT4IC	INT4IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT4IC	INT4IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT4IC		INT4IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT4IC		INT4IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	UART2 BUS collision detection interrupt control register
------------------------------------------------------*/
union byte_def BCNIC_ADDR;
#define		BCNIC			BCNIC_ADDR.byte

#define		ILVL0_BCNIC		BCNIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_BCNIC		BCNIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_BCNIC		BCNIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_BCNIC		BCNIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	DMA0 interrupt control register
------------------------------------------------------*/
union byte_def DM0IC_ADDR;
#define		DM0IC			DM0IC_ADDR.byte

#define		ILVL0_DM0IC		DM0IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_DM0IC		DM0IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_DM0IC		DM0IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_DM0IC		DM0IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	DMA1 interrupt control register
------------------------------------------------------*/
union byte_def DM1IC_ADDR;
#define		DM1IC			DM1IC_ADDR.byte

#define		ILVL0_DM1IC		DM1IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_DM1IC		DM1IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_DM1IC		DM1IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_DM1IC		DM1IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Key input interrupt control register
------------------------------------------------------*/
union byte_def KUPIC_ADDR;
#define		KUPIC			KUPIC_ADDR.byte

#define		ILVL0_KUPIC		KUPIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_KUPIC		KUPIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_KUPIC		KUPIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_KUPIC		KUPIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	A/D conversion interrupt control register
------------------------------------------------------*/
union byte_def ADIC_ADDR;
#define		ADIC			ADIC_ADDR.byte

#define		ILVL0_ADIC		ADIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_ADIC		ADIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_ADIC		ADIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_ADIC			ADIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART2 transmit interrupt control register
------------------------------------------------------*/
union byte_def S2TIC_ADDR;
#define		S2TIC			S2TIC_ADDR.byte

#define		ILVL0_S2TIC		S2TIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S2TIC		S2TIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S2TIC		S2TIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S2TIC		S2TIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART2 receive interrupt control register
------------------------------------------------------*/
union byte_def S2RIC_ADDR;
#define		S2RIC			S2RIC_ADDR.byte

#define		ILVL0_S2RIC		S2RIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S2RIC		S2RIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S2RIC		S2RIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S2RIC		S2RIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART0 transmit interrupt control register
------------------------------------------------------*/
union byte_def S0TIC_ADDR;
#define		S0TIC			S0TIC_ADDR.byte

#define		ILVL0_S0TIC		S0TIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S0TIC		S0TIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S0TIC		S0TIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S0TIC		S0TIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART0 receive interrupt control register
------------------------------------------------------*/
union byte_def S0RIC_ADDR;
#define		S0RIC			S0RIC_ADDR.byte

#define		ILVL0_S0RIC		S0RIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S0RIC		S0RIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S0RIC		S0RIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S0RIC		S0RIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART1 transmit interrupt control register
------------------------------------------------------*/
union byte_def S1TIC_ADDR;
#define		S1TIC			S1TIC_ADDR.byte

#define		ILVL0_S1TIC		S1TIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S1TIC		S1TIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S1TIC		S1TIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S1TIC		S1TIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	UART1 receive interrupt control register
------------------------------------------------------*/
union byte_def S1RIC_ADDR;
#define		S1RIC			S1RIC_ADDR.byte

#define		ILVL0_S1RIC		S1RIC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_S1RIC		S1RIC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_S1RIC		S1RIC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_S1RIC		S1RIC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer A0 receive interrupt control register
------------------------------------------------------*/
union byte_def TA0IC_ADDR;
#define		TA0IC			TA0IC_ADDR.byte

#define		ILVL0_TA0IC		TA0IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TA0IC		TA0IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TA0IC		TA0IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TA0IC		TA0IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer A1 receive interrupt control register
------------------------------------------------------*/
union byte_def TA1IC_ADDR;
#define		TA1IC			TA1IC_ADDR.byte

#define		ILVL0_TA1IC		TA1IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TA1IC		TA1IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TA1IC		TA1IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TA1IC		TA1IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer A2 receive interrupt control register
------------------------------------------------------*/
union byte_def TA2IC_ADDR;
#define		TA2IC			TA2IC_ADDR.byte

#define		ILVL0_TA2IC		TA2IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TA2IC		TA2IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TA2IC		TA2IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TA2IC		TA2IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer A3 receive interrupt control register
------------------------------------------------------*/
union byte_def TA3IC_ADDR;
#define		TA3IC			TA3IC_ADDR.byte

#define		ILVL0_TA3IC		TA3IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TA3IC		TA3IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TA3IC		TA3IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TA3IC		TA3IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer A4 receive interrupt control register
------------------------------------------------------*/
union byte_def TA4IC_ADDR;
#define		TA4IC			TA4IC_ADDR.byte

#define		ILVL0_TA4IC		TA4IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TA4IC		TA4IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TA4IC		TA4IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TA4IC		TA4IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer B0 receive interrupt control register
------------------------------------------------------*/
union byte_def TB0IC_ADDR;
#define		TB0IC			TB0IC_ADDR.byte

#define		ILVL0_TB0IC		TB0IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB0IC		TB0IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB0IC		TB0IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB0IC		TB0IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer B1 receive interrupt control register
------------------------------------------------------*/
union byte_def TB1IC_ADDR;
#define		TB1IC			TB1IC_ADDR.byte

#define		ILVL0_TB1IC		TB1IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB1IC		TB1IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB1IC		TB1IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB1IC		TB1IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	Timer B2 receive interrupt control register
------------------------------------------------------*/
union byte_def TB2IC_ADDR;
#define		TB2IC			TB2IC_ADDR.byte

#define		ILVL0_TB2IC		TB2IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_TB2IC		TB2IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_TB2IC		TB2IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_TB2IC		TB2IC_ADDR.bit.b3	/* Interrupt request bit */

/*------------------------------------------------------
	INT0 receive interrupt control register
------------------------------------------------------*/
union byte_def INT0IC_ADDR;
#define		INT0IC			INT0IC_ADDR.byte

#define		ILVL0_INT0IC	INT0IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT0IC	INT0IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT0IC	INT0IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT0IC		INT0IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT0IC		INT0IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	INT1 receive interrupt control register
------------------------------------------------------*/
union byte_def INT1IC_ADDR;
#define		INT1IC			INT1IC_ADDR.byte

#define		ILVL0_INT1IC	INT1IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT1IC	INT1IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT1IC	INT1IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT1IC		INT1IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT1IC		INT1IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	INT2 receive interrupt control register
------------------------------------------------------*/
union byte_def INT2IC_ADDR;
#define		INT2IC			INT2IC_ADDR.byte

#define		ILVL0_INT2IC	INT2IC_ADDR.bit.b0	/* Interrupt priority level select bit */
#define		ILVL1_INT2IC	INT2IC_ADDR.bit.b1	/* Interrupt priority level select bit */
#define		ILVL2_INT2IC	INT2IC_ADDR.bit.b2	/* Interrupt priority level select bit */
#define		IR_INT2IC		INT2IC_ADDR.bit.b3	/* Interrupt request bit */
#define		POL_INT2IC		INT2IC_ADDR.bit.b4	/* Polarity select bit */

/*------------------------------------------------------
	Flash identification register
------------------------------------------------------*/
union byte_def FIDR_ADDR;
#define		FIDR			FIDR_ADDR.byte

#define		FIDR0			FIDR_ADDR.bit.b0	/* Flash identification value */
#define		FIDR1			FIDR_ADDR.bit.b1	/* Flash identification value */

/*------------------------------------------------------
	Flash memory control register 1 
------------------------------------------------------*/
union byte_def FMR1_ADDR;
#define		FMR1			FMR1_ADDR.byte

#define		FMR11			FMR1_ADDR.bit.b1	/* EW1 mode select bit */
#define		FMR16			FMR1_ADDR.bit.b6	/* Lock bit status flag */

/*------------------------------------------------------
	 Flash memory control register 0
------------------------------------------------------*/
union byte_def FMR0_ADDR;
#define		FMR0			FMR0_ADDR.byte

#define		FMR00			FMR0_ADDR.bit.b0	/* RY/BY~ status flag */
#define		FMR01			FMR0_ADDR.bit.b1	/* EW0 mode select bit */
#define		FMR02			FMR0_ADDR.bit.b2	/* Lock bit disable bit */
#define		FMSTP			FMR0_ADDR.bit.b3	/* Flash memory stop bit */
#define		FMR05			FMR0_ADDR.bit.b5	/* User ROM area select bit */
#define		FMR06			FMR0_ADDR.bit.b6	/* Program status flag */
#define		FMR07			FMR0_ADDR.bit.b7	/* Erase status flag */

/*------------------------------------------------------
	Address match interrupt enable register 2
------------------------------------------------------*/
union byte_def AIER2_ADDR;
#define		AIER2			AIER2_ADDR.byte

#define		AIER20			AIER2_ADDR.bit.b0	/* Address match interrupt 2 enable bit */
#define		AIER21			AIER2_ADDR.bit.b1	/* Address match interrupt 3 enable bit */

/*------------------------------------------------------
	Peripheral clock select register
------------------------------------------------------*/
union byte_def PCLKR_ADDR;
#define		PCLKR			PCLKR_ADDR.byte

#define		PCLK0			PCLKR_ADDR.bit.b0	/* TimerA,B clock select bit */
#define		PCLK1			PCLKR_ADDR.bit.b1	/* SI/O clock select bit */

/*------------------------------------------------------
	Timer B3,4,5 Count start flag
------------------------------------------------------*/
union byte_def TBSR_ADDR;
#define		TBSR			TBSR_ADDR.byte

#define		TB3S			TBSR_ADDR.bit.b5	/* Timer B3 count start flag */
#define		TB4S			TBSR_ADDR.bit.b6	/* Timer B4 count start flag */
#define		TB5S			TBSR_ADDR.bit.b7	/* Timer B5 count start flag */

/*------------------------------------------------------
	Three-phase PWM control regester 0 
------------------------------------------------------*/
union byte_def INVC0_ADDR;
#define		INVC0			INVC0_ADDR.byte

#define		INV00			INVC0_ADDR.bit.b0	/* Effective interrupt output polarity select bit */
#define		INV01			INVC0_ADDR.bit.b1	/* Effective interrupt output specification bit */
#define		INV02			INVC0_ADDR.bit.b2	/* Mode select bit */
#define		INV03			INVC0_ADDR.bit.b3	/* Output control bit */
#define		INV04			INVC0_ADDR.bit.b4	/* Positive and negative phases concurrent L output disable function enable bit */
#define		INV05			INVC0_ADDR.bit.b5	/* Positive and negative phases concurrent L output detect flag */
#define		INV06			INVC0_ADDR.bit.b6	/* Modulation mode select bit */
#define		INV07			INVC0_ADDR.bit.b7	/* Software trigger bit */

/*------------------------------------------------------
	Three-phase PWM control regester 1
------------------------------------------------------*/
union byte_def INVC1_ADDR;
#define		INVC1			INVC1_ADDR.byte

#define		INV10			INVC1_ADDR.bit.b0	/* Timer Ai start trigger signal select bit */
#define		INV11			INVC1_ADDR.bit.b1	/* Timer A1-1,A2-1,A4-1 control bit */
#define		INV12			INVC1_ADDR.bit.b2	/* Dead time timer count source select bit */
#define		INV13			INVC1_ADDR.bit.b3	/* Carrier wave detect flag */
#define		INV14			INVC1_ADDR.bit.b4	/* Output porality control bit */
#define		INV15			INVC1_ADDR.bit.b5	/* Dead time invalid bit */
#define		INV16			INVC1_ADDR.bit.b6	/* Dead time timer trigger select bit */

/*------------------------------------------------------
	Three-phase output buffer register 0
------------------------------------------------------*/
union byte_def IDB0_ADDR;
#define		IDB0			IDB0_ADDR.byte

#define		DU0				IDB0_ADDR.bit.b0	/* U  phase output buffer 0 */
#define		DUB0			IDB0_ADDR.bit.b1	/* U~ phase output buffer 0 */
#define		DV0				IDB0_ADDR.bit.b2	/* V  phase output buffer 0 */
#define		DVB0			IDB0_ADDR.bit.b3	/* V~ phase output buffer 0 */
#define		DW0				IDB0_ADDR.bit.b4	/* W  phase output buffer 0 */
#define		DWB0			IDB0_ADDR.bit.b5	/* W~ phase output buffer 0 */

/*------------------------------------------------------
	Three-phase output buffer register 1
------------------------------------------------------*/
union byte_def IDB1_ADDR;
#define		IDB1			IDB1_ADDR.byte

#define		DU1				IDB1_ADDR.bit.b0	/* U  phase output buffer 1 */
#define		DUB1			IDB1_ADDR.bit.b1	/* U~ phase output buffer 1 */
#define		DV1				IDB1_ADDR.bit.b2	/* V  phase output buffer 1 */
#define		DVB1			IDB1_ADDR.bit.b3	/* V~ phase output buffer 1 */
#define		DW1				IDB1_ADDR.bit.b4	/* W  phase output buffer 1 */
#define		DWB1			IDB1_ADDR.bit.b5	/* W~ phase output buffer 1 */

/*------------------------------------------------------
	 Dead time timer ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def DTT_ADDR;
#define		DTT				DTT_ADDR.byte

/*------------------------------------------------------------------
	 Timer B2 interrupt occurrences frequency set counter ; Use "MOV" instruction when writing to this register.
-------------------------------------------------------------------*/
union byte_def ICTB2_ADDR;
#define		ICTB2			ICTB2_ADDR.byte

/*------------------------------------------------------
	 Timer B3 mode register
------------------------------------------------------*/
union byte_def TB3MR_ADDR;
#define		TB3MR			TB3MR_ADDR.byte

#define		TMOD0_TB3MR		TB3MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB3MR		TB3MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB3MR		TB3MR_ADDR.bit.b2
#define		MR1_TB3MR		TB3MR_ADDR.bit.b3
#define		MR2_TB3MR		TB3MR_ADDR.bit.b4
#define		MR3_TB3MR		TB3MR_ADDR.bit.b5
#define		TCK0_TB3MR		TB3MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB3MR		TB3MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer B4 mode register
------------------------------------------------------*/
union byte_def TB4MR_ADDR;
#define		TB4MR			TB4MR_ADDR.byte

#define		TMOD0_TB4MR		TB4MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB4MR		TB4MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB4MR		TB4MR_ADDR.bit.b2
#define		MR1_TB4MR		TB4MR_ADDR.bit.b3
#define		MR3_TB4MR		TB4MR_ADDR.bit.b5
#define		TCK0_TB4MR		TB4MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB4MR		TB4MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer B5 mode register
------------------------------------------------------*/
union byte_def TB5MR_ADDR;
#define		TB5MR			TB5MR_ADDR.byte

#define		TMOD0_TB5MR		TB5MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB5MR		TB5MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB5MR		TB5MR_ADDR.bit.b2
#define		MR1_TB5MR		TB5MR_ADDR.bit.b3
#define		MR3_TB5MR		TB5MR_ADDR.bit.b5
#define		TCK0_TB5MR		TB5MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB5MR		TB5MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Interrupt request cause select register 2
------------------------------------------------------*/
union byte_def IFSR2A_ADDR;
#define		IFSR2A			IFSR2A_ADDR.byte

#define		IFSR26			IFSR2A_ADDR.bit.b6	/* Interrupt request cause select bit */
#define		IFSR27			IFSR2A_ADDR.bit.b7	/* Interrupt request cause select bit */

/*------------------------------------------------------
	 Interrupt request cause select register
------------------------------------------------------*/
union byte_def IFSR_ADDR;
#define		IFSR			IFSR_ADDR.byte

#define		IFSR0			IFSR_ADDR.bit.b0	/* INT0~ interrupt polarity switching bit */
#define		IFSR1			IFSR_ADDR.bit.b1	/* INT1~ interrupt polarity switching bit */
#define		IFSR2			IFSR_ADDR.bit.b2	/* INT2~ interrupt polarity switching bit */
#define		IFSR3			IFSR_ADDR.bit.b3	/* INT3~ interrupt polarity switching bit */
#define		IFSR4			IFSR_ADDR.bit.b4	/* INT4~ interrupt polarity switching bit */
#define		IFSR5			IFSR_ADDR.bit.b5	/* INT5~ interrupt polarity switching bit */
#define		IFSR6			IFSR_ADDR.bit.b6	/* Interrupt request cause select bit */
#define		IFSR7			IFSR_ADDR.bit.b7	/* Interrupt request cause select bit */

/*------------------------------------------------------
	SI/O3 transmit/receive register
------------------------------------------------------*/
union byte_def S3TRR_ADDR;
#define		S3TRR			S3TRR_ADDR.byte

/*------------------------------------------------------
	SI/O3 control register 
------------------------------------------------------*/
union byte_def S3C_ADDR;
#define		S3C				S3C_ADDR.byte

#define		SM30			S3C_ADDR.bit.b0		/* Internal synchronous clock select bit */
#define		SM31			S3C_ADDR.bit.b1		/* Internal synchronous clock select bit */
#define		SM32			S3C_ADDR.bit.b2		/* Sout3 output disable bit */
#define		SM33			S3C_ADDR.bit.b3		/* SI/O3 port select bit */
#define		SM34			S3C_ADDR.bit.b4		/* CLK polarity select bit */
#define		SM35			S3C_ADDR.bit.b5		/* Transfer direction select bit */
#define		SM36			S3C_ADDR.bit.b6		/* Synchronous clock select bit */
#define		SM37			S3C_ADDR.bit.b7		/* Sout3 initial value set bit */

/*------------------------------------------------------
	SI/O3 bit rate generator ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def S3BRG_ADDR;
#define		S3BRG			S3BRG_ADDR.byte

/*------------------------------------------------------
	SI/O4 transmit/receive register
------------------------------------------------------*/
union byte_def S4TRR_ADDR;
#define		S4TRR			S4TRR_ADDR.byte

/*------------------------------------------------------
	SI/O4 control register 
------------------------------------------------------*/
union byte_def S4C_ADDR;
#define		S4C				S4C_ADDR.byte

#define		SM40			S4C_ADDR.bit.b0		/* Internal synchronous clock select bit */
#define		SM41			S4C_ADDR.bit.b1		/* Internal synchronous clock select bit */
#define		SM42			S4C_ADDR.bit.b2		/* Sout4 output disable bit */
#define		SM43			S4C_ADDR.bit.b3		/* SI/O4 port select bit */
#define		SM44			S4C_ADDR.bit.b4		/* CLK polarity select bit */
#define		SM45			S4C_ADDR.bit.b5		/* Transfer direction select bit */
#define		SM46			S4C_ADDR.bit.b6		/* Synchronous clock select bit */
#define		SM47			S4C_ADDR.bit.b7		/* Sout4 initial value set bit */

/*------------------------------------------------------
	SI/O4 bit rate generator ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def S4BRG_ADDR;
#define		S4BRG			S4BRG_ADDR.byte

/*------------------------------------------------------
	UART0 special mode register 4
------------------------------------------------------*/
union byte_def U0SMR4_ADDR;
#define		U0SMR4			U0SMR4_ADDR.byte

#define		STAREQ_U0SMR4	U0SMR4_ADDR.bit.b0	/* Start condition generate bit */
#define		RSTAREQ_U0SMR4	U0SMR4_ADDR.bit.b1	/* Restart condition generate bit */
#define		STPREQ_U0SMR4	U0SMR4_ADDR.bit.b2	/* Stop condition generate bit */
#define		STSPSEL_U0SMR4	U0SMR4_ADDR.bit.b3	/* SCL,SDA output select bit */
#define		ACKD_U0SMR4		U0SMR4_ADDR.bit.b4	/* ACK data bit */
#define		ACKC_U0SMR4		U0SMR4_ADDR.bit.b5	/* ACK data output enable bit */
#define		SCLHI_U0SMR4	U0SMR4_ADDR.bit.b6	/* SCL output stop enable bit */
#define		SWC9_U0SMR4		U0SMR4_ADDR.bit.b7	/* Final bit L hold enable bit */

/*------------------------------------------------------
	UART0 special mode register 3
------------------------------------------------------*/
union byte_def U0SMR3_ADDR;
#define		U0SMR3			U0SMR3_ADDR.byte

#define		CKPH_U0SMR3		U0SMR3_ADDR.bit.b1	/* Clock phase set bit */
#define		NODC_U0SMR3		U0SMR3_ADDR.bit.b3	/* Clock output set bit */
#define		DL0_U0SMR3		U0SMR3_ADDR.bit.b5	/* SDA0(TxD0) digital delay setup bit */
#define		DL1_U0SMR3		U0SMR3_ADDR.bit.b6	/* SDA0(TxD0) digital delay setup bit */
#define		DL2_U0SMR3		U0SMR3_ADDR.bit.b7	/* SDA0(TxD0) digital delay setup bit */

/*------------------------------------------------------
	UART0 special mode register 2
------------------------------------------------------*/
union byte_def U0SMR2_ADDR;
#define		U0SMR2			U0SMR2_ADDR.byte

#define		IICM2_U0SMR2	U0SMR2_ADDR.bit.b0	/* IIC mode selection bit 2 */
#define		CSC_U0SMR2		U0SMR2_ADDR.bit.b1	/* Clock-synchronous bit */
#define		SWC_U0SMR2		U0SMR2_ADDR.bit.b2	/* SCL wait output bit */
#define		ALS_U0SMR2		U0SMR2_ADDR.bit.b3	/* SDA output stop bit */
#define		STAC_U0SMR2		U0SMR2_ADDR.bit.b4	/* UART0 initialization bit */
#define		SWC2_U0SMR2		U0SMR2_ADDR.bit.b5	/* SCL wait output bit 2 */
#define		SDHI_U0SMR2		U0SMR2_ADDR.bit.b6	/* SDA output disable bit */

/*------------------------------------------------------
	UART0 special mode register
------------------------------------------------------*/
union byte_def U0SMR_ADDR;
#define		U0SMR			U0SMR_ADDR.byte

#define		IICM_U0SMR		U0SMR_ADDR.bit.b0	/* IIC mode selection bit */
#define		ABC_U0SMR		U0SMR_ADDR.bit.b1	/* Arbitration lost detecting flag control bit */
#define		BBS_U0SMR		U0SMR_ADDR.bit.b2	/* Bus busy flag */
#define		ABSCS_U0SMR		U0SMR_ADDR.bit.b4	/* Bus collision detect sampling clock select bit */
#define		ACSE_U0SMR		U0SMR_ADDR.bit.b5	/* Auto clear function select bit of transmit enable bit */
#define		SSS_U0SMR		U0SMR_ADDR.bit.b6	/* Transmit start condition select bit */

/*------------------------------------------------------
	UART1 special mode register 4
------------------------------------------------------*/
union byte_def U1SMR4_ADDR;
#define		U1SMR4			U1SMR4_ADDR.byte

#define		STAREQ_U1SMR4	U1SMR4_ADDR.bit.b0	/* Start condition generate bit */
#define		RSTAREQ_U1SMR4	U1SMR4_ADDR.bit.b1	/* Restart condition generate bit */
#define		STPREQ_U1SMR4	U1SMR4_ADDR.bit.b2	/* Stop condition generate bit */
#define		STSPSEL_U1SMR4	U1SMR4_ADDR.bit.b3	/* SCL,SDA output select bit */
#define		ACKD_U1SMR4		U1SMR4_ADDR.bit.b4	/* ACK data bit */
#define		ACKC_U1SMR4		U1SMR4_ADDR.bit.b5	/* ACK data output enable bit */
#define		SCLHI_U1SMR4	U1SMR4_ADDR.bit.b6	/* SCL output stop enable bit */
#define		SWC9_U1SMR4		U1SMR4_ADDR.bit.b7	/* Final bit L hold enable bit */

/*------------------------------------------------------
	UART1 special mode register 3
------------------------------------------------------*/
union byte_def U1SMR3_ADDR;
#define		U1SMR3			U1SMR3_ADDR.byte

#define		CKPH_U1SMR3		U1SMR3_ADDR.bit.b1	/* Clock phase set bit */
#define		NODC_U1SMR3		U1SMR3_ADDR.bit.b3	/* Clock output set bit */
#define		DL0_U1SMR3		U1SMR3_ADDR.bit.b5	/* SDA1(TxD1) digital delay setup bit */
#define		DL1_U1SMR3		U1SMR3_ADDR.bit.b6	/* SDA1(TxD1) digital delay setup bit */
#define		DL2_U1SMR3		U1SMR3_ADDR.bit.b7	/* SDA1(TxD1) digital delay setup bit */

/*------------------------------------------------------
	UART1 special mode register 2
------------------------------------------------------*/
union byte_def U1SMR2_ADDR;
#define		U1SMR2			U1SMR2_ADDR.byte

#define		IICM2_U1SMR2	U1SMR2_ADDR.bit.b0	/* IIC mode selection bit 2 */
#define		CSC_U1SMR2		U1SMR2_ADDR.bit.b1	/* Clock-synchronous bit */
#define		SWC_U1SMR2		U1SMR2_ADDR.bit.b2	/* SCL wait output bit */
#define		ALS_U1SMR2		U1SMR2_ADDR.bit.b3	/* SDA output stop bit */
#define		STAC_U1SMR2		U1SMR2_ADDR.bit.b4	/* UART0 initialization bit */
#define		SWC2_U1SMR2		U1SMR2_ADDR.bit.b5	/* SCL wait output bit 2 */
#define		SDHI_U1SMR2		U1SMR2_ADDR.bit.b6	/* SDA output disable bit */

/*------------------------------------------------------
	UART1 special mode register
------------------------------------------------------*/
union byte_def U1SMR_ADDR;
#define		U1SMR			U1SMR_ADDR.byte

#define		IICM_U1SMR		U1SMR_ADDR.bit.b0	/* IIC mode selection bit */
#define		ABC_U1SMR		U1SMR_ADDR.bit.b1	/* Arbitration lost detecting flag control bit */
#define		BBS_U1SMR		U1SMR_ADDR.bit.b2	/* Bus busy flag */
#define		ABSCS_U1SMR		U1SMR_ADDR.bit.b4	/* Bus collision detect sampling clock select bit */
#define		ACSE_U1SMR		U1SMR_ADDR.bit.b5	/* Auto clear function select bit of transmit enable bit */
#define		SSS_U1SMR		U1SMR_ADDR.bit.b6	/* Transmit start condition select bit */

/*------------------------------------------------------
	UART2 special mode register 4
------------------------------------------------------*/
union byte_def U2SMR4_ADDR;
#define		U2SMR4			U2SMR4_ADDR.byte

#define		STAREQ_U2SMR4	U2SMR4_ADDR.bit.b0	/* Start condition generate bit */
#define		RSTAREQ_U2SMR4	U2SMR4_ADDR.bit.b1	/* Restart condition generate bit */
#define		STPREQ_U2SMR4	U2SMR4_ADDR.bit.b2	/* Stop condition generate bit */
#define		STSPSEL_U2SMR4	U2SMR4_ADDR.bit.b3	/* SCL,SDA output select bit */
#define		ACKD_U2SMR4		U2SMR4_ADDR.bit.b4	/* ACK data bit */
#define		ACKC_U2SMR4		U2SMR4_ADDR.bit.b5	/* ACK data output enable bit */
#define		SCLHI_U2SMR4	U2SMR4_ADDR.bit.b6	/* SCL output stop enable bit */
#define		SWC9_U2SMR4		U2SMR4_ADDR.bit.b7	/* Final bit L hold enable bit */

/*------------------------------------------------------
	UART2 special mode register 3
------------------------------------------------------*/
union byte_def U2SMR3_ADDR;
#define		U2SMR3			U2SMR3_ADDR.byte

#define		CKPH_U2SMR3		U2SMR3_ADDR.bit.b1	/* Clock phase set bit */
#define		NODC_U2SMR3		U2SMR3_ADDR.bit.b3	/* Clock output set bit */
#define		DL0_U2SMR3		U2SMR3_ADDR.bit.b5	/* SDA2(TxD2) digital delay setup bit */
#define		DL1_U2SMR3		U2SMR3_ADDR.bit.b6	/* SDA2(TxD2) digital delay setup bit */
#define		DL2_U2SMR3		U2SMR3_ADDR.bit.b7	/* SDA2(TxD2) digital delay setup bit */

/*------------------------------------------------------
	UART2 special mode register 2
------------------------------------------------------*/
union byte_def U2SMR2_ADDR;
#define		U2SMR2			U2SMR2_ADDR.byte

#define		IICM2_U2SMR2	U2SMR2_ADDR.bit.b0	/* IIC mode selection bit 2 */
#define		CSC_U2SMR2		U2SMR2_ADDR.bit.b1	/* Clock-synchronous bit */
#define		SWC_U2SMR2		U2SMR2_ADDR.bit.b2	/* SCL wait output bit */
#define		ALS_U2SMR2		U2SMR2_ADDR.bit.b3	/* SDA output stop bit */
#define		STAC_U2SMR2		U2SMR2_ADDR.bit.b4	/* UART0 initialization bit */
#define		SWC2_U2SMR2		U2SMR2_ADDR.bit.b5	/* SCL wait output bit 2 */
#define		SDHI_U2SMR2		U2SMR2_ADDR.bit.b6	/* SDA output disable bit */

/*------------------------------------------------------
	UART2 special mode register
------------------------------------------------------*/
union byte_def U2SMR_ADDR;
#define		U2SMR			U2SMR_ADDR.byte

#define		IICM_U2SMR		U2SMR_ADDR.bit.b0	/* IIC mode selection bit */
#define		ABC_U2SMR		U2SMR_ADDR.bit.b1	/* Arbitration lost detecting flag control bit */
#define		BBS_U2SMR		U2SMR_ADDR.bit.b2	/* Bus busy flag */
#define		ABSCS_U2SMR		U2SMR_ADDR.bit.b4	/* Bus collision detect sampling clock select bit */
#define		ACSE_U2SMR		U2SMR_ADDR.bit.b5	/* Auto clear function select bit of transmit enable bit */
#define		SSS_U2SMR		U2SMR_ADDR.bit.b6	/* Transmit start condition select bit */

/*------------------------------------------------------
	UART2 transmit/receive mode register
------------------------------------------------------*/
union byte_def U2MR_ADDR;
#define		U2MR			U2MR_ADDR.byte

#define		SMD0_U2MR		U2MR_ADDR.bit.b0	/* Serial I/O mode select bit */
#define		SMD1_U2MR		U2MR_ADDR.bit.b1	/* Serial I/O mode select bit */
#define		SMD2_U2MR		U2MR_ADDR.bit.b2	/* Serial I/O mode select bit */
#define		CKDIR_U2MR		U2MR_ADDR.bit.b3	/* Internal/external clock select bit */
#define		STPS_U2MR		U2MR_ADDR.bit.b4	/* Stop bit length select bit */
#define		PRY_U2MR		U2MR_ADDR.bit.b5	/* Odd/even parity select bit */
#define		PRYE_U2MR		U2MR_ADDR.bit.b6	/* Parity enable bit */
#define		IOPOL_U2MR		U2MR_ADDR.bit.b7	/* TxD RxD I/O polarity reverse bit */

/*------------------------------------------------------
	UART2 bit rate generator ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def U2BRG_ADDR;
#define		U2BRG			U2BRG_ADDR.byte

/*------------------------------------------------------
	UART2 transmit/receive control register 0
------------------------------------------------------*/
union byte_def U2C0_ADDR;
#define		U2C0			U2C0_ADDR.byte

#define		CLK0_U2C0		U2C0_ADDR.bit.b0	/* BRG count source select bit */
#define		CLK1_U2C0		U2C0_ADDR.bit.b1	/* BRG count source select bit */
#define		CRS_U2C0		U2C0_ADDR.bit.b2	/* CTS~/RTS~ function select bit */
#define		TXEPT_U2C0		U2C0_ADDR.bit.b3	/* Transmit register empty flag */
#define		CRD_U2C0		U2C0_ADDR.bit.b4	/* CTS~/RTS~ disable bit */
#define		NCH_U2C0		U2C0_ADDR.bit.b5	/* Data output select bit */
#define		CKPOL_U2C0		U2C0_ADDR.bit.b6	/* CLK polarity select bit */
#define		UFORM_U2C0		U2C0_ADDR.bit.b7	/* Transfer format select bit */

/*------------------------------------------------------
	UART2 transmit/receive control register 1			
------------------------------------------------------*/
union byte_def U2C1_ADDR;
#define		U2C1			U2C1_ADDR.byte

#define		TE_U2C1			U2C1_ADDR.bit.b0	/* Transmit enable bit */
#define		TI_U2C1			U2C1_ADDR.bit.b1	/* Transmit buffer empty flag */
#define		RE_U2C1			U2C1_ADDR.bit.b2	/* Receive enable bit */
#define		RI_U2C1			U2C1_ADDR.bit.b3	/* Receive complete flag */
#define		U2IRS			U2C1_ADDR.bit.b4	/* UART2 transmit interrupt cause select bit */
#define		U2RRM			U2C1_ADDR.bit.b5	/* UART2 continuous receive mode enable bit */
#define		U2LCH			U2C1_ADDR.bit.b6	/* Data logic select bit */
#define		U2ERE			U2C1_ADDR.bit.b7	/* Error signal output enable bit */

/*------------------------------------------------------
	Count start flag
------------------------------------------------------*/
union byte_def TABSR_ADDR;
#define		TABSR			TABSR_ADDR.byte

#define		TA0S			TABSR_ADDR.bit.b0	/* Timer A0 count start flag */
#define		TA1S			TABSR_ADDR.bit.b1	/* Timer A1 count start flag */
#define		TA2S			TABSR_ADDR.bit.b2	/* Timer A2 count start flag */
#define		TA3S			TABSR_ADDR.bit.b3	/* Timer A3 count start flag */
#define		TA4S			TABSR_ADDR.bit.b4	/* Timer A4 count start flag */
#define		TB0S			TABSR_ADDR.bit.b5	/* Timer B0 count start flag */
#define		TB1S			TABSR_ADDR.bit.b6	/* Timer B1 count start flag */
#define		TB2S			TABSR_ADDR.bit.b7	/* Timer B2 count start flag */

/*------------------------------------------------------
	Clock prescaler reset flag
------------------------------------------------------*/
union byte_def CPSRF_ADDR;
#define		CPSRF			CPSRF_ADDR.byte

#define		CPSR			CPSRF_ADDR.bit.b7	/* Clock prescaler reset flag */

/*------------------------------------------------------
	One-shot start flag
------------------------------------------------------*/
union byte_def ONSF_ADDR;
#define		ONSF			ONSF_ADDR.byte

#define		TA0OS			ONSF_ADDR.bit.b0	/* Timer A0 one-shot start flag */
#define		TA1OS			ONSF_ADDR.bit.b1	/* Timer A1 one-shot start flag */
#define		TA2OS			ONSF_ADDR.bit.b2	/* Timer A2 one-shot start flag */
#define		TA3OS			ONSF_ADDR.bit.b3	/* Timer A3 one-shot start flag */
#define		TA4OS			ONSF_ADDR.bit.b4	/* Timer A4 one-shot start flag */
#define		TAZIE			ONSF_ADDR.bit.b5	/* Z phase input enable bit */
#define		TA0TGL			ONSF_ADDR.bit.b6	/* Timer A0 event/trigger select bit */
#define		TA0TGH			ONSF_ADDR.bit.b7	/* Timer A0 event/trigger select bit */

/*------------------------------------------------------
	Trigger select register
------------------------------------------------------*/
union byte_def TRGSR_ADDR;
#define		TRGSR			TRGSR_ADDR.byte

#define		TA1TGL			TRGSR_ADDR.bit.b0	/* Timer A1 event/trigger select bit */
#define		TA1TGH			TRGSR_ADDR.bit.b1	/* Timer A1 event/trigger select bit */
#define		TA2TGL			TRGSR_ADDR.bit.b2	/* Timer A2 event/trigger select bit */
#define		TA2TGH			TRGSR_ADDR.bit.b3	/* Timer A2 event/trigger select bit */
#define		TA3TGL			TRGSR_ADDR.bit.b4	/* Timer A3 event/trigger select bit */
#define		TA3TGH			TRGSR_ADDR.bit.b5	/* Timer A3 event/trigger select bit */
#define		TA4TGL			TRGSR_ADDR.bit.b6	/* Timer A4 event/trigger select bit */
#define		TA4TGH			TRGSR_ADDR.bit.b7	/* Timer A4 event/trigger select bit */

/*------------------------------------------------------
	 Timer A0 mode register
------------------------------------------------------*/
union byte_def TA0MR_ADDR;
#define		TA0MR			TA0MR_ADDR.byte

#define		TMOD0_TA0MR		TA0MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TA0MR		TA0MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TA0MR		TA0MR_ADDR.bit.b2
#define		MR1_TA0MR		TA0MR_ADDR.bit.b3
#define		MR2_TA0MR		TA0MR_ADDR.bit.b4
#define		MR3_TA0MR		TA0MR_ADDR.bit.b5
#define		TCK0_TA0MR		TA0MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TA0MR		TA0MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer A1 mode register
------------------------------------------------------*/
union byte_def TA1MR_ADDR;
#define		TA1MR			TA1MR_ADDR.byte

#define		TMOD0_TA1MR		TA1MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TA1MR		TA1MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TA1MR		TA1MR_ADDR.bit.b2
#define		MR1_TA1MR		TA1MR_ADDR.bit.b3
#define		MR2_TA1MR		TA1MR_ADDR.bit.b4
#define		MR3_TA1MR		TA1MR_ADDR.bit.b5
#define		TCK0_TA1MR		TA1MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TA1MR		TA1MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer A2 mode register
------------------------------------------------------*/
union byte_def TA2MR_ADDR;
#define		TA2MR			TA2MR_ADDR.byte

#define		TMOD0_TA2MR		TA2MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TA2MR		TA2MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TA2MR		TA2MR_ADDR.bit.b2
#define		MR1_TA2MR		TA2MR_ADDR.bit.b3
#define		MR2_TA2MR		TA2MR_ADDR.bit.b4
#define		MR3_TA2MR		TA2MR_ADDR.bit.b5
#define		TCK0_TA2MR		TA2MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TA2MR		TA2MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer A3 mode register
------------------------------------------------------*/
union byte_def TA3MR_ADDR;
#define		TA3MR			TA3MR_ADDR.byte

#define		TMOD0_TA3MR		TA3MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TA3MR		TA3MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TA3MR		TA3MR_ADDR.bit.b2
#define		MR1_TA3MR		TA3MR_ADDR.bit.b3
#define		MR2_TA3MR		TA3MR_ADDR.bit.b4
#define		MR3_TA3MR		TA3MR_ADDR.bit.b5
#define		TCK0_TA3MR		TA3MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TA3MR		TA3MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer A4 mode register
------------------------------------------------------*/
union byte_def TA4MR_ADDR;
#define		TA4MR			TA4MR_ADDR.byte

#define		TMOD0_TA4MR		TA4MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TA4MR		TA4MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TA4MR		TA4MR_ADDR.bit.b2
#define		MR1_TA4MR		TA4MR_ADDR.bit.b3
#define		MR2_TA4MR		TA4MR_ADDR.bit.b4
#define		MR3_TA4MR		TA4MR_ADDR.bit.b5
#define		TCK0_TA4MR		TA4MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TA4MR		TA4MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer B0 mode register
------------------------------------------------------*/
union byte_def TB0MR_ADDR;
#define		TB0MR			TB0MR_ADDR.byte

#define		TMOD0_TB0MR		TB0MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB0MR		TB0MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB0MR		TB0MR_ADDR.bit.b2
#define		MR1_TB0MR		TB0MR_ADDR.bit.b3
#define		MR2_TB0MR		TB0MR_ADDR.bit.b4
#define		MR3_TB0MR		TB0MR_ADDR.bit.b5
#define		TCK0_TB0MR		TB0MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB0MR		TB0MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer B1 mode register
------------------------------------------------------*/
union byte_def TB1MR_ADDR;
#define		TB1MR			TB1MR_ADDR.byte

#define		TMOD0_TB1MR		TB1MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB1MR		TB1MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB1MR		TB1MR_ADDR.bit.b2
#define		MR1_TB1MR		TB1MR_ADDR.bit.b3
#define		MR3_TB1MR		TB1MR_ADDR.bit.b5
#define		TCK0_TB1MR		TB1MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB1MR		TB1MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	 Timer B2 mode register
------------------------------------------------------*/
union byte_def TB2MR_ADDR;
#define		TB2MR			TB2MR_ADDR.byte

#define		TMOD0_TB2MR		TB2MR_ADDR.bit.b0	/* Operation mode select bit */
#define		TMOD1_TB2MR		TB2MR_ADDR.bit.b1	/* Operation mode select bit */
#define		MR0_TB2MR		TB2MR_ADDR.bit.b2
#define		MR1_TB2MR		TB2MR_ADDR.bit.b3
#define		MR3_TB2MR		TB2MR_ADDR.bit.b5
#define		TCK0_TB2MR		TB2MR_ADDR.bit.b6	/* Count source select bit */
#define		TCK1_TB2MR		TB2MR_ADDR.bit.b7	/* Count source select bit */

/*------------------------------------------------------
	Timer B2 special mode register
------------------------------------------------------*/
union byte_def TB2SC_ADDR;
#define		TB2SC			TB2SC_ADDR.byte

#define		PWCON			TB2SC_ADDR.bit.b0	/* Timer B2 reload timing switching bit */
#define		IVPCR1			TB2SC_ADDR.bit.b1	/* Three phase output port NMI control bit 1 */

/*------------------------------------------------------
	UART0 transmit/receive mode register
------------------------------------------------------*/
union byte_def U0MR_ADDR;
#define		U0MR			U0MR_ADDR.byte

#define		SMD0_U0MR		U0MR_ADDR.bit.b0	/* Serial I/O mode select bit */
#define		SMD1_U0MR		U0MR_ADDR.bit.b1	/* Serial I/O mode select bit */
#define		SMD2_U0MR		U0MR_ADDR.bit.b2	/* Serial I/O mode select bit */
#define		CKDIR_U0MR		U0MR_ADDR.bit.b3	/* Internal/external clock select bit */
#define		STPS_U0MR		U0MR_ADDR.bit.b4	/* Stop bit length select bit */
#define		PRY_U0MR		U0MR_ADDR.bit.b5	/* Odd/even parity select bit */
#define		PRYE_U0MR		U0MR_ADDR.bit.b6	/* Parity enable bit */
#define		IOPOL_U0MR		U0MR_ADDR.bit.b7	/* TxD,RxD I/O polarity reverse bit */

/*------------------------------------------------------
	UART0 bit rate generator ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def U0BRG_ADDR;
#define		U0BRG			U0BRG_ADDR.byte

/*------------------------------------------------------
	UART0 transmit/receive control register 0
------------------------------------------------------*/
union byte_def U0C0_ADDR;
#define		U0C0			U0C0_ADDR.byte

#define		CLK0_U0C0		U0C0_ADDR.bit.b0	/* BRG count source select bit */
#define		CLK1_U0C0		U0C0_ADDR.bit.b1	/* BRG count source select bit */
#define		CRS_U0C0		U0C0_ADDR.bit.b2	/* CTS~/RTS~ function select bit */
#define		TXEPT_U0C0		U0C0_ADDR.bit.b3	/* Transmit register empty flag */
#define		CRD_U0C0		U0C0_ADDR.bit.b4	/* CTS~/RTS~ disable bit */
#define		NCH_U0C0		U0C0_ADDR.bit.b5	/* Data output select bit */
#define		CKPOL_U0C0		U0C0_ADDR.bit.b6	/* CLK polarity select bit */
#define		UFORM_U0C0		U0C0_ADDR.bit.b7	/* Transfer format select bit */

/*------------------------------------------------------
	UART0 transmit/receive control register 1
------------------------------------------------------*/
union byte_def U0C1_ADDR;
#define		U0C1			U0C1_ADDR.byte

#define		TE_U0C1			U0C1_ADDR.bit.b0	/* Transmit enable bit */
#define		TI_U0C1			U0C1_ADDR.bit.b1	/* Transmit buffer empty flag */
#define		RE_U0C1			U0C1_ADDR.bit.b2	/* Receive enable bit */
#define		RI_U0C1			U0C1_ADDR.bit.b3	/* Receive complete flag */
#define		U0LCH			U0C1_ADDR.bit.b6	/* Data logic select bit */
#define		U0ERE			U0C1_ADDR.bit.b7	/* Error signal output enable bit */

/*------------------------------------------------------
	UART0 transmit/receive mode register
------------------------------------------------------*/
union byte_def U1MR_ADDR;
#define		U1MR			U1MR_ADDR.byte

#define		SMD0_U1MR		U1MR_ADDR.bit.b0	/* Serial I/O mode select bit */
#define		SMD1_U1MR		U1MR_ADDR.bit.b1	/* Serial I/O mode select bit */
#define		SMD2_U1MR		U1MR_ADDR.bit.b2	/* Serial I/O mode select bit */
#define		CKDIR_U1MR		U1MR_ADDR.bit.b3	/* Internal/external clock select bit */
#define		STPS_U1MR		U1MR_ADDR.bit.b4	/* Stop bit length select bit */
#define		PRY_U1MR		U1MR_ADDR.bit.b5	/* Odd/even parity select bit */
#define		PRYE_U1MR		U1MR_ADDR.bit.b6	/* Parity enable bit */
#define		IOPOL_U1MR		U1MR_ADDR.bit.b7	/* TxD,RxD I/O polarity reverse bit */

/*------------------------------------------------------
	UART1 bit rate generator ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union byte_def U1BRG_ADDR;
#define		U1BRG			U1BRG_ADDR.byte

/*------------------------------------------------------
	UART1 transmit/receive control register 0
------------------------------------------------------*/
union byte_def U1C0_ADDR;
#define		U1C0			U1C0_ADDR.byte

#define		CLK0_U1C0		U1C0_ADDR.bit.b0	/* BRG count source select bit */
#define		CLK1_U1C0		U1C0_ADDR.bit.b1	/* BRG count source select bit */
#define		CRS_U1C0		U1C0_ADDR.bit.b2	/* CTS~/RTS~ function select bit */
#define		TXEPT_U1C0		U1C0_ADDR.bit.b3	/* Transmit register empty flag */
#define		CRD_U1C0		U1C0_ADDR.bit.b4	/* CTS~/RTS~ disable bit */
#define		NCH_U1C0		U1C0_ADDR.bit.b5	/* Data output select bit */
#define		CKPOL_U1C0		U1C0_ADDR.bit.b6	/* CLK polarity select bit */
#define		UFORM_U1C0		U1C0_ADDR.bit.b7	/* Transfer format select bit */

/*------------------------------------------------------
	UART1 transmit/receive control register 1
------------------------------------------------------*/
union byte_def U1C1_ADDR;
#define		U1C1			U1C1_ADDR.byte

#define		TE_U1C1			U1C1_ADDR.bit.b0	/* Transmit enable bit */
#define		TI_U1C1			U1C1_ADDR.bit.b1	/* Transmit buffer empty flag */
#define		RE_U1C1			U1C1_ADDR.bit.b2	/* Receive enable bit */
#define		RI_U1C1			U1C1_ADDR.bit.b3	/* Receive complete flag */
#define		U1LCH			U1C1_ADDR.bit.b6	/* Data logic select bit */
#define		U1ERE			U1C1_ADDR.bit.b7	/* Error signal output enable bit */

/*------------------------------------------------------
	UART transmit/receive control register 2
------------------------------------------------------*/
union byte_def UCON_ADDR;
#define		UCON			UCON_ADDR.byte

#define		U0IRS			UCON_ADDR.bit.b0	/* UART0 transmit interrupt cause select bit */
#define		U1IRS			UCON_ADDR.bit.b1	/* UART1 transmit interrupt cause select bit */
#define		U0RRM			UCON_ADDR.bit.b2	/* UART0 continuous receive mode enable bit */
#define		U1RRM			UCON_ADDR.bit.b3	/* UART1 continuous receive mode enable bit */
#define		CLKMD0			UCON_ADDR.bit.b4	/* CLK/CLKS select bit 0 */
#define		CLKMD1			UCON_ADDR.bit.b5	/* CLK/CLKS select bit 1 */
#define		RCSP			UCON_ADDR.bit.b6	/* Separate CTS~/RTS~ bit */

/*------------------------------------------------------
	DMA0 request cause select register
------------------------------------------------------*/
union byte_def DM0SL_ADDR;
#define		DM0SL			DM0SL_ADDR.byte

#define		DSEL0_DM0SL		DM0SL_ADDR.bit.b0	/* DMA request cause select bit */
#define		DSEL1_DM0SL		DM0SL_ADDR.bit.b1	/* DMA request cause select bit */
#define		DSEL2_DM0SL		DM0SL_ADDR.bit.b2	/* DMA request cause select bit */
#define		DSEL3_DM0SL		DM0SL_ADDR.bit.b3	/* DMA request cause select bit */
#define		DMS_DM0SL		DM0SL_ADDR.bit.b6	/* DMA request cause expansion select bit */
#define		DSR_DM0SL		DM0SL_ADDR.bit.b7	/* Software DMA request bit */

/*------------------------------------------------------
	DMA1 request cause select register
------------------------------------------------------*/
union byte_def DM1SL_ADDR;
#define		DM1SL			DM1SL_ADDR.byte

#define		DSEL0_DM1SL		DM1SL_ADDR.bit.b0	/* DMA request cause select bit */
#define		DSEL1_DM1SL		DM1SL_ADDR.bit.b1	/* DMA request cause select bit */
#define		DSEL2_DM1SL 	DM1SL_ADDR.bit.b2	/* DMA request cause select bit */
#define		DSEL3_DM1SL 	DM1SL_ADDR.bit.b3	/* DMA request cause select bit */
#define		DMS_DM1SL		DM1SL_ADDR.bit.b6	/* DMA request cause expansion select bit */
#define		DSR_DM1SL		DM1SL_ADDR.bit.b7	/* Software DMA request bit */

/*------------------------------------------------------
	CRC input register
------------------------------------------------------*/
union byte_def CRCIN_ADDR;
#define		CRCIN			CRCIN_ADDR.byte

/*------------------------------------------------------
	A/D control register 2
------------------------------------------------------*/
union byte_def ADCON2_ADDR;
#define		ADCON2			ADCON2_ADDR.byte

#define		SMP				ADCON2_ADDR.bit.b0	/* A/D conversion method select bit */
#define		ADGSEL0			ADCON2_ADDR.bit.b1	/* A/D input group select bit */
#define		ADGSEL1			ADCON2_ADDR.bit.b2	/* A/D input group select bit */
#define		CKS2			ADCON2_ADDR.bit.b4	/* Frequency select bit 2 */

/*------------------------------------------------------
	A/D control register 0
------------------------------------------------------*/
union byte_def ADCON0_ADDR;
#define		ADCON0			ADCON0_ADDR.byte

#define		CH0				ADCON0_ADDR.bit.b0	/* Analog input pin select bit */
#define		CH1				ADCON0_ADDR.bit.b1	/* Analog input pin select bit */
#define		CH2				ADCON0_ADDR.bit.b2	/* Analog input pin select bit */
#define		MD0				ADCON0_ADDR.bit.b3	/* A/D operation mode select bit 0 */
#define		MD1				ADCON0_ADDR.bit.b4	/* A/D operation mode select bit 0 */
#define		TRG				ADCON0_ADDR.bit.b5	/* Trigger select bit */
#define		ADST			ADCON0_ADDR.bit.b6	/* A/D conversion start flag */
#define		CKS0			ADCON0_ADDR.bit.b7	/* Frequency select bit 0 */

/*------------------------------------------------------
	A/D control register 1
------------------------------------------------------*/
union byte_def ADCON1_ADDR;
#define		ADCON1			ADCON1_ADDR.byte

#define		SCAN0			ADCON1_ADDR.bit.b0	/* A/D sweep pin select bit */
#define		SCAN1			ADCON1_ADDR.bit.b1	/* A/D sweep pin select bit */
#define		MD2				ADCON1_ADDR.bit.b2	/* A/D operation mode select bit 1 */
#define		BITS			ADCON1_ADDR.bit.b3	/* 8/10-bit mode select bit */
#define		CKS1			ADCON1_ADDR.bit.b4	/* Frequency select bit 1 */
#define		VCUT			ADCON1_ADDR.bit.b5	/* Vref connect bit */
#define		OPA0			ADCON1_ADDR.bit.b6	/* External op-amp connection mode bit */
#define		OPA1			ADCON1_ADDR.bit.b7	/* External op-amp connection mode bit */

/*------------------------------------------------------
	D/A control register
------------------------------------------------------*/
union byte_def DACON_ADDR;
#define		DACON			DACON_ADDR.byte

#define		DA0E			DACON_ADDR.bit.b0	/* D/A0 output enable bit */
#define		DA1E			DACON_ADDR.bit.b1	/* D/A1 output enable bit */

/*------------------------------------------------------
	Port P14 control register (128-pin version)
------------------------------------------------------*/
union byte_def PC14_ADDR;
#define		PC14			PC14_ADDR.byte

#define		P140			PC14_ADDR.bit.b0	/* Port P14_0 register */
#define		P141			PC14_ADDR.bit.b1	/* Port P14_1 register */
#define		PD140			PC14_ADDR.bit.b4	/* Port P14_0 direction register */
#define		PD141			PC14_ADDR.bit.b5	/* Port P14_1 direction register */

/*------------------------------------------------------
	Pull-up control register 3 (128-pin version)
------------------------------------------------------*/
union byte_def PUR3_ADDR;
#define		PUR3			PUR3_ADDR.byte

#define		PU30			PUR3_ADDR.bit.b0	/* P11_0 to P11_3 pull-up */
#define		PU31			PUR3_ADDR.bit.b1	/* P11_4 to P11_7 pull-up */
#define		PU32			PUR3_ADDR.bit.b2	/* P12_0 to P12_3 pull-up */
#define		PU33			PUR3_ADDR.bit.b3	/* P12_4 to P12_7 pull-up */
#define		PU34			PUR3_ADDR.bit.b4	/* P13_0 to P13_3 pull-up */
#define		PU35			PUR3_ADDR.bit.b5	/* P13_4 to P13_7 pull-up */
#define		PU36			PUR3_ADDR.bit.b6	/* P14_0,P14_1 pull-up */
#define		PU37			PUR3_ADDR.bit.b7	/* P11 to P14 effective bit */

/*------------------------------------------------------
	Port P0 register
------------------------------------------------------*/
union byte_def P0_ADDR;
#define		P0				P0_ADDR.byte

#define		P0_0			P0_ADDR.bit.b0		/* Port P0_0 register */
#define		P0_1			P0_ADDR.bit.b1		/* Port P0_1 register */
#define		P0_2			P0_ADDR.bit.b2		/* Port P0_2 register */
#define		P0_3			P0_ADDR.bit.b3		/* Port P0_3 register */
#define		P0_4			P0_ADDR.bit.b4		/* Port P0_4 register */
#define		P0_5			P0_ADDR.bit.b5		/* Port P0_5 register */
#define		P0_6			P0_ADDR.bit.b6		/* Port P0_6 register */
#define		P0_7			P0_ADDR.bit.b7		/* Port P0_7 register */

/*------------------------------------------------------
	Port P1 register
------------------------------------------------------*/
union byte_def P1_ADDR;
#define		P1				P1_ADDR.byte

#define		P1_0			P1_ADDR.bit.b0		/* Port P1_0 register */
#define		P1_1			P1_ADDR.bit.b1		/* Port P1_1 register */
#define		P1_2			P1_ADDR.bit.b2		/* Port P1_2 register */
#define		P1_3			P1_ADDR.bit.b3		/* Port P1_3 register */
#define		P1_4			P1_ADDR.bit.b4		/* Port P1_4 register */
#define		P1_5			P1_ADDR.bit.b5		/* Port P1_5 register */
#define		P1_6			P1_ADDR.bit.b6		/* Port P1_6 register */
#define		P1_7			P1_ADDR.bit.b7		/* Port P1_7 register */

/*------------------------------------------------------
	Port P0 direction register
------------------------------------------------------*/
union byte_def PD0_ADDR;
#define		PD0				PD0_ADDR.byte

#define		PD0_0			PD0_ADDR.bit.b0		/* Port P0_0 direction register */
#define		PD0_1			PD0_ADDR.bit.b1		/* Port P0_1 direction register */
#define		PD0_2			PD0_ADDR.bit.b2		/* Port P0_2 direction register */
#define		PD0_3			PD0_ADDR.bit.b3		/* Port P0_3 direction register */
#define		PD0_4			PD0_ADDR.bit.b4		/* Port P0_4 direction register */
#define		PD0_5			PD0_ADDR.bit.b5		/* Port P0_5 direction register */
#define		PD0_6			PD0_ADDR.bit.b6		/* Port P0_6 direction register */
#define		PD0_7			PD0_ADDR.bit.b7		/* Port P0_7 direction register */

/*------------------------------------------------------
	Port P1 direction register
------------------------------------------------------*/
union byte_def PD1_ADDR;
#define		PD1				PD1_ADDR.byte

#define		PD1_0			PD1_ADDR.bit.b0		/* Port P1_0 direction register */
#define		PD1_1			PD1_ADDR.bit.b1		/* Port P1_1 direction register */
#define		PD1_2			PD1_ADDR.bit.b2		/* Port P1_2 direction register */
#define		PD1_3			PD1_ADDR.bit.b3		/* Port P1_3 direction register */
#define		PD1_4			PD1_ADDR.bit.b4		/* Port P1_4 direction register */
#define		PD1_5			PD1_ADDR.bit.b5		/* Port P1_5 direction register */
#define		PD1_6			PD1_ADDR.bit.b6		/* Port P1_6 direction register */
#define		PD1_7			PD1_ADDR.bit.b7		/* Port P1_7 direction register */

/*------------------------------------------------------
	Port P2 register
------------------------------------------------------*/
union byte_def P2_ADDR;
#define		P2				P2_ADDR.byte

#define		P2_0			P2_ADDR.bit.b0		/* Port P2_0 register */
#define		P2_1			P2_ADDR.bit.b1		/* Port P2_1 register */
#define		P2_2			P2_ADDR.bit.b2		/* Port P2_2 register */
#define		P2_3			P2_ADDR.bit.b3		/* Port P2_3 register */
#define		P2_4			P2_ADDR.bit.b4		/* Port P2_4 register */
#define		P2_5			P2_ADDR.bit.b5		/* Port P2_5 register */
#define		P2_6			P2_ADDR.bit.b6		/* Port P2_6 register */
#define		P2_7			P2_ADDR.bit.b7		/* Port P2_7 register */

/*------------------------------------------------------
	Port P3 register
------------------------------------------------------*/
union byte_def P3_ADDR;
#define		P3				P3_ADDR.byte

#define		P3_0			P3_ADDR.bit.b0		/* Port P3_0 register */
#define		P3_1			P3_ADDR.bit.b1		/* Port P3_1 register */
#define		P3_2			P3_ADDR.bit.b2		/* Port P3_2 register */
#define		P3_3			P3_ADDR.bit.b3		/* Port P3_3 register */
#define		P3_4			P3_ADDR.bit.b4		/* Port P3_4 register */
#define		P3_5			P3_ADDR.bit.b5		/* Port P3_5 register */
#define		P3_6			P3_ADDR.bit.b6		/* Port P3_6 register */
#define		P3_7			P3_ADDR.bit.b7		/* Port P3_7 register */

/*------------------------------------------------------
	Port P2 direction register
------------------------------------------------------*/
union byte_def PD2_ADDR;
#define		PD2				PD2_ADDR.byte

#define		PD2_0			PD2_ADDR.bit.b0		/* Port P2_0 direction register */
#define		PD2_1			PD2_ADDR.bit.b1		/* Port P2_1 direction register */
#define		PD2_2			PD2_ADDR.bit.b2		/* Port P2_2 direction register */
#define		PD2_3			PD2_ADDR.bit.b3		/* Port P2_3 direction register */
#define		PD2_4			PD2_ADDR.bit.b4		/* Port P2_4 direction register */
#define		PD2_5			PD2_ADDR.bit.b5		/* Port P2_5 direction register */
#define		PD2_6			PD2_ADDR.bit.b6		/* Port P2_6 direction register */
#define		PD2_7			PD2_ADDR.bit.b7		/* Port P2_7 direction register */

/*------------------------------------------------------
	Port P3 direction register
------------------------------------------------------*/
union byte_def PD3_ADDR;
#define		PD3				PD3_ADDR.byte

#define		PD3_0			PD3_ADDR.bit.b0		/* Port P3_0 direction register */
#define		PD3_1			PD3_ADDR.bit.b1		/* Port P3_1 direction register */
#define		PD3_2			PD3_ADDR.bit.b2		/* Port P3_2 direction register */
#define		PD3_3			PD3_ADDR.bit.b3		/* Port P3_3 direction register */
#define		PD3_4			PD3_ADDR.bit.b4		/* Port P3_4 direction register */
#define		PD3_5			PD3_ADDR.bit.b5		/* Port P3_5 direction register */
#define		PD3_6			PD3_ADDR.bit.b6		/* Port P3_6 direction register */
#define		PD3_7			PD3_ADDR.bit.b7		/* Port P3_7 direction register */

/*------------------------------------------------------
	Port P4 register
------------------------------------------------------*/
union byte_def P4_ADDR;
#define		P4				P4_ADDR.byte

#define		P4_0			P4_ADDR.bit.b0		/* Port P4_0 register */
#define		P4_1			P4_ADDR.bit.b1		/* Port P4_1 register */
#define		P4_2			P4_ADDR.bit.b2		/* Port P4_2 register */
#define		P4_3			P4_ADDR.bit.b3		/* Port P4_3 register */
#define		P4_4			P4_ADDR.bit.b4		/* Port P4_4 register */
#define		P4_5			P4_ADDR.bit.b5		/* Port P4_5 register */
#define		P4_6			P4_ADDR.bit.b6		/* Port P4_6 register */
#define		P4_7			P4_ADDR.bit.b7		/* Port P4_7 register */

/*------------------------------------------------------
	Port P5 register
------------------------------------------------------*/
union byte_def P5_ADDR;
#define		P5				P5_ADDR.byte

#define		P5_0			P5_ADDR.bit.b0		/* Port P5_0 register */
#define		P5_1			P5_ADDR.bit.b1		/* Port P5_1 register */
#define		P5_2			P5_ADDR.bit.b2		/* Port P5_2 register */
#define		P5_3			P5_ADDR.bit.b3		/* Port P5_3 register */
#define		P5_4			P5_ADDR.bit.b4		/* Port P5_4 register */
#define		P5_5			P5_ADDR.bit.b5		/* Port P5_5 register */
#define		P5_6			P5_ADDR.bit.b6		/* Port P5_6 register */
#define		P5_7			P5_ADDR.bit.b7		/* Port P5_7 register */

/*------------------------------------------------------
	Port P4 direction register
------------------------------------------------------*/
union byte_def PD4_ADDR;
#define		PD4				PD4_ADDR.byte

#define		PD4_0			PD4_ADDR.bit.b0		/* Port P4_0 direction register */
#define		PD4_1			PD4_ADDR.bit.b1		/* Port P4_1 direction register */
#define		PD4_2			PD4_ADDR.bit.b2		/* Port P4_2 direction register */
#define		PD4_3			PD4_ADDR.bit.b3		/* Port P4_3 direction register */
#define		PD4_4			PD4_ADDR.bit.b4		/* Port P4_4 direction register */
#define		PD4_5			PD4_ADDR.bit.b5		/* Port P4_5 direction register */
#define		PD4_6			PD4_ADDR.bit.b6		/* Port P4_6 direction register */
#define		PD4_7			PD4_ADDR.bit.b7		/* Port P4_7 direction register */

/*------------------------------------------------------
	Port P5 direction register
------------------------------------------------------*/
union byte_def PD5_ADDR;
#define		PD5				PD5_ADDR.byte

#define		PD5_0			PD5_ADDR.bit.b0		/* Port P5_0 direction register */
#define		PD5_1			PD5_ADDR.bit.b1		/* Port P5_1 direction register */
#define		PD5_2			PD5_ADDR.bit.b2		/* Port P5_2 direction register */
#define		PD5_3			PD5_ADDR.bit.b3		/* Port P5_3 direction register */
#define		PD5_4			PD5_ADDR.bit.b4		/* Port P5_4 direction register */
#define		PD5_5			PD5_ADDR.bit.b5		/* Port P5_5 direction register */
#define		PD5_6			PD5_ADDR.bit.b6		/* Port P5_6 direction register */
#define		PD5_7			PD5_ADDR.bit.b7		/* Port P5_7 direction register */

/*------------------------------------------------------
	Port P6 register
------------------------------------------------------*/
union byte_def P6_ADDR;
#define		P6				P6_ADDR.byte

#define		P6_0			P6_ADDR.bit.b0		/* Port P6_0 register */
#define		P6_1			P6_ADDR.bit.b1		/* Port P6_1 register */
#define		P6_2			P6_ADDR.bit.b2		/* Port P6_2 register */
#define		P6_3			P6_ADDR.bit.b3		/* Port P6_3 register */
#define		P6_4			P6_ADDR.bit.b4		/* Port P6_4 register */
#define		P6_5			P6_ADDR.bit.b5		/* Port P6_5 register */
#define		P6_6			P6_ADDR.bit.b6		/* Port P6_6 register */
#define		P6_7			P6_ADDR.bit.b7		/* Port P6_7 register */

/*------------------------------------------------------
	Port P7 register
------------------------------------------------------*/
union byte_def P7_ADDR;
#define		P7				P7_ADDR.byte

#define		P7_0			P7_ADDR.bit.b0		/* Port P7_0 register */
#define		P7_1			P7_ADDR.bit.b1		/* Port P7_1 register */
#define		P7_2			P7_ADDR.bit.b2		/* Port P7_2 register */
#define		P7_3			P7_ADDR.bit.b3		/* Port P7_3 register */
#define		P7_4			P7_ADDR.bit.b4		/* Port P7_4 register */
#define		P7_5			P7_ADDR.bit.b5		/* Port P7_5 register */
#define		P7_6			P7_ADDR.bit.b6		/* Port P7_6 register */
#define		P7_7			P7_ADDR.bit.b7		/* Port P7_7 register */

/*------------------------------------------------------
	Port P6 direction register
------------------------------------------------------*/
union byte_def PD6_ADDR;
#define		PD6				PD6_ADDR.byte

#define		PD6_0			PD6_ADDR.bit.b0		/* Port P6_0 direction register */
#define		PD6_1			PD6_ADDR.bit.b1		/* Port P6_1 direction register */
#define		PD6_2			PD6_ADDR.bit.b2		/* Port P6_2 direction register */
#define		PD6_3			PD6_ADDR.bit.b3		/* Port P6_3 direction register */
#define		PD6_4			PD6_ADDR.bit.b4		/* Port P6_4 direction register */
#define		PD6_5			PD6_ADDR.bit.b5		/* Port P6_5 direction register */
#define		PD6_6			PD6_ADDR.bit.b6		/* Port P6_6 direction register */
#define		PD6_7			PD6_ADDR.bit.b7		/* Port P6_7 direction register */

/*------------------------------------------------------
	Port P7 direction register
------------------------------------------------------*/
union byte_def PD7_ADDR;
#define		PD7				PD7_ADDR.byte

#define		PD7_0			PD7_ADDR.bit.b0		/* Port P7_0 direction register */
#define		PD7_1			PD7_ADDR.bit.b1		/* Port P7_1 direction register */
#define		PD7_2			PD7_ADDR.bit.b2		/* Port P7_2 direction register */
#define		PD7_3			PD7_ADDR.bit.b3		/* Port P7_3 direction register */
#define		PD7_4			PD7_ADDR.bit.b4		/* Port P7_4 direction register */
#define		PD7_5			PD7_ADDR.bit.b5		/* Port P7_5 direction register */
#define		PD7_6			PD7_ADDR.bit.b6		/* Port P7_6 direction register */
#define		PD7_7			PD7_ADDR.bit.b7		/* Port P7_7 direction register */

/*------------------------------------------------------
	Port P8 register
------------------------------------------------------*/
union byte_def P8_ADDR;
#define		P8				P8_ADDR.byte

#define		P8_0			P8_ADDR.bit.b0		/* Port P8_0 register */
#define		P8_1			P8_ADDR.bit.b1		/* Port P8_1 register */
#define		P8_2			P8_ADDR.bit.b2		/* Port P8_2 register */
#define		P8_3			P8_ADDR.bit.b3		/* Port P8_3 register */
#define		P8_4			P8_ADDR.bit.b4		/* Port P8_4 register */
#define		P8_5			P8_ADDR.bit.b5		/* Port P8_5 register */
#define		P8_6			P8_ADDR.bit.b6		/* Port P8_6 register */
#define		P8_7			P8_ADDR.bit.b7		/* Port P8_7 register */

/*------------------------------------------------------
	Port P9 register
------------------------------------------------------*/
union byte_def P9_ADDR;
#define		P9				P9_ADDR.byte

#define		P9_0			P9_ADDR.bit.b0		/* Port P9_0 register */
#define		P9_1			P9_ADDR.bit.b1		/* Port P9_1 register */
#define		P9_2			P9_ADDR.bit.b2		/* Port P9_2 register */
#define		P9_3			P9_ADDR.bit.b3		/* Port P9_3 register */
#define		P9_4			P9_ADDR.bit.b4		/* Port P9_4 register */
#define		P9_5			P9_ADDR.bit.b5		/* Port P9_5 register */
#define		P9_6			P9_ADDR.bit.b6		/* Port P9_6 register */
#define		P9_7			P9_ADDR.bit.b7		/* Port P9_7 register */

/*------------------------------------------------------
	Port P8 direction register
------------------------------------------------------*/
union byte_def PD8_ADDR;
#define		PD8				PD8_ADDR.byte

#define		PD8_0			PD8_ADDR.bit.b0		/* Port P8_0 direction register */
#define		PD8_1			PD8_ADDR.bit.b1		/* Port P8_1 direction register */
#define		PD8_2			PD8_ADDR.bit.b2		/* Port P8_2 direction register */
#define		PD8_3			PD8_ADDR.bit.b3		/* Port P8_3 direction register */
#define		PD8_4			PD8_ADDR.bit.b4		/* Port P8_4 direction register */
#define		PD8_6			PD8_ADDR.bit.b6		/* Port P8_6 direction register */
#define		PD8_7			PD8_ADDR.bit.b7		/* Port P8_7 direction register */

/*------------------------------------------------------
	Port P9 direction register
------------------------------------------------------*/
union byte_def PD9_ADDR;
#define		PD9				PD9_ADDR.byte

#define		PD9_0			PD9_ADDR.bit.b0		/* Port P9_0 direction register */
#define		PD9_1			PD9_ADDR.bit.b1		/* Port P9_1 direction register */
#define		PD9_2			PD9_ADDR.bit.b2		/* Port P9_2 direction register */
#define		PD9_3			PD9_ADDR.bit.b3		/* Port P9_3 direction register */
#define		PD9_4			PD9_ADDR.bit.b4		/* Port P9_4 direction register */
#define		PD9_5			PD9_ADDR.bit.b5		/* Port P9_5 direction register */
#define		PD9_6			PD9_ADDR.bit.b6		/* Port P9_6 direction register */
#define		PD9_7			PD9_ADDR.bit.b7		/* Port P9_7 direction register */

/*------------------------------------------------------
	Port P10 register
------------------------------------------------------*/
union byte_def P10_ADDR;
#define		P10				P10_ADDR.byte

#define		P10_0			P10_ADDR.bit.b0		/* Port P10_0 register */
#define		P10_1			P10_ADDR.bit.b1		/* Port P10_1 register */
#define		P10_2			P10_ADDR.bit.b2		/* Port P10_2 register */
#define		P10_3			P10_ADDR.bit.b3		/* Port P10_3 register */
#define		P10_4			P10_ADDR.bit.b4		/* Port P10_4 register */
#define		P10_5			P10_ADDR.bit.b5		/* Port P10_5 register */
#define		P10_6			P10_ADDR.bit.b6		/* Port P10_6 register */
#define		P10_7			P10_ADDR.bit.b7		/* Port P10_7 register */

/*------------------------------------------------------
	Port P11 register
------------------------------------------------------*/
union byte_def P11_ADDR;
#define		P11				P11_ADDR.byte

#define		P11_0			P11_ADDR.bit.b0		/* Port P11_0 register */
#define		P11_1			P11_ADDR.bit.b1		/* Port P11_1 register */
#define		P11_2			P11_ADDR.bit.b2		/* Port P11_2 register */
#define		P11_3			P11_ADDR.bit.b3		/* Port P11_3 register */
#define		P11_4			P11_ADDR.bit.b4		/* Port P11_4 register */
#define		P11_5			P11_ADDR.bit.b5		/* Port P11_5 register */
#define		P11_6			P11_ADDR.bit.b6		/* Port P11_6 register */
#define		P11_7			P11_ADDR.bit.b7		/* Port P11_7 register */

/*------------------------------------------------------
	Port P10 direction register
------------------------------------------------------*/
union byte_def PD10_ADDR;
#define		PD10			PD10_ADDR.byte

#define		PD10_0			PD10_ADDR.bit.b0	/* Port P10_0 direction register */
#define		PD10_1			PD10_ADDR.bit.b1	/* Port P10_1 direction register */
#define		PD10_2			PD10_ADDR.bit.b2	/* Port P10_2 direction register */
#define		PD10_3			PD10_ADDR.bit.b3	/* Port P10_3 direction register */
#define		PD10_4			PD10_ADDR.bit.b4	/* Port P10_4 direction register */
#define		PD10_5			PD10_ADDR.bit.b5	/* Port P10_5 direction register */
#define		PD10_6			PD10_ADDR.bit.b6	/* Port P10_6 direction register */
#define		PD10_7			PD10_ADDR.bit.b7	/* Port P10_7 direction register */

/*------------------------------------------------------
	Port P11 direction register
------------------------------------------------------*/
union byte_def PD11_ADDR;
#define		PD11			PD11_ADDR.byte

#define		PD11_0			PD11_ADDR.bit.b0	/* Port P11_0 direction register */
#define		PD11_1			PD11_ADDR.bit.b1	/* Port P11_1 direction register */
#define		PD11_2			PD11_ADDR.bit.b2	/* Port P11_2 direction register */
#define		PD11_3			PD11_ADDR.bit.b3	/* Port P11_3 direction register */
#define		PD11_4			PD11_ADDR.bit.b4	/* Port P11_4 direction register */
#define		PD11_5			PD11_ADDR.bit.b5	/* Port P11_5 direction register */
#define		PD11_6			PD11_ADDR.bit.b6	/* Port P11_6 direction register */
#define		PD11_7			PD11_ADDR.bit.b7	/* Port P11_7 direction register */

/*------------------------------------------------------
	Port P12 register
------------------------------------------------------*/
union byte_def P12_ADDR;
#define		P12				P12_ADDR.byte

#define		P12_0			P12_ADDR.bit.b0		/* Port P12_0 register */
#define		P12_1			P12_ADDR.bit.b1		/* Port P12_1 register */
#define		P12_2			P12_ADDR.bit.b2		/* Port P12_2 register */
#define		P12_3			P12_ADDR.bit.b3		/* Port P12_3 register */
#define		P12_4			P12_ADDR.bit.b4		/* Port P12_4 register */
#define		P12_5			P12_ADDR.bit.b5		/* Port P12_5 register */
#define		P12_6			P12_ADDR.bit.b6		/* Port P12_6 register */
#define		P12_7			P12_ADDR.bit.b7		/* Port P12_7 register */

/*------------------------------------------------------
	Port P13 register
------------------------------------------------------*/
union byte_def P13_ADDR;
#define		P13				P13_ADDR.byte

#define		P13_0			P13_ADDR.bit.b0		/* Port P13_0 register */
#define		P13_1			P13_ADDR.bit.b1		/* Port P13_1 register */
#define		P13_2			P13_ADDR.bit.b2		/* Port P13_2 register */
#define		P13_3			P13_ADDR.bit.b3		/* Port P13_3 register */
#define		P13_4			P13_ADDR.bit.b4		/* Port P13_4 register */
#define		P13_5			P13_ADDR.bit.b5		/* Port P13_5 register */
#define		P13_6			P13_ADDR.bit.b6		/* Port P13_6 register */
#define		P13_7			P13_ADDR.bit.b7		/* Port P13_7 register */

/*------------------------------------------------------
	Port P12 direction register
------------------------------------------------------*/
union byte_def PD12_ADDR;
#define		PD12			PD12_ADDR.byte

#define		PD12_0			PD12_ADDR.bit.b0	/* Port P12_0 direction register */
#define		PD12_1			PD12_ADDR.bit.b1	/* Port P12_1 direction register */
#define		PD12_2			PD12_ADDR.bit.b2	/* Port P12_2 direction register */
#define		PD12_3			PD12_ADDR.bit.b3	/* Port P12_3 direction register */
#define		PD12_4			PD12_ADDR.bit.b4	/* Port P12_4 direction register */
#define		PD12_5			PD12_ADDR.bit.b5	/* Port P12_5 direction register */
#define		PD12_6			PD12_ADDR.bit.b6	/* Port P12_6 direction register */
#define		PD12_7			PD12_ADDR.bit.b7	/* Port P12_7 direction register */

/*------------------------------------------------------
	Port P13 direction register
------------------------------------------------------*/
union byte_def PD13_ADDR;
#define		PD13			PD13_ADDR.byte

#define		PD13_0			PD13_ADDR.bit.b0	/* Port P13_0 direction register */
#define		PD13_1			PD13_ADDR.bit.b1	/* Port P13_1 direction register */
#define		PD13_2			PD13_ADDR.bit.b2	/* Port P13_2 direction register */
#define		PD13_3			PD13_ADDR.bit.b3	/* Port P13_3 direction register */
#define		PD13_4			PD13_ADDR.bit.b4	/* Port P13_4 direction register */
#define		PD13_5			PD13_ADDR.bit.b5	/* Port P13_5 direction register */
#define		PD13_6			PD13_ADDR.bit.b6	/* Port P13_6 direction register */
#define		PD13_7			PD13_ADDR.bit.b7	/* Port P13_7 direction register */

/*------------------------------------------------------
	Pull-up control register 0
------------------------------------------------------*/
union byte_def PUR0_ADDR;
#define		PUR0			PUR0_ADDR.byte

#define		PU00			PUR0_ADDR.bit.b0	/* P0_0 to P0_3 pull-up */
#define		PU01			PUR0_ADDR.bit.b1	/* P0_4 to P0_7 pull-up */
#define		PU02			PUR0_ADDR.bit.b2	/* P1_0 to P1_3 pull-up */
#define		PU03			PUR0_ADDR.bit.b3	/* P1_4 to P1_7 pull-up */
#define		PU04			PUR0_ADDR.bit.b4	/* P2_0 to P2_3 pull-up */
#define		PU05			PUR0_ADDR.bit.b5	/* P2_4 to P2_7 pull-up */
#define		PU06			PUR0_ADDR.bit.b6	/* P3_0 to P3_3 pull-up */
#define		PU07			PUR0_ADDR.bit.b7	/* P3_4 to P3_7 pull-up */

/*------------------------------------------------------
	Pull-up control register 1
------------------------------------------------------*/
union byte_def PUR1_ADDR;
#define		PUR1			PUR1_ADDR.byte

#define		PU10			PUR1_ADDR.bit.b0	/* P4_0 to P4_3 pull-up */
#define		PU11			PUR1_ADDR.bit.b1	/* P4_4 to P4_7 pull-up */
#define		PU12			PUR1_ADDR.bit.b2	/* P5_0 to P5_3 pull-up */
#define		PU13			PUR1_ADDR.bit.b3	/* P5_4 to P5_7 pull-up */
#define		PU14			PUR1_ADDR.bit.b4	/* P6_0 to P6_3 pull-up */
#define		PU15			PUR1_ADDR.bit.b5	/* P6_4 to P6_7 pull-up */
#define		PU16			PUR1_ADDR.bit.b6	/* P7_0 to P7_3 pull-up (Except P7_0,P7_1 ; P7_0,P7_1->N-channel open drain ports) */
#define		PU17			PUR1_ADDR.bit.b7	/* P7_4 to P7_7 pull-up */

/*------------------------------------------------------
	Pull-up control register 2
------------------------------------------------------*/
union byte_def PUR2_ADDR;
#define		PUR2			PUR2_ADDR.byte

#define		PU20			PUR2_ADDR.bit.b0	/* P8_0 to P8_3 pull-up */
#define		PU21			PUR2_ADDR.bit.b1	/* P8_4 to P8_7 pull-up (Except P8_5) */
#define		PU22			PUR2_ADDR.bit.b2	/* P9_0 to P9_3 pull-up */
#define		PU23			PUR2_ADDR.bit.b3	/* P9_4 to P9_7 pull-up */
#define		PU24			PUR2_ADDR.bit.b4	/* P10_0 to P10_3 pull-up */
#define		PU25			PUR2_ADDR.bit.b5	/* P10_4 to P10_7 pull-up */

/*------------------------------------------------------
	Port control register
------------------------------------------------------*/
union byte_def PCR_ADDR;
#define		PCR				PCR_ADDR.byte

#define		PCR0			PCR_ADDR.bit.b0		/* Port P1 control register */

/*------------------------------------------------------
	 DMA0 transfer counter 16 bit
------------------------------------------------------*/
union word_def TCR0_ADDR;
#define		TCR0		TCR0_ADDR.word
#define		TCR0L		TCR0_ADDR.byte.low		/* DMA0 transfer counter low  8 bit */
#define		TCR0H		TCR0_ADDR.byte.high		/* DMA0 transfer counter high 8 bit */

/*------------------------------------------------------
	 DMA1 transfer counter 16 bit
------------------------------------------------------*/
union word_def TCR1_ADDR;
#define		TCR1		TCR1_ADDR.word
#define		TCR1L		TCR1_ADDR.byte.low		/* DMA1 transfer counter low  8 bit */
#define		TCR1H		TCR1_ADDR.byte.high		/* DMA1 transfer counter high 8 bit */

/*------------------------------------------------------
	UART0 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union word_def U0TB_ADDR;
#define		U0TB		U0TB_ADDR.word
#define		U0TBL		U0TB_ADDR.byte.low		/* UART0 Transmit buffer register low  8 bit */
#define		U0TBH		U0TB_ADDR.byte.high		/* UART0 Transmit buffer register high 8 bit */

/*------------------------------------------------------
	UART Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union word_def U1TB_ADDR;
#define		U1TB		U1TB_ADDR.word
#define		U1TBL		U1TB_ADDR.byte.low		/* UART1 Transmit buffer register low  8 bit */
#define		U1TBH		U1TB_ADDR.byte.high		/* UART1 Transmit buffer register high 8 bit */

/*------------------------------------------------------
	UART2 Transmit buffer register 16 bit ; Use "MOV" instruction when writing to this register.
------------------------------------------------------*/
union word_def U2TB_ADDR;
#define		U2TB		U2TB_ADDR.word
#define		U2TBL		U2TB_ADDR.byte.low		/* UART2 Transmit buffer register low  8 bit */
#define		U2TBH		U2TB_ADDR.byte.high		/* UART2 Transmit buffer register high 8 bit */

/*------------------------------------------------------
	UART0 receive buffer register
------------------------------------------------------*/
union word_def U0RB_ADDR;
#define		U0RB		U0RB_ADDR.word
#define		U0RBL		U0RB_ADDR.byte.low		/* UART0 receive buffer register low  8 bit */
#define		U0RBH		U0RB_ADDR.byte.high		/* UART0 receive buffer register high 8 bit */

#define		ABT_U0RB	U0RB_ADDR.bit.b11		/* Arbitration lost detecting flag */
#define		OER_U0RB	U0RB_ADDR.bit.b12		/* Overrun error flag */
#define		FER_U0RB	U0RB_ADDR.bit.b13		/* Framing error flag*/
#define		PER_U0RB	U0RB_ADDR.bit.b14		/* Parity error flag */
#define		SUM_U0RB	U0RB_ADDR.bit.b15		/* Error sum flag */

/*------------------------------------------------------
	UART1 receive buffer register
------------------------------------------------------*/
union word_def U1RB_ADDR;
#define		U1RB		U1RB_ADDR.word
#define		U1RBL		U1RB_ADDR.byte.low		/* UART1 receive buffer register low  8 bit */
#define		U1RBH		U1RB_ADDR.byte.high		/* UART1 receive buffer register high 8 bit */

#define		ABT_U1RB	U1RB_ADDR.bit.b11		/* Arbitration lost detecting flag */
#define		OER_U1RB	U1RB_ADDR.bit.b12		/* Overrun error flag */
#define		FER_U1RB	U1RB_ADDR.bit.b13		/* Framing error flag*/
#define		PER_U1RB	U1RB_ADDR.bit.b14		/* Parity error flag */
#define		SUM_U1RB	U1RB_ADDR.bit.b15		/* Error sum flag */

/*------------------------------------------------------
	UART2 receive buffer register
------------------------------------------------------*/
union word_def U2RB_ADDR;
#define		U2RB		U2RB_ADDR.word
#define		U2RBL		U2RB_ADDR.byte.low		/* UART2 receive buffer register low  8 bit */
#define		U2RBH		U2RB_ADDR.byte.high		/* UART2 receive buffer register high 8 bit */

#define		ABT_U2RB	U2RB_ADDR.bit.b11		/* Arbitration lost detecting flag */
#define		OER_U2RB	U2RB_ADDR.bit.b12		/* Overrun error flag */
#define		FER_U2RB	U2RB_ADDR.bit.b13		/* Framing error flag*/
#define		PER_U2RB	U2RB_ADDR.bit.b14		/* Parity error flag */
#define		SUM_U2RB	U2RB_ADDR.bit.b15		/* Error sum flag */

/*------------------------------------------------------
	 CRC data register 16 bit
------------------------------------------------------*/
union word_def CRCD_ADDR;
#define		CRCD		CRCD_ADDR.word
#define		CRCDL		CRCD_ADDR.byte.low		/* CRC data register low  8 bit */
#define		CRCDH		CRCD_ADDR.byte.high		/* CRC data register high 8 bit */

/*------------------------------------------------------
	 A/D register 0 16 bit
------------------------------------------------------*/
union word_def AD0_ADDR;
#define		AD0			AD0_ADDR.word
#define		AD0L		AD0_ADDR.byte.low		/* A/D register 0 low  8 bit */
#define		AD0H		AD0_ADDR.byte.high		/* A/D register 0 high 8 bit */

/*------------------------------------------------------
	 A/D register 1 16 bit
------------------------------------------------------*/
union word_def AD1_ADDR;
#define		AD1			AD1_ADDR.word
#define		AD1L		AD1_ADDR.byte.low		/* A/D register 1 low  8 bit */
#define		AD1H		AD1_ADDR.byte.high		/* A/D register 1 high 8 bit */

/*------------------------------------------------------
	 A/D register 2 16 bit
------------------------------------------------------*/
union word_def AD2_ADDR;
#define		AD2			AD2_ADDR.word
#define		AD2L		AD2_ADDR.byte.low		/* A/D register 2 low  8 bit */
#define		AD2H		AD2_ADDR.byte.high		/* A/D register 2 high 8 bit */

/*------------------------------------------------------
	 A/D register 3 16 bit
------------------------------------------------------*/
union word_def AD3_ADDR;
#define		AD3			AD3_ADDR.word
#define		AD3L		AD3_ADDR.byte.low		/* A/D register 3 low  8 bit */
#define		AD3H		AD3_ADDR.byte.high		/* A/D register 3 high 8 bit */

/*------------------------------------------------------
	 A/D register 4 16 bit
------------------------------------------------------*/
union word_def AD4_ADDR;
#define		AD4			AD4_ADDR.word
#define		AD4L		AD4_ADDR.byte.low		/* A/D register 4 low  8 bit */
#define		AD4H		AD4_ADDR.byte.high		/* A/D register 4 high 8 bit */

/*------------------------------------------------------
	 A/D register 5 16 bit
------------------------------------------------------*/
union word_def AD5_ADDR;
#define		AD5			AD5_ADDR.word
#define		AD5L		AD5_ADDR.byte.low		/* A/D register 5 low  8 bit */
#define		AD5H		AD5_ADDR.byte.high		/* A/D register 5 high 8 bit */

/*------------------------------------------------------
	 A/D register 6 16 bit
------------------------------------------------------*/
union word_def AD6_ADDR;
#define		AD6			AD6_ADDR.word
#define		AD6L		AD6_ADDR.byte.low		/* A/D register 6 low  8 bit */
#define		AD6H		AD6_ADDR.byte.high		/* A/D register 6 high 8 bit */

/*------------------------------------------------------
	 A/D register 7 16 bit
------------------------------------------------------*/
union word_def AD7_ADDR;
#define		AD7			AD7_ADDR.word
#define		AD7L		AD7_ADDR.byte.low		/* A/D register 7 low  8 bit */
#define		AD7H		AD7_ADDR.byte.high		/* A/D register 7 high 8 bit */

/*------------------------------------------------------
	 Address match interrupt register 0 32 bit
------------------------------------------------------*/
union dword_def RMAD0_ADDR;
#define		RMAD0		RMAD0_ADDR.dword
#define		RMAD0L		RMAD0_ADDR.byte.low		/* Address match interrupt register 0 low  8 bit */
#define		RMAD0M		RMAD0_ADDR.byte.mid		/* Address match interrupt register 0 mid  8 bit */
#define		RMAD0H		RMAD0_ADDR.byte.high	/* Address match interrupt register 0 high 8 bit */

/*------------------------------------------------------
	 Address match interrupt register 1 32 bit
------------------------------------------------------*/
union dword_def RMAD1_ADDR;
#define		RMAD1		RMAD1_ADDR.dword
#define		RMAD1L		RMAD1_ADDR.byte.low		/* Address match interrupt register 1 low  8 bit */
#define		RMAD1M		RMAD1_ADDR.byte.mid		/* Address match interrupt register 1 mid  8 bit */
#define		RMAD1H		RMAD1_ADDR.byte.high	/* Address match interrupt register 1 high 8 bit */

/*------------------------------------------------------
	 Address match interrupt register 2 32 bit
------------------------------------------------------*/
union dword_def RMAD2_ADDR;
#define		RMAD2		RMAD2_ADDR.dword
#define		RMAD2L		RMAD2_ADDR.byte.low		/* Address match interrupt register 2 low  8 bit */
#define		RMAD2M		RMAD2_ADDR.byte.mid		/* Address match interrupt register 2 mid  8 bit */
#define		RMAD2H		RMAD2_ADDR.byte.high	/* Address match interrupt register 2 high 8 bit */

/*------------------------------------------------------
	 Address match interrupt register 3 32 bit
------------------------------------------------------*/
union dword_def RMAD3_ADDR;
#define		RMAD3		RMAD3_ADDR.dword
#define		RMAD3L		RMAD3_ADDR.byte.low		/* Address match interrupt register 3 low  8 bit */
#define		RMAD3M		RMAD3_ADDR.byte.mid		/* Address match interrupt register 3 mid  8 bit */
#define		RMAD3H		RMAD3_ADDR.byte.high	/* Address match interrupt register 3 high 8 bit */

/*------------------------------------------------------
	 DMA0 source pointer 32 bit
------------------------------------------------------*/
union dword_def SAR0_ADDR;
#define		SAR0		SAR0_ADDR.dword
#define		SAR0L		SAR0_ADDR.byte.low		/* DMA0 source pointer low	8 bit */
#define		SAR0M		SAR0_ADDR.byte.mid		/* DMA0 source pointer mid	8 bit */
#define		SAR0H		SAR0_ADDR.byte.high		/* DMA0 source pointer high 8 bit */

/*------------------------------------------------------
	 DMA1 source pointer 32 bit
------------------------------------------------------*/
union dword_def SAR1_ADDR;
#define		SAR1		SAR1_ADDR.dword
#define		SAR1L		SAR1_ADDR.byte.low		/* DMA1 source pointer low	8 bit */
#define		SAR1M		SAR1_ADDR.byte.mid		/* DMA1 source pointer mid	8 bit */
#define		SAR1H		SAR1_ADDR.byte.high		/* DMA1 source pointer high 8 bit */

/*------------------------------------------------------
	 DMA0 destination pointer 32 bit
------------------------------------------------------*/
union dword_def DAR0_ADDR;
#define		DAR0		DAR0_ADDR.dword
#define		DAR0L		DAR0_ADDR.byte.low		/* DMA0 destination pointer low	 8 bit */
#define		DAR0M		DAR0_ADDR.byte.mid		/* DMA0 destination pointer mid	 8 bit */
#define		DAR0H		DAR0_ADDR.byte.high		/* DMA0 destination pointer high 8 bit */

/*------------------------------------------------------
	 DMA1 destination pointer 32 bit
------------------------------------------------------*/
union dword_def DAR1_ADDR;
#define		DAR1		DAR1_ADDR.dword
#define		DAR1L		DAR1_ADDR.byte.low		/* DMA1 destination pointer low	 8 bit */
#define		DAR1M		DAR1_ADDR.byte.mid		/* DMA1 destination pointer mid	 8 bit */
#define		DAR1H		DAR1_ADDR.byte.high		/* DMA1 destination pointer high 8 bit */

/*------------------------------------------------------
	 Software interrupt vectors
------------------------------------------------------*/

#define     INT3_vect            _VECTOR(4)
#define     TIMER_B5_vect        _VECTOR(5)
#define     TIMER_B4_vect        _VECTOR(6)
#define     TIMER_B3_vect        _VECTOR(7)
#define     INT5_vect            _VECTOR(8)
#define     INT4_vect            _VECTOR(9)
#define     UART2_COLLISION_vect _VECTOR(10)
#define     DMA0_vect            _VECTOR(11)
#define     DMA1_vect            _VECTOR(12)
#define     KEYINPUT_vect        _VECTOR(13)
#define     AD_vect              _VECTOR(14)
#define     UART2_TRANSMIT_vect  _VECTOR(15)
#define     UART2_RECEIVE_vect   _VECTOR(16)
#define     UART0_TRANSMIT_vect  _VECTOR(17)
#define     UART0_RECEIVE_vect   _VECTOR(18)
#define     UART1_TRANSMIT_vect  _VECTOR(19)
#define     UART1_RECEIVE_vect   _VECTOR(20)
#define     TIMER_A0_vect        _VECTOR(21)
#define     TIMER_A1_vect        _VECTOR(22)
#define     TIMER_A2_vect        _VECTOR(23)
#define     TIMER_A3_vect        _VECTOR(24)
#define     TIMER_A4_vect        _VECTOR(25)
#define     TIMER_B0_vect        _VECTOR(26)
#define     TIMER_B1_vect        _VECTOR(27)
#define     TIMER_B2_vect        _VECTOR(28)
#define     INT0_vect            _VECTOR(29)
#define     INT1_vect            _VECTOR(30)
#define     INT2_vect            _VECTOR(31)

#endif
