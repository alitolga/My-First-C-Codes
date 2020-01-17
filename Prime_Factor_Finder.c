#include <stdio.h>

int main(){

	int asal=2,sayi;
	printf("Enter a number:");
	scanf("%d",&sayi);
	
	while(sayi<=1){     // Say�n�n asal �arpanlar�na ayr�l�p ayr�lamayaca��n� kontrol ettim.
		printf("Enter a valid number:");  // E�er say� �arpanlar�na ayr�lam�yorsa, �arpanlar�na ayr�labilen (valid) bir say� girilene kadar program� d�ng�ye ald�m.
		scanf("%d",&sayi);
	}
	
	printf("Prime factorization of %d: ",sayi);
	
	while(sayi!=1){     // E�er �arpanlara ayr�labilen (valid) bir say�ysa �arpanlar�n� bulmak i�in say�y� d�ng�ye ald�m.
	int count=0;
		while((sayi % asal)==0){   // Teker teker say�lar� denedim.
			count++;               // E�er say� b�l�n�yorsa ka� defa b�l�nd���n� sayd�m.
			sayi=sayi/asal;
		}
	if(count!=0 && sayi==1){       // Son �arpana gelip gelmedi�imizi kontrol ettim.
		printf("%d^%d",asal,count);
		break;
		}
	if(count!=0)                   // Say�n�n ba�ka �arpanlar� varsa ilk �arpan� yazd�r�p d�ng�y� devam ettirdim.
		printf("%d^%d * ",asal,count);
	asal++;
		
	}


return 0;
}

