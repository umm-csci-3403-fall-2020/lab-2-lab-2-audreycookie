#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

//create method that tracks the vowels in a string
//in method, track the count of the number of vowels
//create new string with appropriate length (without vowels and null terminator)

int vowelCount(char *str){ //counts the number of vowels in a string
  int vowelCounter;
  for (int i = 0; i < strlen(str); ++i){
	if (str[i] = "a" || "A" || "e" || "E" || "i" || "I" || "o" || "O" || "u" || "U"){
		vowelCounter++;
  	}
  }
  return vowelCounter
}

char removeVowels(char * str){ //uses recursion to remove the vowels in a string
  int index;
  int vowelNum;
  char *newString;
  vowelNum = vowelCount(str);
  if (vowelNum == 0) { //if the string has no vowels, then return the string which should have no vowels
	return str;
  }
  else { //if there are vowels, loop through the string and remove them, then call removeVowels again
	for (int i = 0; i < strlen(str); ++i){ 
		if (str[i] = "a" || "A" || "e" || "E" || "i" || "I" || "o" || "O" || "u" || "U"){
			index = i;
			str = memmove(&str[index], &str[index + 1], strlen(str) - index);
			removeVowels(str);
		}
	}
  }	
}


char *disemvowel(char *str) {
  int strLength = strlen(str); //length of input string
  int vowelNum = vowelCount(str); //how many vowels there are
  int newLength = strLength - vowelNum; //length the of input string without vowels
  char *result; 
  result = (char*) calloc(newLength+1, sizeof(char)); // creating a new string
  removeVowels(str);
  //use removeVowel and getIndex functions here

  result = (char*) calloc(newLength+1, sizeof(char)); //new string with the null terminator
//use cat to put together empty string and altered string

  return (char*) "";
}
