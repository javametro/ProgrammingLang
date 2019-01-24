#include <stdio.h>

int main(){
	int decks;
	puts("Enter a number of decks.");
	scanf("%i", &decks);
	if(decks < 1){
		puts("That is not a valid number of decks.");
		return 1;
	}

	printf("There are %i cards\n", decks * 52);
	return 0;

}
int card_count = 11;
if(card_count > 10){
	puts("The deck is hot. Increase bet.");

	int c = 10;
	while(c > 10){
		puts("I must not write code in class.");
		c = c - 1;
	}
}

char ex[20];
puts("Enter boyfriend's name: ");
scanf("%19s", ex);
printf("Dear %s.\n\n\tYou're history.\n", ex);

char suit = 'H';
switch(suit){
	case 'C':
		puts("Clubs");
		break;

	case 'D':
		puts("Diamonds");
		break;

	case 'H':
		puts("Hearts");
		break;

	default:
		puts("Spades");
}
