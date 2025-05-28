#include <stdio.h>
int suma(int a, int b);
int factorial(int n);
int resta(int a, int b);
int main(){
	pritnf("Hola mundo a todos en este grupo");
}
int suma(int a, int b){
   return a+b;
}


int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n);
	}

}


