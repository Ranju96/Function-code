#include<stdio.h>
   void printHello();
   void printGoodbye();  //function declairation

    int main(){          //functioncall
	printHello();
	printGoodbye();
	return 0;
	}

void printHello() {	//functioDefinition
     printf("Hello!\n");
}
void printGoodbye(){
     printf("Goodbye\n");
}
