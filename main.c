/********************************************************************************
* main.c: Demonstration av utskrift i C. I detta avsnitt sker enbart utskrift
*         i terminalen via standardutenheten stdout. Det är också möjligt att
*         skriva till filer genom att öppna filsökvägen via en filpekare.
* 
*         För att skriva ut data som inte utgör ren text så används olika typer
*         formatspecificerare, som indikerar vad för typ av data som skall
*         skrivas ut. Alla formatspecificerare börjat med ett %, exempelvis
*         %d (decimal) eller %i (integer) för signerade heltal (heltal som
*         både kan vara positiva och negativa).
* 
*         För flyttal används formatspecificere %f och %g. För double används
*         %lf och %lg, där l står för long, vilket indikerar att det som skall
*         skrivas ut är ett långt flyttal (många decimaltecken). Vid utskrift
*         begränsas flyttal till sex decimaler, så vi kan slopa l:et, men vid
*         inmatning spelar det roll hur många decimaler som kan läsas in.
* 
*         För enstaka tecken (char) används formatspecificerare %c (character).
*         För strängar (multipla tecken/charfält) används formatspecificerare 
*         %s (string).
* 
*         För osignerade heltal (tänk naturliga tal, alltså tal 0 och uppåt,
*         inga negativa tal), så används formatspecificerare %u (unsigned). 
*         Ibland används %lu och %zu beroende på vilken osignerad datatyp som
*         skall skrivas ut. Datatypen size_t, där formatspecificerare %zu 
*         används är väldigt förekommande.
********************************************************************************/
#include <stdio.h> /* Standardbibliotek för utskrift och inmatning. */

/********************************************************************************
* main: Genomför utskrift av olika typer av data.
********************************************************************************/
int main(void)
{
   const int x = 3;
   const double y = 4.75;

   printf("%d + %lg = %lg\n", x, y, x + y); /* Skriver ut "3 + 4.75 = 7.75". */

   const char c = '?';
   printf("Character: %c\n", c); /* Skriver ut "Character: ?". */

   const char name[] = "Kalle Anka";
   printf("Name: %s\n", name); /* Skriver ut "Name: "Kalle Anka". */

   const size_t size = 100;
   printf("Size: %zu\n", size); /* Skriver ut "Size: 100". */

   return 0;
}