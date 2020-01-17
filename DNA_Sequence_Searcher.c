#include <stdio.h>

int main(){
	

while (1){  // �lk d�ng� program�n s�rekli �al��mas� i�in
	
char DNA;
int i,count=0,Acount=0, Tcount=0, Gcount=0, Ccount=0; // Bir d�ng� de�i�keni tuttum ve n�kleotidlerin say�s�n� tuttum.
int writer=0;  // DNA seq. yaz�s� bir kere yaz�ls�n diye bir kontrol de�i�keni tuttum.


printf("Enter a seq.: ");

	for(i=0;i<25;i++){  // 25. karakterden sonras�n� almamas� i�in for'la d�nd�rd�m.
		DNA=getchar();
		count++; // Bu de�i�ken 25. karakterden sonras�n�n input olarak al�nmas�n� �nlemek i�in.
		if(writer==0){  // Yaz� bir kere yaz�ls�n diye.
			printf("DNA seq.: ");
			writer++;
		}
		if(DNA=='X' || DNA=='x' || DNA=='\n')
			break;
		if((Acount + Tcount + Gcount + Ccount == 10))  // Program� bitirecek ko�ullar.
			break;
			
		switch (DNA){
			case 'A':{
				if(Acount==Tcount || Acount<Tcount){  // Bir n�kleotid bir kere al�nd�ktan sonra e�ini bulana kadar bir daha al�nmayacak.
				putchar(DNA);
				Acount++;
				}
				break;
			}
			case 'a':{
				if(Acount==Tcount || Acount<Tcount){
				putchar('A');
				Acount++;
				}
				break;
			}
			case 'T':{
				if(Acount==Tcount || Tcount<Acount){
				putchar(DNA);
				Tcount++;
				}
				break;
			}
			case 't':{
				if(Acount==Tcount || Tcount<Acount){
				putchar('T');
				Tcount++;
				}
				break;
			}
			case 'G':{
				if(Gcount==Ccount || Gcount<Ccount){
				putchar(DNA);
				Gcount++;
				}
				break;
			}
			case 'g':{
				if(Gcount==Ccount || Gcount<Ccount){
				putchar('G');
				Gcount++;
				}
				break;
			}
			case 'C':{
				if(Gcount==Ccount || Ccount<Gcount){
				putchar(DNA);
				Ccount++;
				}
				break;
			}
			case 'c':{
				if(Gcount==Ccount || Ccount<Gcount){
				putchar('C');
				Ccount++;
				}
				break;
			}	
		}
	
	}
	
printf("\n");

/* For d�ng�s�nden ��k���n sebebine g�re sonu�lar bast�r�lacak. */

if(DNA == 'x' || DNA == 'X'){
	printf("Terminated!\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	break;  // X girildiyse program kapanacak. 
	}

else if(Acount==0 && Gcount==0 && Tcount==0 && Ccount==0){
	printf("No data to test!\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;  // X girilmediyse �al��maya devam edecek.
}

else if(Acount==Tcount && Gcount==Ccount){
	printf("Healthy!\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}

else if(Acount>Tcount && Gcount>Ccount){
	printf("Disease A and G nucleotides.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}

else if(Acount>Tcount && Ccount>Gcount){
	printf("Disease A and C nucleotides.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Tcount>Acount && Gcount>Ccount){
	printf("Disease T and G nucleotides.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Tcount>Acount && Ccount>Gcount){
	printf("Disease T and C nucleotides.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Acount>Tcount){
	printf("Disease A nucleotide.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Tcount>Acount){
	printf("Disease T nucleotide.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Gcount>Ccount){
	printf("Disease G nucleotide.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}
else if(Ccount>Gcount){
	printf("Disease C nucleotide.\n");
	if(count == 25 || (Acount + Tcount + Gcount + Ccount == 10)){
		while(DNA!='\n'){
			DNA = getchar();
		}
	}
	continue;
	}


}



return 0;
}

