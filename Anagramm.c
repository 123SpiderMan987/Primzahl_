#include <stdio.h>  

int main(){

char wort1[31]; 
char wort2[31]; 
int anagramm = 1;
int anzahl1[26] = {0}; 
int anzahl2[26] = {0}; 

printf("Geben Sie das 1. Wort ein (<= 30 Zeichen): ");
scanf("%30s", &wort1);
printf("Geben Sie das 2. Wort ein (<= 30 Zeichen): ");
scanf("%30s", &wort2); 
for(int i = 0; wort1[i] != '\0'; i++){
if(wort1[i] >= 'A' && wort1[i] <= 'Z') {
wort1[i] = wort1[i] + 32;
}}
for(int i = 0; wort2[i] != '\0'; i++){
if(wort2[i] >= 'A' && wort2[i] <= 'Z') {
wort2[i] = wort2[i] + 32;
}}
printf("%s und %s\n", wort1, wort2);

for(int i = 0; wort1[i] != '\0'; i++){
anzahl1[wort1[i] - 'a']++;
}
for(int i = 0; wort2[i] != '\0'; i++){
anzahl2[wort2[i] - 'a']++;  
}

for(int x = 0; x < 26; x++){
if(anzahl1[x] != anzahl2[x]){
anagramm = 0; 
break; 
}}

if(anagramm){
printf("Es handelt sich um Anagramme\n");
} else {
printf("Es handelt sich nicht um Anagramme\n"); 
} 

return 0; 
}