#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

////////////////////// PO�NTER (��ARET��LER) ///////////////////

	/*int main()
	{int vize=70,final=80;
	printf("vize notu=%d\n",vize);
	printf("vize degiskeninin adresi=%d\n",&vize);
	printf("final notu=%d\n",final);
	printf("final degiskeninin adresi=%p\n",&final);
	getch();
	return 0;
	}*/

	/*int main()
	{int vize=70,final=80;
	printf("vize notu=%d\n",vize);
	printf("vize degiskeninin adresi=%d\n",&vize);
	printf("final notu=%d\n",final);
	printf("final degiskeninin adresi=%d\n",&final);
	
	return 0;
	}*/

//�rnek:
	
	/*int main()
	{int vize=70;
	int *pvize;
	pvize=&vize;
	printf("&vize:%p\n",&vize);
	printf("pvize:%p\n",pvize);
	printf("&pvize:%p\n",&pvize);
	printf("\n");
	printf("vize:%d\n",vize);
	printf("*pvize:%d\n",*pvize);
	printf("\n");
	*pvize=85;
	printf("vize:%d\n",vize);
	printf("*pvize:%d\n",*pvize);
	printf("\n");
	printf("&vize:%p\n",&vize);
	printf("pvize:%p\n",pvize);
	getch();
	return 0;
	}*/	
	
//�rnek:
	
	/*int main()
	{
		int a;
		int *pa;
		a=7;
		pa=&a;
		printf("pa'nin adresi:%p\n",&pa); //16'l�k tabanda
		printf("pa'nin adresi:%x\n",&pa); //16'l�k tabanda
		printf("pa'nin adresi:%d\n",&pa); //10'luk tabanda
		printf("pa'nin degeri:%p\n",pa);
		printf("a'nin adresi:%p\n",&a);
		printf("a'nin degeri:%d\n",a);
		printf("*pa'nin degeri:%d\n",*pa);
		printf("* ve & birbirlerinin tersidir...\n");
		printf("*&pa %p\n &*pa %p",*&pa,&*pa);
		getch();
		return 0;
		}*/
		
// NULL ��aret�i

	/*int main()
	{
		int *p;
		p=NULL;
		printf("p isaretcisinin degeri:%p\n",p);
		getch();
		return 0;
	}*/
	
	/*int main()
	{int *p;
	p=NULL;
	*p=5;
	printf("p isaretcisinin degeri:%p\n",p);
	printf("*p isaretcisinin degeri:%p\n",*p);
	
	getch();
	return 0;
	}*/
	
// ��aret�i Zinciri

	/*int main()
	{int vize=70;
	int *pvize;
	int **ppvize;
	pvize=&vize;
	ppvize=&pvize;
	printf("vize:%d\n",vize);
	printf("*pvize:%d\n",*pvize);
	printf("**ppvize:%d\n",**ppvize);
	printf("\n");
	printf("\n");
	printf("&vize:%p\n",&vize);
	printf("&pvize:%p\n",&pvize);
	printf("&ppvize:%p\n",&ppvize);
	
	getch();
	return 0;
	}*/

/////////////////////// ��aretci Aritmeti�i //////////////////

	/*int main()
	{char *pc,c='E';
	int *ps, s=35;
	pc=&c;
	ps=&s;
	printf("ilk degerler:*pc=%c *ps=%d\n",*pc,*ps);
	printf("yeni degerlerin adresleri: &pc=%p &ps=%p\n",pc,ps);
	
	pc++;
	ps++;
	
	printf("yeni degerler:*pc=%c *ps=%d\n",*pc,*ps);
	printf("yeni degerlerin adreleri:&pc=%p &ps=%p\n",pc,ps);
	
	getch();
	return 0;*/
	
///////////////////////// Diziler ve ��aret�iler //////////////////////

//�rnek 1:

	/*int main()
	{
	int vize[10]={70,80,98,90,55,35,20,78,65,15},*pa,*pb,*pc;
	pa=vize;
	pb=&vize[9];
	pc=&vize[2];
	printf("dizinin 1. elemani=%d\n",*pa);
	printf("dizinin 10.elemeni=%d\n",*pb);
	printf("dizinin 3. elemani=%d\n",*pc);
	
	getch();
	return 0;*/
	
//�rnek 2:
	
	/*int main()
	{
		int vize[10]={70,80,98,90,55,35,20,78,65,15},*pa;
		pa=vize;
		printf("isaretciler ile dizinin elemanlarinin yazdirilmasi:\n");
		printf("dizinin 1. elemani=%d\n",*pa);
		printf("dizinin 2. elemani=%d\n",*(pa+1));
		printf("dizinin 3. elemani=%d\n",*(pa+2));
		printf("dizinin 4. elemani=%d\n",*(pa+3));
		printf("dizinin 5. elemani=%d\n",*(pa+4));
		printf("dizinin 6. elemani=%d\n",*(pa+5));
		printf("dizinin 7. elemani=%d\n",*(pa+6));	
		printf("dizinin 8. elemani=%d\n",*(pa+7));
		printf("dizinin 9. elemani=%d\n",*(pa+8));
		printf("dizinin 10. elemani=%d\n",*(pa+9));
		
		getch();
		return 0;*/
		
//2.�rne�in for ile yap�l���.

	/*int main()
	{
		int vize[10]={70,80,98,90,55,35,20,78,65,15},*pa,i;
		pa=vize;
		printf("isaretciler ile dizinin elemanlarinin for ile yazdirilmasi:\n");
		for(i=0;i<=9;i++)
		{printf("dizinin %d. elemani=%d\n",i+1,*(pa+i));}
		
		getch();
		return 0;
 	}*/
 	
//3.�rnek: 10 elemanl� bir dizinin ortalamas�n� bir fonksiyonda bulan C program� yaz�n�z. Dizinin elemanlar�na i�aret�iler ile ula��n�z.
	
	/*float ortalama(int A[10]);
	
	int main()
	{
		int vize[10]={100,80,98,90,55,35,30,78,65,15};
		
		float sonuc;
		sonuc=ortalama(vize);
		printf("dizideki elemanalarin ortalamasi=%.3f\n",sonuc);
		printf("dizideki elemanlarin ortalamasi fonksiyonda isaretciler yoluyla hesaplandi...\n");
		getch();
		return 0;		
	}
	
	float ortalama(int A[10])
	{int *pvize,i,top=0;
	float ort;
	pvize=A;
	for(i=0;i<=9;i++)
	{top=top+ *(pvize+i);}
	ort=top/10.0;
	return ort;
	
	}*/
	
////////////////////////////////// Fonksiyonlar: adres ile �a��rma

//�rnek 1:Ana programdan girilen bir tam say�n�n k�p�n� adres ile �a��rma y�ntemiyle bulan bir c program� yaz�n�z.

	/* Kup(int *psayi);
	
	int main()
	{
		int sayi=5;
		printf("Sayinin esas degeri:%d\n",sayi);
		printf("Sayinin adresi:%p\n",&sayi);
		Kup(&sayi);
		printf("\nSayinin yeni degeri:%d\n",sayi);
		printf("Degisen sayinin adresi:%p\n",&sayi);
		getch();
		return 0;	
	}
	void Kup(int *psayi)
	{
		*psayi=(*psayi)*(*psayi)*(*psayi);
	}*/
	
	
//�rnek 2:Ana programdan girilen iki tam say�y� bir fonksiyonda yer de�i�tiren(swap i�elemi) C program�n� adres �a���rma y�ntemiyle yaz�n�z.
	
	/*void yerdegistir(int *pa,int *pb);
	
	int main()
	{
	int a,b;
	printf("a degerini giriniz:\n");
	scanf("%d",&a);
	printf("a degerinin adresi:%p\n",&a);
	printf("b degerini giriniz:\n",b);
	scanf("%d",&b);
	printf("b degerinin adresi:%p\n",&b);
	yerdegistir(&a,&b);
	printf("\n\n");
	printf("a degiskeninin yeni degeri:%d\n",a);
	printf("a degiskenin adresi:%p\n",&a);
	printf("b degiskenin yeni degeri:%d\n",b);
	printf("b degiskenin adresi:%p\n",&b);
	getch();
	return 0;	
	}
	
	void yerdegistir(int *pa , int *pb)
	{
		int gecici;
		gecici=*pa;
		*pa=*pb;
		*pb=gecici;
	}*/

//�rnek 3:Ana programdan girilen string ifadenin tersini bulan C program�n� adres ile �a��rma y�ntemiyle yaz�n�z.

/*void ters(char *str);

int main()
{
	char str[100];
	printf("String ifadeyi giriniz >> ");
	gets(str);
	ters(str);
	getch();
	return 0;
}

void ters(char *str)
{
	int i,top=0;
	for(i=0;str[i]!='\0';i++)
		top+=1;
	printf("String ifadenin tersi >> ");
	for(int i=top-1;0<=i;i--)
		printf("%c",str[i]);
}*/

//�rnek: Ana programdan girilen iki tamsay�n�n toplam�n� top fonksiyonunu i�aret�i olarak tan�mlad��� bir C program� yaz�n�z.
/*
int *top(int x,int y);

int main()
{
	int a,b, *ptop;
	printf("a degerini giriniz: ");
	scanf("%d",&a);
	printf("b degerini giriniz: ");
	scanf("%d",&b);
	ptop=top(a,b);
	printf("\n");
	printf("iki sayinin toplami=%d\n",*ptop);
	printf("ptop isaretci degiskeninmin sakladigi adres=%p\n",ptop);
	getch();
	return 0;
}

int *top(int x,int y)
{
	int sonuc,*psonuc;
	sonuc=x+y;
	psonuc=&sonuc;
	printf("psonuc isaretci degiskenin sakladigi adres=%p\n",psonuc);
	return psonuc;
}*/









