#include<stdio.h>
#include<conio.h>
#include<math.h>

#define OGR 3
#define SINAV 4

///////////////////////////// ÝKÝ BOYUTLU DÝZÝLER (MATRÝSLER) ////////////////////////////
/////////////////////// Matrislere Baþlangýç Deðeri Verme ////////////////////////

int main()
{
	/*int A[2][3]={{1,0,3},{4,5,6}},B[2][3]={1,2,3,4,5},C[2][3]={{1,2},{4}};
	int i,j;
	
	printf("Satir satir A matrisinin elemanlari:\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++)
			printf("%d",A[i][j]);
			printf("\n");}
		printf("Satir satir B dizisinin elemanlari:\n");
			for(i=0;i<=1;i++){
			 
			 for(j=0;j<=2;j++)
			  printf("%d",B[i][j]);
			  
			printf("\n");}
		printf("Satþr satir C dizisinin elemanlari:\n");
			for(i=0;i<=1;i++){
			
			for(j=0;j<=2;j++)
			printf("%d",C[i][j]);
			
			printf("\n");}*/
			
/*  Klavyeden sayýsal deðer atamak:
4 adet öðrencinin 3 adet sýnav notunu bir A matrisinde saklayan ve bu matrisi ekrana
yazdýran bir C programý yazýnýz. */

	/*int A[4][3],i,j;
	
	for(i=0;i<=3;i++){
		for(j=0;j<=2;j++)
		{
			printf("Lutfen %d.ogrencinin %d.notunu griniz:\n",(i+1),(j+1));
			scanf("%d",&A[i][j]);
		}
	}
	printf( " 			[1] [2] [3]" );
	
	for(i=0;i<=3;i++){
	 	printf("\n%d. ogrencinin notu [%d] ",i+1,i+1);	
		for(j=0;j<=2;j++)
		printf( "%-5d", A[i][j] );}*/
		
/*  Örnek: Bir hastanedeki 5 hastanýn günde 3 kez ateþi ölçülüyor.
a-) Her bir hastanýn ortalama ateþini bulan,
b-) Her bir ölçümdeki ortalama ateþ deðerini bulan,
c-) Her bir hastanýn günlük ölçümlerinden kaç tanesinin hastanýn ortalama ateþinden fazla olduðunu bulan,
bir C programý yazýnýz. */


	 /*int i,j; float A[5][3], B[5], ort,x,top;
	for (i=0;i<=4;i++)
	{ for (j=0;j<=2;j++)
	{
	printf("%d. hastanin %d. olcum degerini giriniz: ",i+1,j+1);
	scanf ("%f",&x);
	A[i][j]=x;
	}
	}
	
	printf( "Satir satir hasta-olcum matrisinin elemanlari:\n" );
	for ( i = 0; i <= 4; i++ ) //i ler satýrlarý, j ler sütünlarý temsil eder
	{
	for ( j = 0; j <= 2; j++ )
	{
	printf( "%4f ", A[ i ][ j ] );
	}
	printf( "\n" ); //satýrlar deðiþirken bir aþaðý satýra geçer...
	}
	
	for (i=0;i<=4;i++)
	{ top=0;
	for (j=0;j<=2;j++)
	{
	top=top+A[i][j];
	}
	ort=top/3;
	B[i]=ort; //a þýkký
	printf ("%d. hastanin ortalama atesi= %f\n",i+1,ort);
	} 
	
	// c þýkký
	for (i=0;i<=4;i++)
	{ for (j=0;j<=2;j++)
	{
	if (A[i][j]>B[i]) printf ("%d. hastanin %d. olcum degeri ortalamadan buyuktur\n",i+1,j+1);
	}
	} 
	
	// b þýkký
	for (i=0;i<=2;i++) //sütün-ateþ deðerleri
	{ top=0;
	for (j=0;j<=4;j++) //satýr-öðrenciler
	{
	top=top+A[j][i];
	}
	ort=top/5;
	printf ("%d. olcumdeki degerlerin ortalamasi:%f\n",i+1,ort);
	}*/
	
	
/*  Soru: 3 öðrencinin bir dersten aldýðý 4 farklý sýnavýn notlarý veriliyor.
En yüksek notu, en düþük notu ve her öðrencinin notlarýný ortalamasýný aþaðýdaki
þekilde yazdýran bir C programý yazýnýz. */
	
	/*int enk,enb,i,j,top;
	const int A[OGR][SINAV]= {{78,95,80,65},{96,90,40,56},{70,95,86,89}};
	float ort[OGR];
	
	enk=100;
	 for(i=0;i<=OGR-1;i++)
	  for(j=0;j<SINAV-1;j++)
	   if(A[i][j]<enk)
	    enk=A[i][j];
		
	enb=0;
	for(i=0;i<=OGR-1;i++)
	 for(j=0;j<=SINAV-1;j++)
	  if(A[i][j]>enb)
	   enb=A[i][j];
	   
	for(i=0;i<=OGR-1;i++){
	  top=0;
	  for(j=0;j<=SINAV-1;j++){
	  	top+=A[i][j];
	  }
	  ort[i]=top/SINAV; 
	}   			
	
	printf("		 [1]  [2]  [3]  [4]");
	 for(i=0;i<OGR-1;i++){
	   printf("\nogrenciNotlari[%d]",i+1);
	   
	   for(j=0;j<=SINAV-1;j++)
	     printf("%-5d",A[i][j]);
	 }
	
	printf("\n\nEn dusuk not:%d\nEn yuksek not:%d\n",enk,enb);
	
	for(i=0;i<=OGR-1;i++)
	printf("Ogrenci %d icin ortalama:%.2f\n",i+1,ort[i]);*/
	
/*  Örnek: Klavyeden 3*3 lük iki matris giriliyor. Ýki matrisin toplamýný ve farkýný bulan programý oluþturunuz. */

	/*int A[3][3],B[3][3],TOP[3][3],FARK[3][3];
	int i,j,x;
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		 printf("A matrisinin %d. satir %d. sutun elemanini giriniz:",i+1,j+1);
		 scanf("%d",&x);
		 A[i][j]=x;
		}
	}
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		 printf("B matrisinin %d. satir %d. sutun elemanini giriniz:\n",i+1,j+1);
		 scanf("%d",&x);
		 B[i][j]=x;
		}
	}
	
	printf("Satir satir A matrisinin elemanlari:\n");
		for(i=0;i<=2;i++)
		{
		   for(j=0;j<=2;j++)
		   {
		   	printf("%4d",A[i][j]);
		    }	
		    printf("\n");
		}
		
	printf("Satir satir B matrisinin elemanlari:\n");
	    for(i=0;i<=2;i++)
	    {
	       for(j=0;j<=2;j++)
		   {
		   	printf("%4d",B[i][j]);
			}	
		printf("\n");
		}
		
		for(i=0;i<=2;i++)
		 {
		  for(j=0;j<=2;j++)
		   {
		   	TOP[i][j]=A[i][j]+B[i][j];
		   	FARK[i][j]=A[i][j]-B[i][j];
		   }
		 } 
		 
	printf("A+B matrisinin elemanlari:\n");
		for(i=0;i<=2;i++)
		  {
		  	for(j=0;j<=2;j++)
		  	{
		  	printf("%4d",TOP[i][j]);	
			}
		printf("\n");	
		  }
		  
	printf("A-B matrisinin elemanlari:\n");
		for(i=0;i<=2;i++)
		{ for(j=0;j<=2;j++)
		  {printf("%4d",FARK[i][j]);}
		printf("\n");	
		}*/
	
		  	  
		  
	/*int A[3][3],B[3][3],CARP[3][3],i,j,x,k,top;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("A matrisinin %d. satir %d. sutun elemanini giriniz:\n",i+1,j+1);
			scanf("%d",&x);
			A[i][j]=x;
		}
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("B matrisinin %d. satir %d. sutun elemanini giriniz:\n",i+1,j+1);
			scanf("%d",&x);
			B[i][j]=x;
		}
	}
	
	printf("Satir satir A matrisinin elemanlari:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}
	
	printf("Satir satir B matrisinin elemanlari:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%4d",B[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			top=0;
			for(k=0;k<=2;k++)
			{
				x=A[i][k]*B[k][j];
				top=top+x;
			}
			CARP[i][j]=top;
		}
	}
	
	printf("C=A*B matrisinin elemanlari:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%4d",CARP[i][j]);
		}
		printf("\n");
	}*/



			
			
getch();
return 0;			

	
	
}

