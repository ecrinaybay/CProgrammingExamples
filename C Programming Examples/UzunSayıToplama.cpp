#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* string ifedelerde uzunluk  belirtilmeden veri giri�i yap�labilir. 
Dinamik bellek kullan�m� ile kullan�c�n�n  girdi�i string ifade kadar bellekten yer ay�rabilriz.
double atod(*char) fonksiyonu ile string ifadeyi reel say�ya �evirip  iki say�y� toplayabiliriz.
 */
 
 int main(){
 	char *s1;
 	string _s1;
	char *s2;
	double sayi1,sayi2;
	double sonuc;

	int basamak_sayisi1,basamak_sayisi2;
	
	printf("Toplamak istediginiz 1. ve 2.sayinin basamak uzunluklarini sirasiyla giriniz:");
	scanf("%d",&basamak_sayisi1);
	scanf("%d",&basamak_sayisi2);
	s1=(char*)calloc(basamak_sayisi1,sizeof(char));//calloc fonksiyonu stdlib.h k�t�phanesinde bulunur.
	s2=(char*)calloc(basamak_sayisi2,sizeof(char));
	
	
	
	
 	printf("Sayilari giriniz:");
	//char gets(char *s1);
    //char gets(char *s2);
    //gets(s1);
    //gets(s2);
    scanf("%s",&s1);
  	scanf("%s",&s2);
    sayi1=atof(s1); // atof fonksiyonu bir katar� reel say�ya �evirir
 	sayi2=atof(s2);
 	sonuc=sayi1+sayi2;

 	
    printf("Sonuc:%lf ",sonuc);
 	//printf("Sonuc:%f ",(sayi1+sayi2));
 	
 	
 }
