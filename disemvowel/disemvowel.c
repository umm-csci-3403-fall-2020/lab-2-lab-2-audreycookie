#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

int vowelCount(char *str){ //counts the number of vowels in a string
  int vowelCounter = 0;
  int length = strlen(str);
  for (int i = 0; i < length; ++i){
	if (str[i] == 'a' || str[i] == 'A' || str[i] =='e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
		vowelCounter++;
  	}
  }
  return vowelCounter;
}


char *disemvowel(char *str){
  int strLength = strlen(str); //length of input string
  int vowelNum = vowelCount(str); //how many vowels there are
  int newLength = strLength - vowelNum; //length the of input string without vowels
  char *result; //creating a new string
  result = (char*) calloc(newLength+1, sizeof(char)); // creating a string without vowel lengths
  int resultIndex = 0; //keeping track of the resultIndex
  for (int i = 0; i < strLength; ++i){ //if the character at the current index is a vowel, continue past it
	if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U'){
		result[resultIndex] = str[i]; //if character is not a vowel, add it to the new string
		resultIndex++;
	}
  }
  return result;
}

