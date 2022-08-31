#include<stdio.h>
  void Namste();
  void benjour();


  int main(){
      printf("Enter f for franch & i for indian\n");
      char ch;
      scanf("%c", &ch);

      if(ch == 'i'){

	     indian();
             }      
      else 
            { 
	     franch();
            }

      return 0;
}

void Namste() {
	printf("Namste\n");
           }     
void Benjour(){
	printf("benjour");
           }
