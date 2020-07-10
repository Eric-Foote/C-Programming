// Write a program to count the number of vowels in a text


#include <stdio.h>

int main ()
{
	printf("Give me a sentence");
	char sentence [500];
	int numberOfVowels = 0;
	scanf("%s", sentence);
	for(int i = 0; i < 500; i++) {
		switch(sentence[i]) {
			case 'A':
				numberOfVowels++;
                                break;
			case 'a':
				numberOfVowels++;
				break;
			case 'E':
				numberOfVowels++;
                                break;
			case 'e':
				numberOfVowels++;
                                break;
			case 'I':
				numberOfVowels++;
                                break;
			case 'i':
				numberOfVowels++;
                                break;
			case 'O':
				numberOfVowels++;
                                break;
			case 'o':
				numberOfVowels++;
                                break;
			case 'U':
				numberOfVowels++;
                                break;
			case 'u':
				numberOfVowels++;
                                break;
			
			default: break;
		}
	}
	printf("The number of vowels in that sentence is: %d ", numberOfVowels);
	return 0;
}



