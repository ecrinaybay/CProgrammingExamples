#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
/////////////////////////////////// FONKS�YONLAR ///////////////////////////

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

//PARAMETRE VE ARG�MAN
/* Fonksiyon �a�r�l�rken g�nderilen de�erlere "ARG�MAN" denir.
Fonksiyon bildiriminde,fonksiyona girdi olarak, kullan�lan de�i�kenlere "PARAMETRE" denir.*/
	
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
	}  */                      /* Arg�man x,y,z;
                            Parametre:a,b,c; */
//�rnek 1:                            
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
//�rnek 2:	
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
	
/*�rnek 3: Tam say� t�r�nde parametre girdisi olan ve de�er d�nd�rmeyen bir
fonksiyon �rne�i. Klavyeden girilen bir n tamsay�s�na g�re bir fonksiyonda n*n
tipinde rastgele say�lardan olu�mu� bir matris �reten C program� yaz�n�z. */
	
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
	
/*�rnek 4: Tam say� t�r�nde parametre girdisi olan ve de�er d�nd�rmeyen bir fonksiyon �rne�i.
Klavyeden �� ��rencinin notlar� giriliyor. Notlar� harf_notu fonksiyonuna g�nderip notun harf notu
kar��l���n� bulan bir C program� yaz�n�z. */

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
	
/*�rnek 5: Klavyeden girilen n ve r de�erleri i�in kombinasyon C(n,r) ve Perm�tasyon P(n,r) degerlerini hesaplayan bir C program� yaz�n�z.
C(n,r)=n!/((n-r)!*r!) ve P(n,r)=n!/(n-r)! Faktoriyel bir fonksiyonsa hesaplanacakt�r. */

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
	
	                     
//D�Z�LER� B�R FONKS�YONA G�NDERMEK
/*---Diziler de de�i�kenler gibi bir fonksiyona parametre olarak g�nderilebilir.
---Dzileri aktarma kurallar� biraz daha farkl�d�r.
---Her zaman dizinin yan�nda dizinin boyutu da aktar�lmal�d�r.
*/		

/* �rnek 1: Ana programdan 5 adet say� giriliyor ve bu say�lar A isimli bir diziye aktar�l�yor. A isimli dizideki
elemanlar ortalama isimli bir fonksiyona g�nderiliyor ve bu fonksiyon da dizinin elemanlar�n�n ortalamas�n�
bulunuyor. Bulunan ortalama de�erini ana programda yazd�ran bir C program� yaz�n�z.v*/	
	
//1.yol:Dizi ve boyutu ayr� ayr� g�nderiliyor�
	
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
	
//2. yol: Dizi ve boyutu ayn� anda g�nderiliyor�

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

//3. yol: Ortalama de�eri fonksiyonda yazd�r�l�yor.	

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
	
/*�rnek 2: Ana programdan 10 adet say� giriliyor ve bu say�lar A isimli bir diziye aktar�l�yor. A isimli
dizideki elemanlar enbuyuk isimli bir fonksiyona g�nderiliyor ve bu fonksiyon da dizinin elemanlar�n�n en
b�y��� bulunuyor. Bulunan en b�y�k de�eri ana programda yazd�ran bir C program� yaz�n�z.*/

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

/*�rnek 3: Ana programdan 10 adet say� giriliyor ve bu say�lar A isimli bir diziye aktar�l�yor. A isimli dizideki
elemanlar kbsirala isimli bir fonksiyona g�nderiliyor ve bu fonksiyon da dizinin elemanlar� k���kten b�y��e
s�ralan�yor. A dizisinin elemanlar�n� ana programda, dizinin k���kten b�y��e s�ralanm�� halini kbsirala isimli
fonksiyonda yazd�ran bir C program� yaz�n�z.*/	

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
	
/////////////////////////////// REK�RS�F(�ZY�NELEMEL�) FONKS�YONLAR /////////////////////////

//�rnek 1: 1 den 10 a kadar olan say�lar�n fakt�riyelini rek�rsif olarak hesaplayan bir C program� yaz�n�z.

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

/*�rnek 2: Kendisinden �nce gelen iki tamsay�n�n toplam� ile elde edilen say� dizisine fibonacci say� dizisi denir.
1 1 2 3 5 8 13 21 34 55�
Burada:
F[0]=1, F[1]=1, F[2]=2, F[3]=3, F[4]=5, F[5]=8, F[6]=13, F[7]=21� �eklindedir.
Klavyeden bir n tamsay�s� giriliyor. n. ad�ma kadar olan Fibonacci dizisi elemanlar�n� ekrana yazd�ran bir C program� yaz�n�z.*/

//Rek�rsif olarak:

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





	
