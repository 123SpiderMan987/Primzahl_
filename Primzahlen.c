#include <stdio.h>

int main() {

int x, y;
int Primzahl = 1; 
printf("Geben Sie eine Zahl ein: "); 
scanf(" %d", &x); 
if(x == 0 || x == 1){
Primzahl = 0;
}
for(int y = 2; y < x; y++ ){
if(x % y == 0){
Primzahl = 0; 
}}
if(Primzahl){
printf("%d ist eine Primzahl\n", x);
} else {
printf("%d ist keine Primzahl\n", x); 
}  
return 0;
}