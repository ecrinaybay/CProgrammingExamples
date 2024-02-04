#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

///////////////////////////////// KARAKTER TÝPLÝ DÝZÝLER ///////////////////////////////////

int main()
{
//Örnek: Klavyeden girilen bir metni ekrana yazdýran C programýný yazýnýz.	

	/*char A[50];
	
	printf("Metni giriniz:");
	gets(A);
	
	printf("\n");
	printf(A);*/
	
//Klavyeden girilen bir metni ekrana farklý þekillerde yazdýrýlmasý:

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
	
//2. yol:--- scanf komutu ile bir kelime karakter tipli diziye aktarýlýr.

	/*char A[50]; int i;
	
	printf("Metni giriniz:\n");
	scanf("%s",&A);
	
	printf("scanf ile girilen karakter tipli dizi:\n");
	printf(A);*/

//Örnek: Birden fazla kelimenin scanf ile matrise aktarýlmasý:

	/*char isim[4][30];
	int i;
	
	for(i=0;i<4;i++)
	{printf("%d. ismi giriniz:\n",i+1);
	scanf("%s",isim[i]);	
	}
	
	for(i=0;i<4;i++)
	{printf("%s ",isim[i]);}*/

//////////////////////////////// Karakter Tipli Dizilerin Uzunluðunun Bulunmasý ////////////////////////////////

//1. yol:strlen() fonksiyonu kullanarak dizinin uzunluðu bulunabilir. Kullanýmý: strlen(dizi_adý)

	/*char A[50];
	
	printf("Metni giriniz:");
	gets(A);
	
	printf("Girilen karakterin uzunlugu:%d",strlen(A));*/
	
//2.yol: Sayaç koyarak karakterleri sayabiliriz.
	/*char A[50]; int i,top=0;
	
	printf("Mrtni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metnin uzunlugu:%d",top);*/
	
//Örnek: Klavyeden girilen bir kelimeyi tersten yazdýran bir C programý yazýnýz.

	/*char A[50];int i,top=0;
	
	printf("Metni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metnin tersi:");
	
	for(i=top-1;i>=0;i--)
	{printf("%c",A[i]);}*/

//Örnek: Klavyeden girilen bir kelimeyi dikey olarak yazdýran bir C programý yazýnýz.

	/*char A[50]; int i,top=0;
	
	printf("Metni giriniz:");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{top++;}
	
	printf("Girilen metninin dikey olarak yazdirilmasi:\n");
	
	for(i=0;i<top;i++)
	{printf("%c\n",A[i]);}*/
	
//////////////////////// Karater Tipli Dizilerin Birleþtirilmesi///////////////////

//Örnek: Klavyeden girilen iki farklý karakter tipli diziyi birleþtiren bir C programý yazýnýz.

	/*char A[50],B[50];
	
	printf("1. metni giriniz:");
	gets(A);
	
	printf("2. metni giriniz:");
	gets(B);
	
	strcat(A,B);
	printf("Birlestirilmis metin:");
	printf(A);*/

//Örnek: Klavyeden girilen üç farklý karakter tipli diziyi birleþtiren bir C programý yazýnýz.

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
//C'nin standart strcpy() fonksiyonu kullanýlarak, karakter dizisine baþlangýç deðeri atamasý yapýlabilir.

//Örnek: strcpy fonksiyonunu kullanan bir C programý yazýnýz.

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


/////////////////////////////Karakter Tipli Dizileri Karþýlaþtýrmak ///////////////////////////

/*--- Ýki karakter tipli diziyi birbirleriyle karþýlaþtýrarak, içerdiði karakterlerin ayný olup
olmadýklarý strcmp() fonksiyonu kullanýlarak kontrol edilebilir.

--- Karþýlaþtýrma sonucunda, her iki karakter dizisi birbirinin ayný ise "0"; birinci dizi
ikinciden küçükse " negatif bir deðer" ve ikinci dizi birinciden küçükse " pozitif bir
deðer" üretilir.*/

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
//--- Karakter tipli bir diziyi tersten yazdýrmak için kullanýlýr.

//Örnek:
/*char A[50],B[50];
printf("Metni giriniz:");
gets(A);
printf("Girilen metnin tersi:%s\n",strrev(A));*/

//////////////////////////////////// toupper() ve tolower () foksiyonlarý //////////////////////////
/*  --- Karakter tipli bir dizilerde toupper() fonksiyonu küçük harfleri büyük harfe çevirir.
tolower() fonksiyonu büyük harfleri küçük harfe çevirir.
---Türkçe karakterler için çevirme iþlemi yapýlmýyor…
 */

//Örnek: toupper() fonksiyonunu kullanan bir C programý yazýnýz.

	/*char A[50],B[50]; int i;
	printf("Metni giriniz:");
	gets(A);
	printf("Girilen metni buyuk harflerle yazildi:");
	
	for(i=0;i<strlen(A);i++)
	B[i]=toupper(A[i]);
	
	printf(B);*/
	
//Örnek: tolower() fonksiyonunu kullanan bir C programý yazýnýz.

	/*char A[50],B[50]; int i;
	printf("Metni giriniz:");
	gets(A);
	printf("Girilen metin kucuk harflerle yazildi:");
	
	for(i=0;i<strlen(A);i++)
	B[i]=tolower(A[i]);
	
	printf(B);*/
	
/*Örnek: Bir sýnýftaki 5 öðrencinin isimleri, numaralarý ve vize sýnavýndan aldýðý notlar A, B
ve C isimli dizilerde saklanýyor.
--- Öðrencileri numaralarýna göre küçükten büyüðe listeleyen,
--- Öðrenci isimlerini alfabetik olarak listeleyen  bir C programý yazýnýz.*/	
		
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
	
///////////////////////////////////////////// Rasgele Sayýlar Üretme ////////////////////////////	
/* --- rand fonksiyonu ile rastgele sayýlar üretilebilir.
--- 1 ile n arasýnda rasgele sayý üretebilmek için
 -1+(rand()%n)
 -Rand()%n 0 ile n-1 arasýnda bir sayý döndürür.
 -Buna 1 eklemek 1ile n arasýnda bir rasgele sayý üretir.*/
 
//Örnek: 1 ile 20 arasýnda 5 kere 10 elemanlý sayý üreten bir C programý yazýnýz.

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
//---Her çalýþmada ayný sayýlarýn üretilmesini engellemek için srand() fonksiyonu kullanýlýr.

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
