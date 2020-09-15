#include <gtest/gtest.h>
#include <stdlib.h>
#include "palindrome.h"

void is_palindrome(char const *str) {
  char *dummyString = palindrome(str); //cannot directly free memory that you input into a function, so create a dummy string that you can delete
  ASSERT_STREQ(dummyString, "Yes");
  if (dummyString[0] != '\0'){ //check to see if the dummyString is empty
	  free(dummyString);
  }
}

void not_palindrome(char const *str) {
  char *dummyString = palindrome(str); //cannot directly free memory that you inptu into a function, so create a dummy stirng that you can delete
  ASSERT_STREQ(dummyString, "No");
  if (dummyString[0] != '\0'){ //check to see if the dummyString is empty
	  free(dummyString);
  }
}

TEST(Palindrome, HandlesEmptyString) {
  is_palindrome("");
}

TEST(Palindrome, HandlesSingletons) {
  is_palindrome("a");
  is_palindrome("b");
  is_palindrome("c");
}

TEST(Palindrome, HandlesLengthTwo) {
  is_palindrome("aa");
  is_palindrome("bb");
  not_palindrome("ab");
}

TEST(Palindrome, HandlesLengthThree) {
  is_palindrome("aaa");
  is_palindrome("bab");
  not_palindrome("abc");
  not_palindrome("abb");
}

TEST(Palindrome, HandlesLengthFour) {
  is_palindrome("aaaa");
  is_palindrome("baab");
  not_palindrome("abcd");
  not_palindrome("aabb");
  not_palindrome("abbc");
  not_palindrome("abca");
}

TEST(Palindrome, HandlesLongerStrings) {
  is_palindrome("aaaaaaaaaaa");
  is_palindrome("aaaaaaaaaaaa");
  is_palindrome("abcdefgfedcba");
  is_palindrome("abcdefggfedcba");
  not_palindrome("abcdefghijk");
  not_palindrome("aaaaaaaaaaaabaaaa");
  not_palindrome("abcdxfgfedcba");
  not_palindrome("abcdefggfexcba");
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
