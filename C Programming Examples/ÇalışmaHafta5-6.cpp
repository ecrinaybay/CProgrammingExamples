#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

////////////////////////// C DÝLÝNDE MATEMATÝK KÜTÜPHANESÝNDEKÝ FONKSÝYONLAR //////////////////////////

	/*float x,y,z;
	printf("Lutfen bir tam sayi giriniz:\n");
	scanf("%f",&x);
	
	y=sqrt(x);
	printf("%.2f sayisinin karekoku=%.2f\n",x,y);
	
	y=exp(x);
	printf("%.2f sayisinin e^x degeri=%.2f\n", x,y);
	
	x=100.0;
	y=log10(x);
	printf ("%.2f sayisinin 10 tabanina gore logaritmasi=%.2f\n",x,y);
	
	x=100.0;
	y=log(x);
	printf ("%.2f sayisinin e tabanina gore logaritmasi=%.2f\n",x,y);
	
	x=7.9;
	y=fabs(x);
	printf ("%.2f sayisinin mutlak degeri=%.2f\n", x,y);
	
	x=-71.9;
	y=fabs(x);
	printf ("%.2f sayisinin mutlak degeri=%.2f\n", x,y);
	
	x=71.9;
	y=ceil(x);
	printf ("%.2f sayisindan buyuk en kucuk tamsayi=%.0f\n", x,y);
	
	x=71.9;
	y=floor(x);
	printf ("%.2f sayisindan kucuk en buyuk tamsayi=%.0f\n", x,y);
	
	x=2; y=7;
	z=pow(x,y);
	printf ("%.2f^%.2f degeri=%.2f\n", x,y,z);
	
	x=4;
	z=pow(x,0.5);
	printf ("%.2f in karekok degeri=%.2f\n", x,z);
	
	// sin(30)=???
	y=30*(3.14)/180;
	x=sin(y);
	printf ("sin(30) degeri=%.2f\n", x);
	
	// tan(45)=???
	y=45*(3.14)/180;
	x=tan(y);
	printf ("tan(45) degeri=%.2f\n", x);
	
	// cos(120)=???
	y=120*(3.14)/180;
	x=cos(y);
	printf ("cos(120) degeri=%.2f\n", x);*/
	
	
//Örnek 2:Ýkinci dereceden denklemin köklerini bulan programý yazýnýz.	

	/*float delta,a,b,c,x1,x2;
	
	printf("Lutfen x^2'nin katsayisini,x'in katsayini ve sabit degerini sirasiyla giriniz:\n");
	scanf("%f%f%f",&a,&b,&c);
	
	delta=b*b-4*a*c;
	if(delta>=0)
	
	{
	printf("Denklemin gercek kokleri vardir!\n");
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("Denklemin kokleri=%f %f",x1,x2);
	}
	
	else
	{
	printf("Denklemin gercek koku yoktur!");
	}*/
	
////////////////////////////////////  DÖNGÜLER	////////////////////////////////

//////////////////////////// for DÖNGÜ YAPISI /////////////////////////////

// Örnek 1: 1 ile 20 arasýndaki sayýlarýn yazdýran ve bu sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int i,toplam=0;
	
	for(i=1;i<=20;i++)
	{
	printf("%d\n",i);
	toplam=toplam+i;
	}
	printf("TOPLAM=%d",toplam);*/
	
/*Örnek 2: Baþlangýç ve bitiþ deðerleri girildiðinde bu deðerler ve aradaki deðerlerin toplamýný bulan C programýný yazýnýz.
•Baþlangýç ve bitiþ deðeri tamsayý olmalýdýr.
• Baþlangýç ve bitiþ deðerlerinin büyüklük-küçüklük durumu incelenmeli ve duruma göre for
döngü yapýsý kullanýlmalýdýr.*/

	/*int s,baslangic,bitis,toplam=0;
	
	printf("Baslangic ve bitis degerini giriniz:\n");
	scanf("%d %d",&baslangic,&bitis);
	
	if(baslangic<bitis)
	{
		for(s=baslangic;s<=bitis;s++)
		{
		toplam=toplam+s;
		printf("%d\n",s);
		}
	
	}
	else if(baslangic>bitis)
	{
		for(s=baslangic;s>=bitis;s--)
		{
		toplam=toplam+s;
		printf("%d\n",s);
		}
	}
	else
	{	
		toplam=toplam+s;
	}
	printf("Sayilarin toplami= %d",toplam);	*/
	
//Örnek 3: Klavyeden girilen bir tamsayýnýn faktöriyelini hesaplayan bir C programý yazýnýz.	
	
	/*int i,sayi,carp;
	
	printf("Lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
	 carp=carp*i;
	}
	printf("SONUC=%d",carp);*/
	
//Örnek 4: Klavyeden girilen bir tamsayýnýn asal sayý olup olmadýðýný bulan bir C programý yazýnýz.
	
	/*int sayi,bolen,i;
	
	printf("Lutfen asalligini kontrol etmek istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	
	
	for(i=1;i<=sayi;i++)
	{
	if(sayi%i==0)
	bolen++;
	}
	
	if(bolen==2)
	{
		printf("Bu sayi asal sayidir.\n");
	}
	else
	{
		{
		printf("Bu sayi asal sayi degildir ve pozitif bolenleri su sekildedir:\n");
		for(i=1;i<=sayi;i++)
		{
		if(sayi%i==0)	
		printf("%d\n",i);
		}	
	    }
	}*/
/////////////////////////////////// while DÖNGÜ YAPISI //////////////////////////////////
//Örnek 1: Negatif bir tamsayý girilene kadar girilen tüm sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int x,top=0,i=1;
	
	printf("%d. tam sayiyi giriniz:\n",i);
	scanf("%d",&x);
	
	while(x>=0)
	{
	top=top+x;
	i++;
	printf("\n%d. tam sayiyi giriniz:\n",i);
	scanf("%d",&x);	
	}
	
	if(x<0)
	{
	printf("\n %d. sayi negatif bir sayi oldugu icin islem  durdurulmustur:\n",i);	
	}
	
	printf("\nNegatif sayi girilinceye kadar tum sayilarin toplami= %d",top);*/
	
//Örnek 2: Belirsiz sayýda girilen sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int toplam=0,x,i=1;
	char komut='E';
	
	while((komut=='E')||(komut=='e'))
	{
	printf("\n%d. sayiyi giriniz:\n",i);
	scanf("%d",&x);
	
	toplam=toplam+x;
	i++;
	printf("\nBaska sayi varsa \"E\" veya \"e\" giriniz, aksi halde farkli bir harf giriniz: \n");
	komut=getche();	
	printf("\n");
	}
	printf("Sayilarin toplami=%d",toplam);*/

//Örnek 3: 1’den 20’ye kadar olan sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int i=0,toplam=0;
	while(i<20)
	{
		i++;
		toplam=toplam+i;
		printf("%d\n",i);	
	}
		printf("TOPLAM=%d",toplam);*/

/////////////////////////////// do while DÖNGÜ YAPISI //////////////////////////////
	
//Örnek 1: Negatif bir tamsayý girilene kadar girilen tüm sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int x,i=1,toplam=0;
	
	printf("%d. sayiyi giriniz:\n",i);	
	scanf("%d",&x);
	
	if (x<0) {printf ("Negatif sayi girildiginden sonlandirilmistir...");
	goto son;}
	
	do
	{
	toplam=toplam+x;
	i++;
	printf("%d.ci tamsayiyi giriniz: ",i);
	scanf("%d",&x);
	} while (x>=0);
	
	printf("Negatif sayi girilinceye kadar tum sayilarin toplami= %d ",toplam);
	son:*/
	
//Örnek 2: 1’den 20’ye kadar olan sayýlarýn toplamýný bulan bir C programý yazýnýz.

	/*int i=0,toplam=0;
	do
	{
	i++;
	printf("%d\n",i);
	toplam=toplam+i;	
	}while(i<20);	
	
	printf("TOPLAM=%d",toplam);*/
	
/////////////////////////////// break DEYÝMÝ ///////////////////////////////

//Örnek: break kullanýmýna bir örnek…

	/*int x;
	for(x=1;x<10;x++)
	{
	if(x==5) break;
	printf("%d",x);
	}
	printf("\nx=%d oldugu icin donguden cikildi.\n",x);*/
	
///////////////////////////// continue DEYÝMÝ ///////////////////////////////

	/*int x;
	for(x=1;x<=10;x++)
	{
		if(x==5) continue;
		printf(" %d ",x);
	}
	printf("\ncontinue ile x=5 atlandi.");*/
	
////////////////////////// ÝÇ-ÝÇE DÖNGÜLER /////////////////////////////////
	
	/*int i,j;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d---%d\n",i,j);
		}
	}*/
	
//Örnek 1: Ýki basamaklý tüm asal sayýlarý listeleyen bir C programý yazýnýz.

	/*int i, j, bs;
	
	for (i=10;i<=99;i++)
	
	{ bs=0;
	for (j=1;j<=i;j++)
	{
	if(i%j==0) bs++;
	}
	
	if(bs==2) printf("%d bir asal sayidir.\n", i);
	}*/

//Örnek 2: 3 haneli sayýlar içerisinde basamaklarýnýn küplerinin toplamý kendisine eþit olan sayýlarý bulan bir C programý yazýnýz.

	/*int i,j,a,b,c;
	
	for(i=100;i<=999;i++)
	{
	a=i/100;
	b=(i-100*a)/10;
	c=i-((100*a)+(10*b));
	
	if(i==a*a*a+b*b*b+c*c*c) printf("%d\n",i);
	}*/
 
/*Örnek 3: Klavyeden girilecek bir n tamsayýsý için Aþaðýdaki görüntüyü elde eden programý while ve do-while döngülerini birer kere 
kullanarak yazdýran bir program yazýnýz.*/

	/*int i=1,j,n;
	printf ("bir n sayisi giriniz: ");
	scanf("%d= ",&n);
	printf ("\n");
	while(i<=n)
	{
	j=1;
	do
	{
	printf ("%d",j);
	j++;
	}while (j<=i);
	printf ("\n");
	i++;
	}*/

//Ayný soruyu iç-içe for döngüleriyle yapalým…

	/*int i,j,n;
	
	printf("Lutfen bir n degeri giriniz:\n");
	scanf("%d",&n);
	
	printf ("\n");
	for (i=1;i<=n;i++)
	{
	for (j=1;j<=i;j++)
		{
		printf ("%d",j);
		}
	printf ("\n");
	}*/






	
getch();
return 0;

	
}
