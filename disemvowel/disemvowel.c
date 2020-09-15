#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

//create method that tracks the vowels in a string
//in method, track the count of the number of vowels
//create new string with appropriate length (without vowels and null terminator)

char removeVowel(char * str, int deleteIndex){ //removes one vowel at a given index
  char *alterString = memmove(&str[deleteIndex], &str[deleteIndex + 1], strlen(str) - deleteIndex); //memmove handles removing a character at an index in the array
  return alterString //returns the string without the vowels
}

int getIndex(char *str){ //return the index of a vowel in a string
  int index;  
  for (int i = 0; i < strlen(); ++i){
  	if (str[i] = "a" || "A" || "e" || "E" || "i" || "I" || "o" || "O" || "u" || "U"){
		index = i;
		break;
	}
}


int vowelCount(char *str){ //counts the number of vowels, will help determine length of new string
  int vowelCounter;
  for (int i = 0; i < strlen(); ++i){
	if (str[i] = "a" || "A" || "e" || "E" || "i" || "I" || "o" || "O" || "u" || "U"){
		vowelCounter++;
	}
  }
  return vowelCounter;
}

char *disemvowel(char *str) {
  int strLength = strlen(str); //length of input string
  int vowelNum = vowelCount(str); //how many vowels there are
  int newLength = strLength - vowelNum; //length the of input string without vowels

  //use removeVowel and getIndex functions here

  result = (char*) calloc(newLength+1, sizeof(char)); //new string with the null terminator
//use cat to put together empty string and altered string

  return (char*) "";
}
