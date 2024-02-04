#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int s=0,bd=0,kat=0,top=0,t;
	printf("Onluk tabanda sayi giriniz:");
	scanf("%d",&s);
	printf("Donusturmek istediginiz tabani giriniz:");
	scanf("%d",&t);
	
	while(s>0)
	{
		bd=s%t;
		if(bd>=t){printf("Sayi %d lik tabanda degildir:",t);
				  goto son;}
		s=s/t;
		top=top+bd*pow(10,kat);
		kat++;
	}
	printf("Sayinin 10'luk tabandan istenilen tabana cevrilmis karsiligi:%d",top);
	son:
	getch();
	return 0;
}

