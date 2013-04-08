#include "stdio.h"
#include "unicodeToGB2312.h"

char Zn[]="³����ѧ";

u16 UnicodeTemp[10];


void main(void)
{ 
	u16 *pZn;
	u16 unicode_temp;
	pZn=(u16 *)Zn;

	GB2312ToUnicode_Str(UnicodeTemp,"³����ѧ");

	unicode_temp=GB2312ToUnicode(*pZn);	//֣��GB2312����0xD6A3  unicode��0x90D1
	printf("Unicode:%02X\t\t",unicode_temp);

	unicode_temp=UnicodeToGB2312(unicode_temp);
	printf("GB2312:%02X\n",unicode_temp);

}