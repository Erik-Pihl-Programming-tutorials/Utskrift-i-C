/********************************************************************************
* main.c: Demonstration av utskrift i C. I detta avsnitt sker enbart utskrift
*         i terminalen via standardutenheten stdout. Det �r ocks� m�jligt att
*         skriva till filer genom att �ppna fils�kv�gen via en filpekare.
* 
*         F�r att skriva ut data som inte utg�r ren text s� anv�nds olika typer
*         formatspecificerare, som indikerar vad f�r typ av data som skall
*         skrivas ut. Alla formatspecificerare b�rjat med ett %, exempelvis
*         %d (decimal) eller %i (integer) f�r signerade heltal (heltal som
*         b�de kan vara positiva och negativa).
* 
*         F�r flyttal anv�nds formatspecificere %f och %g. F�r double anv�nds
*         %lf och %lg, d�r l st�r f�r long, vilket indikerar att det som skall
*         skrivas ut �r ett l�ngt flyttal (m�nga decimaltecken). Vid utskrift
*         begr�nsas flyttal till sex decimaler, s� vi kan slopa l:et, men vid
*         inmatning spelar det roll hur m�nga decimaler som kan l�sas in.
* 
*         F�r enstaka tecken (char) anv�nds formatspecificerare %c (character).
*         F�r str�ngar (multipla tecken/charf�lt) anv�nds formatspecificerare 
*         %s (string).
* 
*         F�r osignerade heltal (t�nk naturliga tal, allts� tal 0 och upp�t,
*         inga negativa tal), s� anv�nds formatspecificerare %u (unsigned). 
*         Ibland anv�nds %lu och %zu beroende p� vilken osignerad datatyp som
*         skall skrivas ut. Datatypen size_t, d�r formatspecificerare %zu 
*         anv�nds �r v�ldigt f�rekommande.
********************************************************************************/
#include <stdio.h> /* Standardbibliotek f�r utskrift och inmatning. */

/********************************************************************************
* main: Genomf�r utskrift av olika typer av data.
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