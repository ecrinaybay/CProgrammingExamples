#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

/*Örnek:Klavyeden girilen bir n deðeri için girilen n adet sayýyý A isimli bir 
diziye atayan ve dizinin elemanlarýnýn toplamýný bulan bir C programýný Dinemik dizi kullanark yazýnýz.*/

/*int main()
{
		int *A; // dinamik dizi tanýmlanmasý
	int i,top=0,n;
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	
	A=(int*) malloc(sizeof(int)*n); // n adet eleman için bellekten yer isteniyor.
	if(A==NULL)
	{printf("Yetersiz bellek alani istenmistir...\n"),exit(1);}
	
	for(i=0;i<n;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%d",&A[i]);
	}
	
	for(i=0;i<n;i++)
	{printf("Dizinin %d. elemani= %d\n",i+1,A[i]);}
	
	for(i=0;i<n;i++)
	{top=top+A[i];}
	
	printf("Dizinin elemanlari toplami=%d\n",top);
	free(A);//Ýstenilen alan serbest býrakýlýyor.
	
	getch();
	return 0;
	
	
}*/

/*int main()
{	int *A,*B;
	int i,n;
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	printf("\n\n");
	printf("malloc fonksiyonu ile:\n");
	A=(int*) malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{printf("A dizinin %d. elemani=%d\n",i+1,A[i]);}
	printf("\n\n");
	printf("calloc fonksiyonu ile:\n");
	B=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{printf("B dizinin %d. elemani:%d\n",i+1,B[i]);}
	
	free(A);
	free(B);
	
}*/

/*Örnek: Bir sýnýftaki 15 kiþi, belirsiz sayýda resimden en güzelini
seçmek için oylama yapacaktur. En çok oyu alan resmi bulan ve sonucu
ekrana yazdýran C programýný dinamik bellek kullanýmý ile yapýnýz.*/

/*int main()
{
	int *A;
	int i,n,x,enb,sakla;
	printf("Yarýsacak resim adetini giriniz: ");
	scanf("%d",&n);
	
	A=(int *)calloc(n,sizeof(int));
	for(i=1;i<=15;i++)
	{printf("%d. ogencinin en begendigi resim degerini giriniz: ",i);
	scanf("%d",&x);
	A[x-1]=A[x-1]+1;}
	
	for(i=0;i<n;i++)
	{printf("%d. resmin aldigi oy adeti:%d\n",i+1,A[i]);}
	
	for(i=0;i<n;i++)
	{if(i==0){enb=A[i];sakla=i+1;}
	if(A[i]>enb){enb=A[i];sakla=i+1;}
	}
	printf("Yarismayi %d numarali resim kazanmistir...\n",sakla);
	
	free(A);
	getch();
	return 0;
}*/


