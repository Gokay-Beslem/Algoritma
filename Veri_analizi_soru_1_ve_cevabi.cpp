/* SORU 1.) 0-100 (dahil) aras�nda 500 adet rastgele tamsay� veri �retiniz, uygun bir dizi yap�s� �zerinde saklay�n�z, 
ekrana yazd�r�n�z.  */
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
   
    
    cout<<"0-100 (dahil) aras�nda 500 adet rastgele tamsay� :"<<endl;
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

