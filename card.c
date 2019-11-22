/* programm for assessing the importance card */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char card_name[3];
	puts ("Enter name card: ");
	scanf ("%2s", card_name);
	int val=0;
	if (card_name[0]=='K')
		val=10;
	else if (card_name[0]=='Q')
		val=10;
		else if (card_name[0]=='J')
			val=11;
			else if (card_name[0]=='A')	
				val=11;
				else val=atoi(card_name);
	
	printf ("value cards: %i\n", val);
	system ("pause>nul");
	return 0;

}
