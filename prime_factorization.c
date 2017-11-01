/******************************************************************************
*
* File name: prime_factorization.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 2
* Problem #: 2
*
* Submission Date: 10/30/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio., math.h
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to enter an integer and then prints its
  prime factorization.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main ()
{
  int n; // User's input
  int m = 1; //True variable of while loop

  while (m == 1) {

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 1) // Cas when n is greater than 1
    {
      printf("The prime factorization of %d is ", n);

      // Step 1: Start divide by 2
      while (n % 2 == 0)
	     {
		     printf("%d ", 2);
		     n = n / 2;
	     }

      // Step 2: Divide by odd numbers greter than 2
      for (int i = 3; i <= sqrt(n); i += 2)
 	     {
 		      while (n % i == 0)
 		       {
 			       printf("%d ", i);
 			       n = n / i;
 		       }
 	     }

       // Step 3: in case the final result is greter than 2
       if (n > 2)
         {
		       printf ("%d ", n);
         }

       printf("\n");
    }
    else
    {
      // quit the program if n is smaller or equal to 1
      break;
    }
  }

  return 0;

}
/******************************************************************************
                                End of file
******************************************************************************/
