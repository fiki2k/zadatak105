// Naci produkt matrice.

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
	int a[10][10],b[10][10],produkt[10][10];    
	int r,s,i,j,k;

	printf("unesi broj redova=");    
	scanf("%d",&r);
	    
	printf("unesi broj stupaca=");    
	
	scanf("%d",&s); 
	   
	printf("Unesi elemente prve matrice=\n");    
for(i=0;i<r;i++)    
{    
	for(j=0;j<s;j++)    
{    
	scanf("%d",&a[i][j]);    
}    
}   
 
	printf("Unesi elemente druge matrice=\n");    
for(i=0;i<r;i++){
    
	for(j=0;j<s;j++){
	    
	scanf("%d",&b[i][j]);    
}    
}    

// Mnozenje matrica    
printf("Mnozenje matrica=\n");    
for(i=0;i<r;i++){    
	for(j=0;j<s;j++){
	    
	produkt[i][j]=0;    
	for(k=0;k<s;k++){    
		produkt[i][j]+=a[i][k]*b[k][j];    
	}    
}
}    
//Ispis rezultata  
for(i=0;i<r;i++)    
{    
	for(j=0;j<s;j++){    
	printf("%d\t",produkt[i][j]);    
	}    
	
	printf("\n");    	
}    
return 0;  
}  
