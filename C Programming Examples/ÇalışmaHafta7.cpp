#include <stdio.h>
#include <conio.h>
#define BOYUT 101
#define boyut 4
int main()
{

//�rnek 1:
	
	/*int n[ 10 ], i;
	for ( i = 0; i <= 9; i++ )
	n[ i ] = 0;
	printf( "%s%13s\n", "Eleman", "Deger" );
	for ( i = 0; i <= 9; i++ )
	printf( "%7d%13d\n", i, n[ i ] );*/
	
	
	/*int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90,
	70, 60, 37 };
	int i;
	printf( "%s%13s\n", "Eleman", "Deger" );
	for ( i = 0; i <= 9; i++ )
	printf( "%7d%13d\n", i, n[ i ] );*/
	
//�rnek 3:	
	/* int A[11],i,j;
	for (i=0;i<10;i++)
	{A[i]=i;}
	j = 3;
	A[10] = 20;
	A[2*j-1]=9;
	A[++j]=20;
	A[A[5]]=0;
	printf( "%s%14s\n", "indis", "Degeri" );
	for (i=0;i<11;i++)
	printf( "%3d%16d\n", i, A[i] );*/
	
//�rnek 4:Klavyeden say�sal de�er atamak:
//Bir s�n�ftaki 6 ��rencinin notunu A dizisinde saklayan C program�n� yaz�n�z.	

	/*int A[6],i;
	for(i=0;i<6;i++)
	{
		printf("Lutfen %d.ogrencinin notunu giriniz:\n",i+1);
		scanf("%d",&A[i]);
	}
	printf("%s%14s\n","ogrenci","not");
	
	for(i=0;i<6;i++)
	{printf("%3d%17d\n",i+1,A[i]);}*/

//�rnekler:
//1-) 1 den 50 ye kadar olan tek say�lar� A isimli diziye �ift say�lar� B isimli diziye atayan bir C program� yaz�n�z.	

	/*int A[25],B[25],i=-1,j=-1,k,x;
	
	for(k=1;k<=50;k++)
	{
		if(k%2==1) 
		{
			i++;
			A[i]=k;
		}
		else 
		{
			j++;
			B[j]=k;
		}
	}
	printf("TEK SAYILAR	CIFT SAYILAR	\n ");
	for(i=0;i<25;i++)
	{
		printf("%4d%16d\n",A[i],B[i]);
	}*/

//2-) 5 elemanl� bir A dizisi olu�turunuz. A dizisinin ortalamas�n� bulunuz.

	/*int A[5],i,top=0;
	float ort;
	
	for(i=0;i<5;i++)
	{
		printf("Dizin %d. elemanini tuslayiniz:\n",i+1);
		scanf("%d",&A[i]);
	}
	printf("%s%14s\n","ELEMAN","DEGER");
	for(i=0;i<5;i++)
	{
		printf("%3d%16d\n",i+1,A[i]);
	}
	
	for(i=0;i<5;i++)
	{
		top=top+A[i];
		ort=top/5.0; 
	}
	printf("TOPLAM=%d\n",top);
	printf("ORTALAMA=%.2f",ort);*/
	
//3-)Klavyeden 5 adet tamsay� giriliyor.Klavyeden girilen say�n�n adeti kadar * simgesi koyan bir C program� yaz�n�z.

	/*int n[BOYUT],i,j;
	for ( i = 0; i <= BOYUT-1; i++ )
	{
	printf("Lutfen %d. sayiyi giriniz:\n",i+1);
	scanf("%d",&n[i]);
	}
	
	printf( "%s%13s%17s\n", "Eleman", "Deger","Histogram" );
	for(i=0;i<=BOYUT-1;i++)
	{
		printf( "%3d%14d	   ", i+1, n[i]) ;
		for ( j = 1; j <= n[i]; j++ )
			printf( "%c", '*' );
		printf( "\n" );	
	}*/
	
//�rnek:
	/*int n[boyut],y[boyut],i,j,a;
	for(i=0;i<=boyut-1;i++)
	{
		printf("%d. sayiyi giriniz:\n",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<=boyut-1;i++)
	{y[i]=n[i];}
	printf("dizi elamanlari\n");
	for(i=0;i<=boyut-1;i++)
	printf("%d	",n[i]);
	printf("\n\n");
	
	printf("Dizinin elamanlari buyukten kucuge:\n");
	for(i=0;i<=boyut-1;i++)
	{
		for(j=i+1;j<boyut;j++)
		if(n[i]<n[j])
		{a=n[i];n[i]=n[j];n[j]=a;}
	}
	
	for (i=0;i<=boyut-1;i++)
	printf ("%d	",n[i]);
	printf("\n\n");
	
	printf ("dizi elemanlari kucukten buyuge sirali\n");
	for (i=0;i<=boyut-1;i++) 
	{	for (j=i+1;j<boyut;j++)
		if (n[i]>n[j])
		{a=n[i];n[i]=n[j];n[j]=a;}
	}
	for (i=0;i<=boyut-1;i++)
	printf ("%d	",n[i]);
	printf("\n");*/
	
/*�rnek-) 0 ile 200 aras�ndaki �ift say�lar a dizisinde saklan�yor. Klavyeden girilen bir tamsay�n�n bu dizide yer al�p 
almad���n� bulan ve sonucu ekrana yazd�ran bir C program� yaz�n�z.*/

	/*int a[BOYUT],i,key,s=0;
	for(i=0;i<BOYUT;i++)
	  a[i]=2*i;
	printf("Aranacak degeri giriniz.\n");
	scanf("%d",&key);
	
	 for(i=0;i<BOYUT;i++)
	   {if(a[i]==key){printf("Bu deger bulundu  dizinin %d. elamanidir,indis=%d dir.\n",i+1,i);
	   s=1;
	   break;
	   }
	   }
	if(s==0)printf("Bu deger bulunamadi.\n");*/
	
//////////////////////////////// �E��TL� �RNEKLER ///////////////////////////////

//�rnek-1) Klavyeden girilen 5 elemanl� A ve B dizilerini toplayarak C dizisini olu�turan ve yazd�ran C program�n� yaz�n�z.

	/*int A[5],B[5],C[5],i;
	for(i=1;i<=5;i++)
	{
	printf("A dizisinin %d. elemanini giriniz:\n",i);
	scanf("%d",&A[i]);
	}
	for(i=1;i<=5;i++)
	{
	printf("B dizisinin %d. elamanini giriniz:\n",i);
	scanf("%d",&B[i]);
	}
	
	for(i=1;i<=5;i++)
	{
	C[i]=A[i]+B[i];	
	}
	
	for(i=1;i<=5;i++)
	printf("C dizisinin %d. elemani %d dir.\n",i,C[i]);*/
	
	
/*�rnek-2) Klavyeden float tipinde 10 adet de�er giriliyor. Bu de�erlerin ortalamas�n� bulan, ve ka� adet eleman�n ortalaman�n 
alt�nda kald��� ve ka� adet eleman�n ortalaman�n �st�nde oldu�unu belirleyen bir program haz�rlay�n�z.*/

	/*float A[10];
	float toplam=0,ortalama;
	int i,ort_ust=0,ort_alt=0,ort_es=0;
	for(i=0;i<10;i++)
	{
	printf("Lutfen %d. sayiyi giriniz:\n",(i+1));
	scanf("%f",&A[i]);
	toplam+=A[i];	
	}
	ortalama=toplam/10.0;
	
	printf("TOPLAM=%.2f\n",toplam);
	printf("ORTALAMA=%.2f\n",ortalama);
	
	for(i=0;i<10;i++)
	{
	
		if(A[i]<ortalama)
		{
			ort_alt++;
		}
	
		else if(A[i]>ortalama)
		{
			ort_ust++;
		}
		
		else
		{
			ort_es++;	
		}
	}
	
	printf("\nOrtalamadan dusuk eleman sayisi:%d\n",ort_alt);
	printf("\nOrtalamadan yuksek eleman sayisi:%d\n",ort_ust);
	printf("\nOrtalaya esit eleman sayisi:%d\n",ort_es);*/
	
//�rnek-3) Bir zar 10 kez at�l�yor. Her bir rakam�n gelme y�zdelerini ekrana yazd�ran bir C program� yaz�n�z.

int A[6],x,i,y;

for(i=0;i<6;i++)
{A[i]=0;}

for(i=0;i<10;i++)
{
	printf("%d. atistaki degeri giriniz:\n",i+1);
	scanf("%d",&x);
	A[x-1]=A[x-1]+1;
}

printf("Zardaki sayilarin gelme yuzdeleri:\n");
for(i=0;i<6;i++)
{
	y=(A[i]*100)/10;
	printf("%d. degerinin gelme yuzdesi:%% %d\n",i+1,y);
}
	
	
	


getch();
return 0;
}
