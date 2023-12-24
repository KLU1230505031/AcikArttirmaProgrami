# AcikArttirmaProgrami
 ACİKARTTİRMA
 
 Acikarttirmamızın mantıgı bir urun belirliyoruz ve bu urunumuze baslangıc degeri veriyoruz.Sonra acikarttirmamizdaki kisilerde
 urunumuzun baslangıc degerinden buyuk olmak sartıyla bir teklif verirler.Acikarttirma sonunda en yüksek teklifi veren kişi urune sahip olur.

 STRUCT
 
 Farklı verilerle tanımlanmıs degiskenleri tek bir yerde toplayıp farklı degiskenlere 
 tek bir isaretci ile erismesine izin veren bir bileske turudur.

TYPEDEF

Standart veri turlerini veya kullanıcı tanımlı yapıların farklı adlarla tanımlayabiliriz.


#include <stdio.h>
#include <stdlib.h>

typedef struct { //typedef ile acikarttirma struct yapısını olusturuyoruz.
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
  
  printf("Acik arttirmada satilacak urunu giriniz:"); //Acikarttirmada satisa sunacagımız bir urun giriyoruz.
  scanf("%s",&urun);
  
  printf("\nUrunun baslangic Degerini Giriniz:"); //belirledigimiz urunune acikarttırmamiz icin bir baslangic degeri veriyoruz.
  scanf("%lf",&urunbaslangicdegeri);
  
  
  printf("\nAcik artirmadaki katilimci sayisi:"); //acikarttirmamizdaki katilimci sayisini belirliyoruz 
  scanf("%d",&katilimcisayisi);
  
  acikarttirma teklifler[katilimcisayisi]; //katilimci sayimiza göre teklifler icin bir dizi olusturuyoruz.
  
  printf("\nAcik Arttirmadaki katilimcilar: \n\n");
  
  for(i=0;i<katilimcisayisi;i++) //acik arttirmadaki katilimcilarimizin  isimlerini tanımlıyoruz.
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
   	if(teklifler[i].teklif>enyuksekteklif) //en yuksek teklifi ve en yuksek teklifi veren kişiyi buluyoruz.
   	{
    enyuksekteklif=teklifler[i].teklif;
    kazanankatilimciindeksi=i;	
    }
   }
   // son olarak katilimcilarimiz arasından en yüksek teklifi veren kişiyi verdiği teklif ile ekranimiza yazdiriyoruz
   printf("En yuksek teklif : %lf TL   Acik arttirmamizin Kazanani: %s",enyuksekteklif,teklifler[kazanankatilimciindeksi].isim);break; 
  }
 
    return 0;
}
ACİKARTTİRMAPROGRAMİ EKRAN CİKTİLARİ
![Ekran görüntüsü 2023-12-24 192635](https://github.com/KLU1230505031/AcikArttirmaProgrami/assets/153401003/032384c4-0b5a-4d23-97da-77feff15daa5)

![Ekran görüntüsü 2023-12-24 192803](https://github.com/KLU1230505031/AcikArttirmaProgrami/assets/153401003/acb55208-49fb-4384-9e43-c761d21f3f30)
