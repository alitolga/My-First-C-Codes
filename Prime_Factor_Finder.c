#include <stdio.h>

int main(){

	int asal=2,sayi;
	printf("Enter a number:");
	scanf("%d",&sayi);
	
	while(sayi<=1){     // Sayýnýn asal çarpanlarýna ayrýlýp ayrýlamayacaðýný kontrol ettim.
		printf("Enter a valid number:");  // Eðer sayý çarpanlarýna ayrýlamýyorsa, çarpanlarýna ayrýlabilen (valid) bir sayý girilene kadar programý döngüye aldým.
		scanf("%d",&sayi);
	}
	
	printf("Prime factorization of %d: ",sayi);
	
	while(sayi!=1){     // Eðer çarpanlara ayrýlabilen (valid) bir sayýysa çarpanlarýný bulmak için sayýyý döngüye aldým.
	int count=0;
		while((sayi % asal)==0){   // Teker teker sayýlarý denedim.
			count++;               // Eðer sayý bölünüyorsa kaç defa bölündüðünü saydým.
			sayi=sayi/asal;
		}
	if(count!=0 && sayi==1){       // Son çarpana gelip gelmediðimizi kontrol ettim.
		printf("%d^%d",asal,count);
		break;
		}
	if(count!=0)                   // Sayýnýn baþka çarpanlarý varsa ilk çarpaný yazdýrýp döngüyü devam ettirdim.
		printf("%d^%d * ",asal,count);
	asal++;
		
	}


return 0;
}

