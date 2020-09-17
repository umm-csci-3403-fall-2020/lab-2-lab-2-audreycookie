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

//char removeVowels(char * str){ //uses recursion to remove the vowels in a string
  //int index;
  //int vowelNum;
  //char *newString;
  //vowelNum = vowelCount(str);
  //if (vowelNum == 0) { //if the string has no vowels, then return the string which should have no vowels
//	return str;
  //}
  //else { //if there are vowels, loop through the string and remove them, then call removeVowels again
//	for (int i = 0; i < strlen(str); ++i){ 
//		if (str[i] = "a" || "A" || "e" || "E" || "i" || "I" || "o" || "O" || "u" || "U"){
//			index = i;
//			str = memmove(&str[index], &str[index + 1], strlen(str) - index);
//			removeVowels(str);
//		}
//	}
  //}	
//}

char *disemvowel(char *str){
  int strLength = strlen(str); //length of input string
  int vowelNum = vowelCount(str); //how many vowels there are
  int newLength = strLength - vowelNum; //length the of input string without vowels
  char *result; //creating a new string
  result = (char*) calloc(newLength+1, sizeof(char)); // creating a string without vowel lengths
  int resultIndex = 0;
  for (int i = 0; i < strLength; ++i){
	if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){ //if the character at the current index is a vowel, continue past it
		continue;
	}
	else {
		result[resultIndex] = str[i]; //if character is not a vowel, add it to the new string
		resultIndex++;
	}
  }
  return result;
}



// return (char*) "";
//the above is what was in the original code, will delete if we don't need it
