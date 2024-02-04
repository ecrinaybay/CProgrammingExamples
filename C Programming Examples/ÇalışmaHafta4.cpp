#include <stdio.h>
#include <conio.h>
#define sayi_a 23
#define sayi_b 13

int main()
{
////////////////////// VERÝ TÝPLERÝNÝNÝN BELLEKTE KAPLADIÐI ALANI BULMA //////////////////////

	/*printf("char : %d byte \n",sizeof(char));
	printf("int : %d byte \n",sizeof(int));
	printf("short : %d byte \n",sizeof(short));
	printf("unsigned char : %d byte \n",sizeof(unsigned char));
	printf("unsigned short : %d byte \n",sizeof(unsigned short));
	printf("float : %d byte \n",sizeof(float));
	printf("double : %d byte \n",sizeof(double));*/

/////////////////// C DÝLÝNDE SABÝT TANIMLAMA/////////////////////////////

/*"const" komutu ile sabit bir deðiþken tanýmlayabiliriz.  Sabit içerikleri program boyunca deðiþtirilemez. Yalnýzca kullanýlabilir.*/
	/*float toplam;
	const int sabit_a=5;
	const int sabit_b=13;
	const float sabit_c=8.11;
	
	printf("Sabitlerin toplami:%d\n",sabit_a+sabit_b);
	printf("Sabitlerin toplami:%d\n",sabit_a+sabit_c);
	
	printf("Sabitlerin toplami= %d",sayi_a + sayi_b);*/
	
/////////////////////////// KOÞUL  ////////////////////////////

	/*int a=3,b=5,c=-6,x1,x2,x3,x4;
	
	x1=((a<b)&&(a<c));
	x2= ((a!=c) || (0==1)) ;
	x3= ((b==c) || (a==3)) ;
	x4=(a+b<c);
	
	printf ("x1 degeri= %d\n",x1);
	printf ("x2 degeri= %d\n",x2);
	printf ("x3 degeri= %d\n",x3);
	printf ("x4 degeri= %d\n",x4);*/

///////////////////////// KARÞILAÞTIRMA YAPILARI ////////////////////////////////

	/*int a;
	
	printf("Lutfen bir a degeri giriniz:\n");
	scanf("%d",&a);
	
	printf("Girilen a degeri:%d\n",a);
	
	if(a<20)
	{
		a++;
	}
	
	else
	{
		a--;
	}
	
	printf("Girilen a degeri:%d\n",a);*/

/* Örnek: 0 ile 100 arasýnda girilen bir sayýnýn hangi çeyrekte olduðunu
bulan C programýný yazýnýz. */

	/*float x;
	
	printf("Lutfen x degerini giriniz:\n");
	scanf("%f",&x);
	
	if((0<x)&&(x<=25))
	{
		printf("Sayi 1. ceyrektedir.");
	}
	
	else if((25<x)&&(x<=50))
	{
		printf("Sayi 2. ceyrektedir.");
	}
	
	else if((50<x)&&(x<=75))
	{
		printf("Sayi 3. ceyrektedir.");
	}
	
	else if((75<x)&&(x<=100))
	{
		printf("Sayi 4. ceyrektedir.");
	}
	
	else
	{
		printf("Uygun sayi girilmemistir.");
	}*/
	
/////////////////////////////////ÇEÞÝTLÝ ÖRNEKLER /////////////////////////////

/*ÖRNEK 1: Girilen 4 sayýnýn en büyüðünü bulan programý yazýnýz.*/

	/*int a,b,c,d,enb;
	
	printf("Lutfen 4 adet sayi giriniz:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b) enb=a; else enb=b;
	if(c>enb) enb=c;
	if(d>enb) enb=d;
	
	printf("En buyuk sayi:%d",enb);*/

/*ÖRNEK 2:Üç sayýyý küçükten büyüðe sýralayan programý yazýnýz.*/

	/*int x,y,z,t;
	printf("Lutfen 3 adet sayi giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y){t=x; x=y; y=t;}
	if(x>z){t=x; z=x; z=t;}
	if(y>z){t=y; y=z; z=t;}
	
	printf("Bu sayilarin kucukten buyuge dogru siralinisi:%d<%d<%d",x,y,z);*/
	
	
///////////////////////////// switch ÇOKLU SEÇÝM YAPISI ///////////////////////////

/* Örnek1: Klavyeden girilen iki sayý ve girilen matematiksel iþleme göre sonuç veren C programý yazýnýz. */

	/*int s1,s2,sonuc;
	char islem;
	
	printf("Lutfen yapmak istediginiz islemi tuslayiniz:");
	scanf("%c",&islem);
	
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&s1,&s2);
	
	
	switch(islem)
	{
		case'+': sonuc=s1+s2; break;
		case'-': sonuc=s1-s2; break;
		case'*': sonuc=s1*s2; break;
		case'/': sonuc=s1/s2; break;
		case'%': sonuc=s1%s2; break;
		default:printf ("Hatali islem");
	}
	printf("\n Sonuc = %d %c %d =%d",s1,islem,s2,sonuc);*/

/*  Örnek2 : Klavyeden girilen bir sayýyý Türkçe olarak yazan C programýný yazýnýz. */

	/*int sayi,a,b;
	
	printf("2 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi); // sayýmýzý sayi deðiþkenine atadýk.
	
	if((sayi>=10) && (sayi<100)) // Sayý 10 dan buyuk 100 den küçükse aþaðýdaki iþlemler yapýlacak.
	{
	a=sayi/10; // Onlar basamaðýndaki sayýyý belirledik.
	b=sayi-(a*10);
	printf("Sayiniz: ");
	
	switch(a) // Onlar basamaðý için switch case iþlemleri.
	{
	case 1:printf("On"); break;
	case 2:printf("Yirmi"); break;
	case 3:printf("Otuz"); break;
	case 4:printf("Kirk"); break;
	case 5:printf("Elli"); break;
	case 6:printf("Altmis"); break;
	case 7:printf("Yetmis"); break;
	case 8:printf("Seksen"); break;
	case 9:printf("Doksan"); break;
	case 0:printf(" "); break;
	}
	
	switch(b) // Birler basamaðý için switch case iþlemleri.
	{
	case 1:printf(" bir");break;
	case 2:printf(" iki"); break;
	case 3:printf(" uc"); break;
	case 4:printf(" dort"); break;
	case 5:printf(" bes"); break;
	case 6:printf(" alti"); break;
	case 7:printf(" yedi"); break;
	case 8:printf(" sekiz"); break;
	case 9:printf(" dokuz"); break;
	case 0:printf(" "); break;
	} // Birler basamaðýndaki sayýyý belirledik.
	}
	else // Sayý iki basamaklý deðilse program sonlanacak.
	{printf("Lutfen iki basamakli bir sayi giriniz.\n");}*/
	
/* Örnek 3: Klavyeden ‘t’ veya ‘T’ harfi girildiðinde ‘T harfi girdiniz’ aksi halde‘T harfi girmediniz’ þeklinde çýktý veren ve C programý yazýnýz. */

	/*char harf;
	
	printf("Lutfen bir harf giriniz:");
	scanf("%c",&harf);
	
	switch(harf)
	{
		case'T': printf("T harfi girdiniz"); break;
		case't':printf("t harfi girdiniz"); break;
		default:printf("T ya da t harfi girmediniz");
	}*/
	
//////////////////////////////////// ? KARÞILAÞTIRMA OPERATÖRÜ ////////////////////////////	
//Örnek1:
	
	/*int sayi;
	
	printf("Lutfen birsayi giriniz:");
	scanf("%d",&sayi);
	
	(sayi<10) ? printf("1.kisi") : printf("2.kisi");*/

//Örnek2:

	/*int x,y,a;
	printf("Lutfen iki sayi giriniz:\n");
	scanf("%d%d",&x,&y);
	
	a=(x>y) ? x:y;
	printf ("sayinin degeri= %d", a);*/
	
//////////////////////////////////////// goto DEYÝMÝ ////////////////////////////////	

/* Örnek 1: 1 den 5’e kadar olan sayýlarý ekrana yazdýran C programýný yazýnýz.  */
	
	/*int i=0;
	bas:
	i++;
	printf("%d\n",i);
	if(i<5)
	goto bas;*/
	
/* Örnek 2: 1 den 10’a kadar olan sayýlarýn toplamýný ekrana yazdýran C programýný yazýnýz.*/

	/*int i=0,toplam=0;
	bas:
		i++;
		printf("%d\n",i);
		toplam=toplam+i;
		if(i<10)
	goto bas;	
	printf("TOPLAM:%d\n",toplam);*/
	
/* Örnek 3:Bir öðrencinin bir dersten aldýðý vize ve final notlarý veriliyor. Bu notlara göre geçme notunu hesaplayan 
( Geçme Notu= Vize*0.4+ Final*0.6), final ya da geçme notlarýndan birinin ya da ikisinin 50’den küçük olmasý durumunda bütünleme notunu 
isteyen ve buna göre geçme notunu hesaplayan, sonuçta geçme notunu ve GEÇTÝ ya da KALDI þeklinde mesaj veren programý hazýrlayýnýz. */	
			
	/*int vize, final,gecme_notu,tuslama,but;
	
	printf("Sirasiyla vize ve final notunuzu giriniz:");
	scanf("%d%d",&vize,&final);
	
	gecme_notu= vize*0.4+ final*0.6;
	printf("Gecme notunuz:%d\n\n",gecme_notu);
	
	if((gecme_notu<50)||(final<50))
	{
	
	printf("Butunleme sinavina girdiyseniz 1'i,girmediyseniz 2'yi tuslayin: ");
	scanf("%d",&tuslama);
	
	switch(tuslama)
	{
		case 1: {printf("Lutfen butunleme notunuzu giriniz:");
		          scanf("%d",&but);
		          
		          gecme_notu= vize*0.4+ but*0.6;
		          printf("Gecme notunuz:%d\n",gecme_notu);
		          
		          if(gecme_notu<50){printf("KALDINIZ!");}
		          else printf("GECTINIZ!");
			    }; break;
			    
	    case 2: printf("KALDINIZ!");break;	  
		  default : printf ("Hatali tuslama");
	}
	}
	
	else {printf("GECTINIZ!");}*/







getch();	
return 0;
}
