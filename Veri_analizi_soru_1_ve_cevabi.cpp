/* SORU 1.) 0-100 (dahil) arasýnda 500 adet rastgele tamsayý veri üretiniz, uygun bir dizi yapýsý üzerinde saklayýnýz, 
ekrana yazdýrýnýz.  */
#include <iostream>
#include <locale.h>
#include <cctype>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;


#define kapasite 500
int main() {
    setlocale(LC_ALL, "Turkish");	
    
    srand(time(0));
    int veri[kapasite];
    int sayi,yedek;
    int topla=0;
    int max,min;
   
    
    cout<<"0-100 (dahil) arasýnda 500 adet rastgele tamsayý :"<<endl;
    for(int i=0;i<kapasite;i++)
    {
	sayi={rand() % 101};
	veri[i]=sayi;
    cout<<veri[i]<<endl;
    topla+=veri[i];
}
	cout<<endl<<endl<<endl;
	
	return 0;
}

