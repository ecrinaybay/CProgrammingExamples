#include <stdio.h>
#include <conio.h>
#define sayi_a 23
#define sayi_b 13

int main()
{
////////////////////// VER� T�PLER�N�N�N BELLEKTE KAPLADI�I ALANI BULMA //////////////////////

	/*printf("char : %d byte \n",sizeof(char));
	printf("int : %d byte \n",sizeof(int));
	printf("short : %d byte \n",sizeof(short));
	printf("unsigned char : %d byte \n",sizeof(unsigned char));
	printf("unsigned short : %d byte \n",sizeof(unsigned short));
	printf("float : %d byte \n",sizeof(float));
	printf("double : %d byte \n",sizeof(double));*/

/////////////////// C D�L�NDE SAB�T TANIMLAMA/////////////////////////////

/*"const" komutu ile sabit bir de�i�ken tan�mlayabiliriz.  Sabit i�erikleri program boyunca de�i�tirilemez. Yaln�zca kullan�labilir.*/
	/*float toplam;
	const int sabit_a=5;
	const int sabit_b=13;
	const float sabit_c=8.11;
	
	printf("Sabitlerin toplami:%d\n",sabit_a+sabit_b);
	printf("Sabitlerin toplami:%d\n",sabit_a+sabit_c);
	
	printf("Sabitlerin toplami= %d",sayi_a + sayi_b);*/
	
/////////////////////////// KO�UL  ////////////////////////////

	/*int a=3,b=5,c=-6,x1,x2,x3,x4;
	
	x1=((a<b)&&(a<c));
	x2= ((a!=c) || (0==1)) ;
	x3= ((b==c) || (a==3)) ;
	x4=(a+b<c);
	
	printf ("x1 degeri= %d\n",x1);
	printf ("x2 degeri= %d\n",x2);
	printf ("x3 degeri= %d\n",x3);
	printf ("x4 degeri= %d\n",x4);*/

///////////////////////// KAR�ILA�TIRMA YAPILARI ////////////////////////////////

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

/* �rnek: 0 ile 100 aras�nda girilen bir say�n�n hangi �eyrekte oldu�unu
bulan C program�n� yaz�n�z. */

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
	
/////////////////////////////////�E��TL� �RNEKLER /////////////////////////////

/*�RNEK 1: Girilen 4 say�n�n en b�y���n� bulan program� yaz�n�z.*/

	/*int a,b,c,d,enb;
	
	printf("Lutfen 4 adet sayi giriniz:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b) enb=a; else enb=b;
	if(c>enb) enb=c;
	if(d>enb) enb=d;
	
	printf("En buyuk sayi:%d",enb);*/

/*�RNEK 2:�� say�y� k���kten b�y��e s�ralayan program� yaz�n�z.*/

	/*int x,y,z,t;
	printf("Lutfen 3 adet sayi giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y){t=x; x=y; y=t;}
	if(x>z){t=x; z=x; z=t;}
	if(y>z){t=y; y=z; z=t;}
	
	printf("Bu sayilarin kucukten buyuge dogru siralinisi:%d<%d<%d",x,y,z);*/
	
	
///////////////////////////// switch �OKLU SE��M YAPISI ///////////////////////////

/* �rnek1: Klavyeden girilen iki say� ve girilen matematiksel i�leme g�re sonu� veren C program� yaz�n�z. */

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

/*  �rnek2 : Klavyeden girilen bir say�y� T�rk�e olarak yazan C program�n� yaz�n�z. */

	/*int sayi,a,b;
	
	printf("2 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi); // say�m�z� sayi de�i�kenine atad�k.
	
	if((sayi>=10) && (sayi<100)) // Say� 10 dan buyuk 100 den k���kse a�a��daki i�lemler yap�lacak.
	{
	a=sayi/10; // Onlar basama��ndaki say�y� belirledik.
	b=sayi-(a*10);
	printf("Sayiniz: ");
	
	switch(a) // Onlar basama�� i�in switch case i�lemleri.
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
	
	switch(b) // Birler basama�� i�in switch case i�lemleri.
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
	} // Birler basama��ndaki say�y� belirledik.
	}
	else // Say� iki basamakl� de�ilse program sonlanacak.
	{printf("Lutfen iki basamakli bir sayi giriniz.\n");}*/
	
/* �rnek 3: Klavyeden �t� veya �T� harfi girildi�inde �T harfi girdiniz� aksi halde�T harfi girmediniz� �eklinde ��kt� veren ve C program� yaz�n�z. */

	/*char harf;
	
	printf("Lutfen bir harf giriniz:");
	scanf("%c",&harf);
	
	switch(harf)
	{
		case'T': printf("T harfi girdiniz"); break;
		case't':printf("t harfi girdiniz"); break;
		default:printf("T ya da t harfi girmediniz");
	}*/
	
//////////////////////////////////// ? KAR�ILA�TIRMA OPERAT�R� ////////////////////////////	
//�rnek1:
	
	/*int sayi;
	
	printf("Lutfen birsayi giriniz:");
	scanf("%d",&sayi);
	
	(sayi<10) ? printf("1.kisi") : printf("2.kisi");*/

//�rnek2:

	/*int x,y,a;
	printf("Lutfen iki sayi giriniz:\n");
	scanf("%d%d",&x,&y);
	
	a=(x>y) ? x:y;
	printf ("sayinin degeri= %d", a);*/
	
//////////////////////////////////////// goto DEY�M� ////////////////////////////////	

/* �rnek 1: 1 den 5�e kadar olan say�lar� ekrana yazd�ran C program�n� yaz�n�z.  */
	
	/*int i=0;
	bas:
	i++;
	printf("%d\n",i);
	if(i<5)
	goto bas;*/
	
/* �rnek 2: 1 den 10�a kadar olan say�lar�n toplam�n� ekrana yazd�ran C program�n� yaz�n�z.*/

	/*int i=0,toplam=0;
	bas:
		i++;
		printf("%d\n",i);
		toplam=toplam+i;
		if(i<10)
	goto bas;	
	printf("TOPLAM:%d\n",toplam);*/
	
/* �rnek 3:Bir ��rencinin bir dersten ald��� vize ve final notlar� veriliyor. Bu notlara g�re ge�me notunu hesaplayan 
( Ge�me Notu= Vize*0.4+ Final*0.6), final ya da ge�me notlar�ndan birinin ya da ikisinin 50�den k���k olmas� durumunda b�t�nleme notunu 
isteyen ve buna g�re ge�me notunu hesaplayan, sonu�ta ge�me notunu ve GE�T� ya da KALDI �eklinde mesaj veren program� haz�rlay�n�z. */	
			
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
