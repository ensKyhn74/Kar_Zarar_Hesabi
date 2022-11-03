#include <stdio.h>
// klavyeden malın alış ve satış fiyati girilir,kar mı zarar mı edildiği hesaplanır

int main() 

{
 
  int alis,satis;
 
  printf("mali ne kadara aldiginizi girin: ");		
  scanf("%d",&alis);	
 	
  printf("mali ne kadara sattiginizi girin: ");	
  scanf("%d",&satis);
 	
  if(satis > alis)
  {	
   int kar = satis - alis;      
   printf("%d lira kar ettiniz.",kar);
  }
  
  else if(alis > satis)
  {
   int zarar = alis - satis;      
   printf("%d lira zarar ettiniz.",zarar);	
  }
  
  else
  {
   printf("ne kar ne de zarar ettiniz.");	
  }
  
  return 0;

}