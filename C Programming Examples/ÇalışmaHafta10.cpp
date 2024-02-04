#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

///////////////////////////////// KARAKTER T�PL� D�Z�LER ///////////////////////////////////

int main()
{
//�rnek: Klavyeden girilen bir metni ekrana yazd�ran C program�n� yaz�n�z.	

	/*char A[50];
	
	printf("Metni giriniz:");
	gets(A);
	
	printf("\n");
	printf(A);*/
	
//Klavyeden girilen bir metni ekrana farkl� �ekillerde yazd�r�lmas�:

	/*char A[50]; int i;
	printf("Metni giriniz:");
	gets(A);
	printf("\nprintf kullanarak:\n");
	printf(A);
	printf("\nfor kullanarak(1.durum):\n");
	for(i=0;A[i]!='\0';i++)
	{printf("%c",A[i]);}
	printf("\nfor kullanarak(2.durum):\n");
	for(i=0;i<=A[i];i++)
	{printf("%c",A[i]);}*/
	
//2. yol:--- scanf komutu ile bir kelime karakter tipli diziye aktar�l�r.

	/*char A[50]; int i;
	
	printf("Metni giriniz:\n");
	scanf("%s",&A);
	
	printf("scanf ile girilen karakter tipli dizi:\n");
	printf(A);*/

//�rnek: Birden fazla kelimenin scanf ile matrise aktar�lmas�:

	/*char isim[4][30];
	int i;
	
	for(i=0;i<4;i++)
	{printf("%d. ismi giriniz:\n",i+1);
	scanf("%s",isim[i]);	
	}
	
	for(i=0;i<4;i++)
	{printf("%s ",isim[i]);}*/

//////////////////////////////// Karakter Tipli Dizilerin Uzunlu�unun Bulunmas� ////////////////////////////////

//1. yol:strlen() fonksiyonu kullanarak dizinin uzunlu�u bulunabilir. Kullan�m�: strlen(dizi_ad�)

	/*char A[50];
	
	printf("Metni giriniz:");
	gets(A);
	
	printf("Girilen karakterin uzunlugu:%d",strlen(A));*/
	
//2.yol: Saya� koyarak karakterleri sayabiliriz.
	/*char A[50]; int i,top=0;
	
	printf("Mrtni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metnin uzunlugu:%d",top);*/
	
//�rnek: Klavyeden girilen bir kelimeyi tersten yazd�ran bir C program� yaz�n�z.

	/*char A[50];int i,top=0;
	
	printf("Metni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metnin tersi:");
	
	for(i=top-1;i>=0;i--)
	{printf("%c",A[i]);}*/

//�rnek: Klavyeden girilen bir kelimeyi dikey olarak yazd�ran bir C program� yaz�n�z.

	/*char A[50]; int i,top=0;
	
	printf("Metni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metninin dikey olarak yazdirilmasi:\n");
	
	for(i=0;i<top;i++)
	{printf("%c\n",A[i]);}*/
	
//////////////////////// Karater Tipli Dizilerin Birle�tirilmesi///////////////////

//�rnek: Klavyeden girilen iki farkl� karakter tipli diziyi birle�tiren bir C program� yaz�n�z.

	/*char A[50],B[50];
	
	printf("1. metni giriniz:");
	gets(A);
	
	printf("2. metni giriniz:");
	gets(B);
	
	strcat(A,B);
	printf("Birlestirilmis metin:");
	printf(A);*/

//�rnek: Klavyeden girilen �� farkl� karakter tipli diziyi birle�tiren bir C program� yaz�n�z.

	/*char A[50],B[50],C[50];
	
	printf("1. metni giriniz:");
	gets(A);
	
	printf("2. metni giriniz:");
	gets(B);
	
	printf("3. metni giriniz:");
	gets(C);
	
	strcat(B,C);
	strcat(A,B);
	
	printf("Birlestirilmis metin:\n");
	printf(A);*/
	
/////////////////////// Karakter Tipli Dizileri Kopyalamak ///////////////
//C'nin standart strcpy() fonksiyonu kullan�larak, karakter dizisine ba�lang�� de�eri atamas� yap�labilir.

//�rnek: strcpy fonksiyonunu kullanan bir C program� yaz�n�z.

	/*char A[50],B[50];
	strcpy(A,"Pamukkale ");
	strcpy(B,"Universitesi");
	printf("A dizisi:");
	printf(A);
	printf("\n");
	printf("B dizisi:");
	printf(B);
	printf("\n");
	strcat(A,B);
	printf("Birlestirilmis metin:");
	printf(A);*/


/////////////////////////////Karakter Tipli Dizileri Kar��la�t�rmak ///////////////////////////

/*--- �ki karakter tipli diziyi birbirleriyle kar��la�t�rarak, i�erdi�i karakterlerin ayn� olup
olmad�klar� strcmp() fonksiyonu kullan�larak kontrol edilebilir.

--- Kar��la�t�rma sonucunda, her iki karakter dizisi birbirinin ayn� ise "0"; birinci dizi
ikinciden k���kse " negatif bir de�er" ve ikinci dizi birinciden k���kse " pozitif bir
de�er" �retilir.*/

	/*char A[50],B[50]; int x;
	printf("1.metni giriniz:");
	gets(A);
	printf("2. metni giriniz:");
	gets(B);
	x=strcmp(A,B);
	printf("x=%d\n",x);
	if(x==0) printf("2 metin birbirinin aynisidir...\n");
	else printf("2 metin birbirinden farklidir...\n");*/

/////////////////////////////////// strrev() foksiyonu ///////////////////////////////
//--- Karakter tipli bir diziyi tersten yazd�rmak i�in kullan�l�r.

//�rnek:
/*char A[50],B[50];
printf("Metni giriniz:");
gets(A);
printf("Girilen metnin tersi:%s\n",strrev(A));*/

//////////////////////////////////// toupper() ve tolower () foksiyonlar� //////////////////////////
/*  --- Karakter tipli bir dizilerde toupper() fonksiyonu k���k harfleri b�y�k harfe �evirir.
tolower() fonksiyonu b�y�k harfleri k���k harfe �evirir.
---T�rk�e karakterler i�in �evirme i�lemi yap�lm�yor�
 */

//�rnek: toupper() fonksiyonunu kullanan bir C program� yaz�n�z.

	/*char A[50],B[50]; int i;
	printf("Metni giriniz:");
	gets(A);
	printf("Girilen metni buyuk harflerle yazildi:");
	
	for(i=0;i<strlen(A);i++)
	B[i]=toupper(A[i]);
	
	printf(B);*/
	
//�rnek: tolower() fonksiyonunu kullanan bir C program� yaz�n�z.

	/*char A[50],B[50]; int i;
	printf("Metni giriniz:");
	gets(A);
	printf("Girilen metin kucuk harflerle yazildi:");
	
	for(i=0;i<strlen(A);i++)
	B[i]=tolower(A[i]);
	
	printf(B);*/
	
/*�rnek: Bir s�n�ftaki 5 ��rencinin isimleri, numaralar� ve vize s�nav�ndan ald��� notlar A, B
ve C isimli dizilerde saklan�yor.
--- ��rencileri numaralar�na g�re k���kten b�y��e listeleyen,
--- ��renci isimlerini alfabetik olarak listeleyen  bir C program� yaz�n�z.*/	
		
	/*int B[5],C[5],i,t,m,j;
	char A[5][10],k[10];
	
	for(i=0;i<5;i++)
	{
		printf("%d. ogrencinin ismini giriniz:",i+1);
		scanf("%s",&A[i]);
		printf("%d. ogrencinin numarasini giriniz:",i+1);
		scanf("%d",&B[i]);
		printf("%d. ogrencinin notunu giriniz:",i+1);
		scanf("%d",&C[i]);
	}
		for(i=0;i<4;i++)
		 {for(j=i+1;j<5;j++)
			{ if(B[i]>B[j]){	strcpy(k,A[i]);
								strcpy(A[i],A[j]);
								strcpy(A[j],k);
							m=B[i];B[i]=B[j];B[j]=m;
							t=C[i];C[i]=C[j];C[j]=t;
							  }
			}
		}
		printf("Numara sirasina gore kucukten buyuge sirali\n");
		printf("Isim			Numara			Not");
		printf("\n-------------------------------------\n");
		for(i=0;i<5;i++)
		{printf("%s\t\t\t%d\t\t\t%d\n",A[i],B[i],C[i]);
		}
		
		for(i=0;i<4;i++)
		 {for(j=i+1;j<5;j++)
		 	{if(strcmp(A[i],A[j])>0)
		 					{	strcpy(k,A[i]);
		 						strcpy(A[i],A[j]);
		 						strcpy(A[j],k);
		 					m=B[i];B[i]=B[j];B[j]=m;
							t=C[i];C[i]=C[j];C[j]=t;	
							 }
			 
			 }
		  } 
		printf("Isimler alfabetik olarak siralanmistir\n");
		printf("Isim			Numara			Not");
		printf("\n-------------------------------------\n");
		for(i=0;i<5;i++)
		{printf("%s\t\t\t%d\t\t\t%d\n",A[i],B[i],C[i]);
		}*/
	
///////////////////////////////////////////// Rasgele Say�lar �retme ////////////////////////////	
/* --- rand fonksiyonu ile rastgele say�lar �retilebilir.
--- 1 ile n aras�nda rasgele say� �retebilmek i�in
 -1+(rand()%n)
 -Rand()%n 0 ile n-1 aras�nda bir say� d�nd�r�r.
 -Buna 1 eklemek 1ile n aras�nda bir rasgele say� �retir.*/
 
//�rnek: 1 ile 20 aras�nda 5 kere 10 elemanl� say� �reten bir C program� yaz�n�z.

	/*int A[10],i,j,x;
	for(j=0;j<5;j++)
	{
		for(i=0;i<10;i++)
		{x=1+(rand()%20);
		A[i]=x;
		}
		printf("%d. adimda uretilen sayilar\n",j+1);
		for(i=0;i<10;i++)
		printf(" %d ",A[i]);
		printf("\n\n");
}*/
//---Her �al��mada ayn� say�lar�n �retilmesini engellemek i�in srand() fonksiyonu kullan�l�r.

	int A[10],i,j,x;
	srand(time(NULL));
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<10;i++)
		{x=1+(rand()%20);
		A[i]=x;
		}
		printf("%d. adimda uretilen sayilar\n",j+1);
		for(i=0;i<10;i++)
		printf(" %d ",A[i]);
		printf("\n\n");
	}
 
 
	
getch();
return 0;	
	
}
