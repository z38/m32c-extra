#ifndef _M32C_EXTRA_IODEF_H
#define _M32C_EXTRA_IODEF_H

struct bit_def {
		char	b0:1;
		char	b1:1;
		char	b2:1;
		char	b3:1;
		char	b4:1;
		char	b5:1;
		char	b6:1;
		char	b7:1;
};

union byte_def {
	struct bit_def bit;
	char	byte;
};

union word_def {
	struct{
		char	b0:1;
		char	b1:1;
		char	b2:1;
		char	b3:1;
		char	b4:1;
		char	b5:1;
		char	b6:1;
		char	b7:1;
		char	b8:1;
		char	b9:1;
		char	b10:1;
		char	b11:1;
		char	b12:1;
		char	b13:1;
		char	b14:1;
		char	b15:1;
	} bit;
	struct{
		char	low;							/* low	8 bit */
		char	high;							/* high 8 bit */
	} byte;
	unsigned short word;
};

union dword_def {
	struct {
		char	b0:1;
		char	b1:1;
		char	b2:1;
		char	b3:1;
		char	b4:1;
		char	b5:1;
		char	b6:1;
		char	b7:1;
		char	b8:1;
		char	b9:1;
		char	b10:1;
		char	b11:1;
		char	b12:1;
		char	b13:1;
		char	b14:1;
		char	b15:1;
		char	b16:1;
		char	b17:1;
		char	b18:1;
		char	b19:1;
	} bit;
	struct {
		char	low;							/* low	8 bit */
		char	mid;							/* mid	8 bit */
		char	high;							/* high 8 bit */
		char	nc;								/* non use */
	} byte;
	unsigned long	dword;
}

#endif
