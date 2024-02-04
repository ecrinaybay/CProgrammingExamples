#include<stdio.h>
#include<conio.h>

int main()
{
	/*printf("C programlamaya hosgeldiniz:\n"); */
	
	////////////////////////////ÝKÝ SAYININ TOPLAMI///////////////////////
	
	/*int s1,s2,toplam;
	
	printf("\n------------------------------------------\n");
	printf("\nLutfen ilk sayiyi giriniz:\n");
	scanf("%d",&s1);
	printf("Lutfen ikinci sayiyi giriniz:\n");
	scanf("%d",&s2);
	toplam=s1+s2;
	printf("Iki sayinin toplami=%d\n",toplam);
	printf("\n------------------------------------------\n"); */
	
	/////////////////////////SAYILARIN FARKLI TABANLARDA GÖSTERÝMÝ//////////////////////////
	
	/*int x;
	
	printf("Bir sayi giriniz:\n");
	scanf("%d",&x);
	printf("Onluk tabanda:%d\n",x);
	printf("Sekizlik tabanda:%o\n",x);
	printf("Onaltilik tabanda:%X\n",x);
	printf("\n------------------------------------------\n"); */
	
	//////////////////////// FARKLI VERÝ TÝPLERÝNDE SAYILARIN GÖSTERÝMÝ ÖRNEKLERÝ/////////////////////////
	
	/*int y=1,Y;
	float z=.1;
	double Z=2;
	printf("y=%d, Y=%d\n",y,Y);
	printf("z=%f, Z=%e\n",z,Z);
	printf("\n------------------------------------------\n"); */
	
	///////////////////// ÝKÝ TAM SAYININ KARÞILAÞTIRMASI /////////////////////////
	
	/*int a,b;
	printf("Bu iki tamsayinin karsilastirmasi yapilacaktir...");
	printf("Iki sayi giriniz:\n");
	scanf("%d%d",&a,&b);
	
	if(a==b)
	printf("%d esittir %d \n",a,b);
	
	if(a!=b)
	printf("%d esit degildir %d\n",a,b);
	
	if(a>b)
	printf("%d buyuktur %d\n",a,b);
	
	if(a<b)
	printf("%d kucuktur %d\n",a,b);
	
	printf("\n------------------------------------------\n");*/
	
///////////////////////////////////////////SORULAR////////////////////////////////////
	
/* Soru1: 1’den 4’e kadar olan tamsayýlarý ekrana tek satýrda görülecek þekilde yazdýran bir programý
aþaðýdaki metotlarý kullanarak yazýnýz.
a) Bir printf ifadesi kullanarak ve hiç format belirteci kullanmadan.
b) Bir printf ifadesi ve dört format belirteci kullanarak.
c) Dört printf ifadesi kullanarak.  */

	/*printf("1 2 3 4\n\n"); //a
	printf("%d %d %d %d\n\n",1,2,3,4); //b
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4\n"); //c
	
	printf("\n------------------------------------------\n");*/
	
/* Soru2: Aþaðýdaki deseni sekiz printf ifadesiyle ekrana yazdýran bir program
yazýnýz. Daha sonra aynýsýný kullanabileceðiniz en az printf ifadesiyle yazýnýz.*/

	/*printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	
	printf("\n------------------------------------------\n");

	printf("\n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * * \n");*/

/* Soru3: Kullanýcýnýn iki tamsayý girmesini ve sayýlarýn kullanýcýdan aldýktan sonra bu
sayýlarýn toplamlarýný, çarpýmlarýný, farklarýný, bölümlerini ve modlarýný bulan bir
program yazýnýz.*/

	/*int n1,n2,toplam,carpim,fark,mod,bolum;
	
	printf("Lutfen iki tamsayi giriniz:\n");
	scanf("%d %d",&n1,&n2);
	
	toplam=n1+n2;
	
	carpim=n1*n2;
	
	fark=n1-n2;
	
	bolum=n1/n2;
	
	mod=n1%n2;
	
	printf("Iki sayinin toplami, carpimi ,farki ,bolumu ,modu sirasiyla:\n%d\n%d\n%d\n%d\n%d\n",toplam,carpim,fark,bolum,mod);*/

	
	getch();
	return 0;
}
