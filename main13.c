#include <stdio.h>
#include <stdlib.h>

typedef struct { //typedef ile acikarttirma struct yap�s�n� olusturuyoruz.
	char isim[100];
	double teklif;
	int kazanankatilimci;
} acikarttirma;
  
int main() {
  
  int i;
  int katilimcisayisi;
  char urun[50];
  double urunbaslangicdegeri;
  double yeniteklif;
  
  printf("********ACIK ARTTIRMAMIZA HOSGELDINIZ********\n\n\n");
  
  printf("Acik arttirmada satilacak urunu giriniz:"); //Acikarttirmada satisa sunacag�m�z bir urun giriyoruz.
  scanf("%s",&urun);
  
  printf("\nUrunun baslangic Degerini Giriniz:"); //belirledigimiz urunune acikartt�rmamiz icin bir baslangic degeri veriyoruz.
  scanf("%lf",&urunbaslangicdegeri);
  
  
  printf("\nAcik artirmadaki katilimci sayisi:"); //acikarttirmamizdaki katilimci sayisini belirliyoruz 
  scanf("%d",&katilimcisayisi);
  
  acikarttirma teklifler[katilimcisayisi]; //katilimci sayimiza g�re teklifler icin bir dizi olusturuyoruz.
  
  printf("\nAcik Arttirmadaki katilimcilar: \n\n");
  
  for(i=0;i<katilimcisayisi;i++) //acik arttirmadaki katilimcilarimizin  isimlerini tan�ml�yoruz.
  {
  	printf("\nKatilimci %d lutfen isminizi giriniz: ",i+1);
  	scanf("%s",teklifler[i].isim);
  }
  
  int kazanankatilimciindeksi=-1;
  double enyuksekteklif =0;
  
  printf("\n\n*******Acik arttirmamiz basliyor ********\n\n");
  
  while(1)
  {  
   for(i=0;i<katilimcisayisi;i++) 
   {
   	printf("%s lutfen teklifinizi giriniz:",teklifler[i].isim); //katilimcilarimizdan tekliflerini aliyoruz
   	scanf("%lf",&teklifler[i].teklif);
   	
   	if(urunbaslangicdegeri>teklifler[i].teklif) //urunumuzun baslangic degerinden dusuk bi teklif gelirse program sonlanir.
   	{
   		printf("%s verdiginiz teklif gecersizdir!!",teklifler[i].isim);return 1;
	}
   	if(teklifler[i].teklif>enyuksekteklif) //en yuksek teklifi ve en yuksek teklifi veren ki�iyi buluyoruz.
   	{
    enyuksekteklif=teklifler[i].teklif;
    kazanankatilimciindeksi=i;	
    }
   }
   // son olarak katilimcilarimiz aras�ndan en y�ksek teklifi veren ki�iyi verdi�i teklif ile ekranimiza yazdiriyoruz
   printf("En yuksek teklif : %lf TL   Acik arttirmamizin Kazanani: %s",enyuksekteklif,teklifler[kazanankatilimciindeksi].isim);break; 
  }
 
    return 0;
}
  
  
    
    
    
	

