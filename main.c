#include <stdio.h>
#include "q1.h"
#include "q2.h"
#include "q3.h"
#include "qx.h"

int main(void) {
  int input;
  scanf("%d", &input);

  if(input == 1) {
    // Question 1: Heterosquare
    int s;
    scanf("%d", &s);
    
    int sqr[s][s];

    readSquare(s, sqr);

    if(isHeterosquare(s, sqr)) {
      printf("It's a Heterosquare\n");
    } else {
      printf("It isn't a Heterosquare\n");
    }
  } else if(input == 2) {
    // Question 2: Latin Square
    int s;
    scanf("%d", &s);
    
    char sqr[s][s];

    readCharSquare(s, sqr);

    if(isLatinSquare(s, sqr)) {
      printf("It's a Latin Square\n");
    } else {
      printf("It isn't a Latin Square\n");
    }
  } else if(input == 3) {
    // Question 3: Longest and Shortest
    char text[500];

    readTextWithSpaces(text);
    printf("Longest:\n");
    printLongestWord(text);

    printf("Shortest:\n");
    printShortestWord(text);

  } else if(input == 4) {
    // Extra Credit: Reverse Sentence
    char text[500];
    char reversed[500];

    readTextWithSpaces(text);
    
    reverseSentence(text, reversed);

    printf("%s", reversed);
  }

}