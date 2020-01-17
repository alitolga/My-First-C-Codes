#include <stdio.h>

int a,b,c,j=0;
float L,U,x;  
float kok[2];  // I declare the global variables.

float equation(int a, int b, int c, float x){
	return a*x*x + b*x + c;  // I used this function to return the equation.
}

float bisection (float L, float U){  //  The function to do bisection.

	// If found, it returns the root.
	if (equation(a,b,c,L)<0.001 && equation(a,b,c,L)>-0.001){
		return L;
	}
	else if (equation(a,b,c,U)<0.001 && equation(a,b,c,U)>-0.001){
		return U;
	}
		
	// Else it narrows the interval by taking the mean of the points and comparing them.
	else if(equation(a,b,c,L)*equation(a,b,c,(L+U)/2)<0){
		return bisection (L,(L+U)/2);
		}
		
	else{
		return bisection ((L+U)/2,U);
		}
	}

void findRoots(float L, float U){  // The function to print the roots
	
	float i;  //My iterator
	for(i=L;i<U;i++){  // I divide the given domain into small intervals. 
	// (In this function the length of the intervals are 1 since it's given that the difference between the roots will be more than one.)
	// If wanted i can be increased smaller to narrow the interval.	
		
		if((equation(a,b,c,i)*equation(a,b,c,i+1))<0){  // If there is a root in the interval, I find it using bisection.
			kok[j] = bisection(i,i+1);  // I used a global array to keep all the roots I found.
			j++;
			}
		
		else if ((equation(a,b,c,i)*equation(a,b,c,i+1)==0) && ((i+1)!= U)){  // If the limit of the interval is a root, I check if it's a root ot not.
			if ((equation(a,b,c,i)*equation(a,b,c,i+1.002))<0){
				kok[j] = i+1;
				j++;
			}
		}
	}
	
	// I check if there are roots or not. If found, I print the roots.
	if((kok[0] == U+1) && (kok[1] == U+1))
		printf("No roots found");
	else if((kok[0] != U+1) && (kok[1] == U+1))
		printf("Root: x=%.3f",kok[0]);
	else if((kok[0] == U+1) && (kok[1] != U+1))
		printf("Root: x=%.3f",kok[1]);
	else
		printf("Roots: x=%.3f, x=%.3f",kok[0],kok[1]);
	
}


int main(){

printf("Please enter 5 numbers with spaces\n");
printf("First 3 will be the a,b and c values of equation ax^2 + bx + c\n");
printf("The other two will be the lower bound and the upper bound of the domain that we will be searching for roots.\n");
printf("Also since this is a bisection method it cannot find double roots.\n");
scanf("%d %d %d %f %f",&a,&b,&c,&L,&U);  // I get the values of the equation and the domain.

kok[0] = U+1;  // I first initalize a value outside the domain so I won't print them if I can't find any roots.
kok[1] = U+1;

printf("Entered equation: %dx^2 + %dx + %d\n",a,b,c);
printf("Domain: %.0f, %.0f\n",L,U);  // I print the values of the equation and the domain.
findRoots(L,U);  // I call my function.


return 0;
// I have returned 0 because all successful programs must return 0.

}





