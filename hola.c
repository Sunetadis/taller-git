#include <stdio.h>

 int factorial(int n);
int resta(int a, int b);
int main(){
	pritnf("Hola mundo a todos en este grupo");
}

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n);
	}

}


