/******************************************************************************
*
* File name: abracadabra_encoder.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 2
* Problem #: 3
*
* Submission Date: 10/30/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio., string.h
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to enter the key and the word,
  the print out the encrypts words in the ABRACADABRA language

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  char a, b, c, d, r; // User's input key
  char word[7]; // User's input word
  char result[7]; // Encrpted word

  printf("     Enter key: ");
  scanf("%c%c%c%c%c", &a, &b, &c, &d, &r); // Asign the key to each letter

  printf("    Enter word: ");
  scanf("%s", word); // Scan the word

  // Iterate through the word string
  for (int i = 0; i < strlen(word); i++)
  {
    // Check the letter
    if (word[i] == 'a')
    {
      result[i] = a; // Add the encrypted character to the result string
    }

    else if (word[i] == 'b')
    {
      result[i] = b;
    }

    else if (word[i] == 'c')
    {
      result[i] = c;
    }

    else if (word[i] == 'd')
    {
      result[i] = d;
    }

    else if (word[i] == 'r')
    {
      result[i] = r;
    }

    // Quit the loop if one character is not in abcdr
    else
    {
      printf("You did not speak in ABRACADABRA to me!\n");
      break;
    }

  }

  printf("Encrypted word: %s\n", result);

  return 0;

}

/******************************************************************************
                                End of file
******************************************************************************/
