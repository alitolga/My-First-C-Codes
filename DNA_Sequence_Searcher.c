#include <stdio.h>

int main(){
	

while (1){  // Ýlk döngü programýn sürekli çalýþmasý için
	
char DNA;
int i,count=0,Acount=0, Tcount=0, Gcount=0, Ccount=0; // Bir döngü deðiþkeni tuttum ve nükleotidlerin sayýsýný tuttum.
int writer=0;  // DNA seq. yazýsý bir kere yazýlsýn diye bir kontrol deðiþkeni tuttum.


printf("Enter a seq.: ");

	for(i=0;i<25;i++){  // 25. karakterden sonrasýný almamasý için for'la döndürdüm.
		DNA=getchar();
		count++; // Bu deðiþken 25. karakterden sonrasýnýn input olarak alýnmasýný önlemek için.
		if(writer==0){  // Yazý bir kere yazýlsýn diye.
			printf("DNA seq.: ");
			writer++;
		}
		if(DNA=='X' || DNA=='x' || DNA=='\n')
			break;
		if((Acount + Tcount + Gcount + Ccount == 10))  // Programý bitirecek koþullar.
			break;
			
		switch (DNA){
			case 'A':{
				if(Acount==Tcount || Acount<Tcount){  // Bir nükleotid bir kere alýndýktan sonra eþini bulana kadar bir daha alýnmayacak.
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

/* For döngüsünden çýkýþýn sebebine göre sonuçlar bastýrýlacak. */

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
	continue;  // X girilmediyse çalýþmaya devam edecek.
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

