#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
/////////////////////////////////// FONKSÝYONLAR ///////////////////////////

//1.yol:
	/*int toplama(int a,int b,int c);
	
	int main()
	{ int x,y,z,sonuc;
	printf("x degerini giriniz:");
	scanf("%d",&x);
	printf("y degerini giriniz:");
	scanf("%d",&y);
	printf("z degerini giriniz:");
	scanf("%d",&z);
	sonuc=toplama(x,y,z);
	printf("uc sayinin toplami=%d",sonuc);
	getch();
	return 0;
	}
	int toplama(int a,int b,int c)
	{int top;
	top=a+b+c;
	return top;
	}*/
	
//2.yol:

	/*int toplama(int a,int b,int c)
	{int top;
	top=a+b+c;
	return top;
	}
	
	int main()
	{int x,y,z,sonuc;
	printf("x degerini giriniz:");
	scanf("%d",&x);
	printf("y degerini giriniz:");
	scanf("%d",&y);
	printf("z degerini giriniz:");
	scanf("%d",&z);
	sonuc=toplama(x,y,z);
	printf("uc sayinin toplami=%d",sonuc);
	getch();
	return 0;
	}*/
	
	/*void toplama(int a,int b,int c);
	
	int main()
	{int x,y,z;
	printf("x degerini giriniz:");
	scanf("%d",&x);
	printf("y degerini giriniz:");
	scanf("%d",&y);
	printf("z degerini giriniz:");
	scanf("%d",&z);
	toplama(x,y,z);
	getch();
	return 0;
	}
	
	void toplama(int a,int b,int c)
	{int top;
	top=a+b+c;
	printf("uc sayinin toplami=%d",top);
	}*/

//PARAMETRE VE ARGÜMAN
/* Fonksiyon çaðrýlýrken gönderilen deðerlere "ARGÜMAN" denir.
Fonksiyon bildiriminde,fonksiyona girdi olarak, kullanýlan deðiþkenlere "PARAMETRE" denir.*/
	
	/*int toplama(int a,int b,int c);
	int main()
	{int x,y,z,sonuc;
	printf("x degerini giriniz:");
	scanf("%d",&x);
	printf("y degerini giriniz:");
	scanf("%d",&y);
	printf("z degerini giriniz:");
	scanf("%d",&z);
	sonuc=toplama(x,y,z);
	printf("uc sayinin toplami=%d",sonuc);
	getch();
	return 0;
	}
	int toplama(int a,int b,int c)
	{int top;
	top=a+b+c;
	return top;
	}  */                      /* Argüman x,y,z;
                            Parametre:a,b,c; */
//Örnek 1:                            
// void Fonksiyonlar
	/*void fonk_A();
	 
	int main()
	{
	fonk_A();
	printf("Universitesi");
	getch();
	return 0;
	}  
	
	void fonk_A()
	{printf("Pamukkale ");
	} */
//Örnek 2:	
	/*void  fonk_A();
	void fonk_B();
	
	int main()
	{
	fonk_A();
	printf("Denizli");
	getch();
	return 0;
	}
	void fonk_A()
	{
	fonk_B();
	printf("Universitesi ");
	}
	void fonk_B()
	{printf("Pamukkale ");
	}*/
	
/*Örnek 3: Tam sayý türünde parametre girdisi olan ve deðer döndürmeyen bir
fonksiyon örneði. Klavyeden girilen bir n tamsayýsýna göre bir fonksiyonda n*n
tipinde rastgele sayýlardan oluþmuþ bir matris üreten C programý yazýnýz. */
	
	/*void matris(int a);
	
	int main()
	{
		int n;
		printf("Bir pozitif tamsayi giriniz:");
		scanf("%d",&n);
		printf("%d*%d tipindeki matris, matris isimli fonksiyonda uretilmistir...\n",n,n);
		matris(n);
		getch();
		return 0;
	}
	void matris(int a)
	{
		int i,j,A[100][100],x;
		srand(time(NULL));
		for(i=0;i<a;i++)
		{
		for(j=0;j<a;j++)
		{x=1+(rand()%20);
		A[i][j]=x;}
		}	
		for(i=0;i<a;i++)
		{
		for(j=0;j<a;j++)	
		{printf("%4d",A[i][j]);}
		printf("\n");
		}
		
	}*/
	
/*Örnek 4: Tam sayý türünde parametre girdisi olan ve deðer döndürmeyen bir fonksiyon örneði.
Klavyeden üç öðrencinin notlarý giriliyor. Notlarý harf_notu fonksiyonuna gönderip notun harf notu
karþýlýðýný bulan bir C programý yazýnýz. */

	/*void harf_notu(int a);
	
	int main()
	{
	int n,i,x;
	for(i=0;i<3;i++)
	{
		printf("%d. ogrencinin notunu giriniz:",i+1);
		scanf("%d",&x);
		printf("%d. ogrencinin notu=%d ve harf notu=",i+1,x);
		harf_notu(x);
		printf("\n");
	}
	getch();
	return 0;	
	}
	
	void harf_notu(int a)
	{
	if ((a>=95) && (a<=100)) printf("A1");
	if ((a>=90) && (a<95)) printf("A2");
	if ((a>=85) && (a<90)) printf("A3");
	if ((a>=80) && (a<85)) printf("B1");
	if ((a>=75) && (a<80)) printf("B2");
	if ((a>=70) && (a<75)) printf("B3");
	if ((a>=65) && (a<70)) printf("C1");
	if ((a>=60) && (a<65)) printf("C2");
	if ((a>=55) && (a<60)) printf("D1");
	if ((a>=50) && (a<55)) printf("D2");
	if ((a>=0) && (a<50)) printf("F1");
	
	}*/
	
/*Örnek 5: Klavyeden girilen n ve r deðerleri için kombinasyon C(n,r) ve Permütasyon P(n,r) degerlerini hesaplayan bir C programý yazýnýz.
C(n,r)=n!/((n-r)!*r!) ve P(n,r)=n!/(n-r)! Faktoriyel bir fonksiyonsa hesaplanacaktýr. */

	/*int fakt(int x);
	
	int main()
	{
	int n,r,comb,perm;
	printf("n degerini giriniz:");
	scanf("%d",&n);
	printf("r degerini giriniz:");
	scanf("%d",&r);
	
	comb=fakt(n)/(fakt(n-r)*fakt(r));
	printf("Kombinasyon degeri=%d\n",comb);
	
	perm=fakt(n)/fakt(n-r);
	printf("Permutasyon degeri=%d",perm);
	
	getch();
	return 0;
	}
	
	int fakt(int x)
	{
		int i,carp=1;
		if((x==0)||(x==1)) {return 1;}
		else
		{for(i=1;i<=x;i++)
		{carp=carp*i;}
		return carp;
		}
	}*/
	
	                     
//DÝZÝLERÝ BÝR FONKSÝYONA GÖNDERMEK
/*---Diziler de deðiþkenler gibi bir fonksiyona parametre olarak gönderilebilir.
---Dzileri aktarma kurallarý biraz daha farklýdýr.
---Her zaman dizinin yanýnda dizinin boyutu da aktarýlmalýdýr.
*/		

/* Örnek 1: Ana programdan 5 adet sayý giriliyor ve bu sayýlar A isimli bir diziye aktarýlýyor. A isimli dizideki
elemanlar ortalama isimli bir fonksiyona gönderiliyor ve bu fonksiyon da dizinin elemanlarýnýn ortalamasýný
bulunuyor. Bulunan ortalama deðerini ana programda yazdýran bir C programý yazýnýz.v*/	
	
//1.yol:Dizi ve boyutu ayrý ayrý gönderiliyor…
	
	/*float ortalama(float B[],int n);
	int main()
	{int i;
	float sonuc,A[5];
	for(i=0;i<5;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%f",&A[i]);
	}
	sonuc=ortalama(A,5);
	printf("Sonuc ana programda yazdiriliyor...\n");
	printf("A'nin degerlerinin ortalamasi=%.2f",sonuc);
	getch();
	return 0;
	}	
	
	float ortalama(float B[],int n)
	{int i;
	float ort,top=0.0;
	for(i=0;i<n;i++)
	{top=top+B[i];
	}
	ort=top/n;
	return ort;
	}*/
	
//2. yol: Dizi ve boyutu ayný anda gönderiliyor…

	/*float ortalama(float B[5]);
	int main()
	{int i;
	float sonuc,A[5];
	for(i=0;i<5;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%f",&A[i]);
	}
	sonuc=ortalama(A);
	printf("Sonuc ana programda yazdiriliyor...\n");
	printf("A'nin degerlerinin ortalamasi=%f",sonuc);
	getch();
	return 0;
	}
	
	float ortalama(float B[5])
	{int i;
	float ort,top=0.0;
	
	for(i=0;i<5;i++)
	{top=top+B[i];
	}
	ort=top/5.0;
	return ort;
	}*/	

//3. yol: Ortalama deðeri fonksiyonda yazdýrýlýyor.	

	/*void ortalama(float B[],int n);
	
	int main()
	{int i;float A[5];
	for(i=0;i<5;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%f",&A[i]);
	}
	ortalama(A,5);
	getch();
	return 0;
	}
	
	void ortalama(float B[],int n)
	{int i;float ort,top=0.0;
	for(i=0;i<n;i++)
	{top=top+B[i];
	}
	ort=top/n;
	printf("Sonuc fonksiyonunda yazdiriliyor...\n");
	printf("A'nin degerlerinin ortalamasi=%.2f",ort);
	}*/
	
/*Örnek 2: Ana programdan 10 adet sayý giriliyor ve bu sayýlar A isimli bir diziye aktarýlýyor. A isimli
dizideki elemanlar enbuyuk isimli bir fonksiyona gönderiliyor ve bu fonksiyon da dizinin elemanlarýnýn en
büyüðü bulunuyor. Bulunan en büyük deðeri ana programda yazdýran bir C programý yazýnýz.*/

	/*int enbuyuk(int B[],int n);
	int siralama(int B[],int n);
	
	int main()
	{int A[10],enb,i;
	for(i=0;i<10;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%d",&A[i]);
	}
	enb=enbuyuk(A,10);
	printf("A'nin en buyuk elemani degeri=%d\n",enb);
	printf("Sonuc ana fonksiyonda yazdirildi...\n");
	getch();
	return 0;
	}	
	
	int enbuyuk(int B[],int n)
	{int i,x;
	x=B[0];
	for(i=1;i<n;i++)
	{if(B[i]>x) x=B[i];
	}
	return x;
	}*/

/*Örnek 3: Ana programdan 10 adet sayý giriliyor ve bu sayýlar A isimli bir diziye aktarýlýyor. A isimli dizideki
elemanlar kbsirala isimli bir fonksiyona gönderiliyor ve bu fonksiyon da dizinin elemanlarý küçükten büyüðe
sýralanýyor. A dizisinin elemanlarýný ana programda, dizinin küçükten büyüðe sýralanmýþ halini kbsirala isimli
fonksiyonda yazdýran bir C programý yazýnýz.*/	

	/*void kbsirala(int B[],int n);
	
	int main()
	{int A[10],enb,i;
	for(i=0;i<10;i++)
	{printf("%d. elemani giriniz:",i+1);
	scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++)
	{printf(" %d ",A[i]);}
	printf("\n");
	printf("A dizisinin elemanlari ana fonksiyonda yazdirildi...\n");
	printf("\n");
	kbsirala(A,10);
	getch();
	return 0;
	}
	void kbsirala(int B[],int n)
	{int i,j,x;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{if(B[i]>B[j]){x=B[i];
		           B[i]=B[j];
		                 B[j]=x;}
		}
	}
	for(i=0;i<n;i++)
	{printf(" %d ",B[i]);}
	printf("\n");
	printf("A dizisinin elemanlari sirali olarak kbsirala fonksiyonunda yazdirildi...\n");
	}*/
	
/////////////////////////////// REKÜRSÝF(ÖZYÝNELEMELÝ) FONKSÝYONLAR /////////////////////////

//Örnek 1: 1 den 10 a kadar olan sayýlarýn faktöriyelini rekürsif olarak hesaplayan bir C programý yazýnýz.

	/*long faktoriyel(long sayi);
	
	int main()
	{
		int i;
		for(i=1;i<=10;i++)
		   printf("%3d!=%7ld\n",i,faktoriyel(i));
		   getch();
		   return 0;
	}
	
	long faktoriyel(long sayi)
	{
	 if(sayi<=1) return 1;
	 else return(sayi*faktoriyel(sayi-1));
	}*/

/*Örnek 2: Kendisinden önce gelen iki tamsayýnýn toplamý ile elde edilen sayý dizisine fibonacci sayý dizisi denir.
1 1 2 3 5 8 13 21 34 55…
Burada:
F[0]=1, F[1]=1, F[2]=2, F[3]=3, F[4]=5, F[5]=8, F[6]=13, F[7]=21… þeklindedir.
Klavyeden bir n tamsayýsý giriliyor. n. adýma kadar olan Fibonacci dizisi elemanlarýný ekrana yazdýran bir C programý yazýnýz.*/

//Rekürsif olarak:

	/*int fibonacci(int n);
	
	int main()
	{int sonuc,i,n;
	printf("Bir tamsayi giriniz:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{sonuc=fibonacci(i);
	printf("Fibonacci(%d)=%d\n",i,sonuc);
	}
	getch();
	return 0;
	}
	
	int fibonacci(int n)
	{if(n==0||n==1) return n;
	else return (fibonacci(n-1)+fibonacci(n-2));
	}*/
	
//Dizi ile:
	/*int main()
	{int F[50];
	int n,i;
	F[0]=0;F[1]=1;
	printf("Bir tamsayi giriniz:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	F[i]=F[i-1]+F[i-2];
	
	for(i=0;i<=n;i++)
	printf("Fibonacci(%d)=%d\n",i,F[i]);
	getch();
	return 0;
	}*/





	
