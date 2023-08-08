#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,kart[16],say=0,toplam=0;
	char c;
	printf("Kart numarasini giriniz : ");
	while(1)
	{
		fflush(stdout);
		scanf(" %c",&c);
		if(c >= '0' && c <='9')
		{
			kart[say]=c-'0';
			say++;
		}
		else{
			printf("Hatali karakter");
		}
		if(say==16);
		break;
	}
	for(i=0;i<16;i+=2)
	{
		kart[i]=kart[i]*2;
		if(kart[i]>9)
		{
			kart[i]=kart[i]%10+kart[i]/10;
		}
	}
	for(i=0;i<16;i++)
	{
		toplam+=kart[i];
	}
	if(toplam%10==0)
	printf("Numara Gecerlidir\n");
	else
	printf("Numara Gecersizdir\n");
	
	return 0;
}