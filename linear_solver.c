/******************************************************************************
*
* File name: linear_solver.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 2
* Problem #: 1
*
* Submission Date: 10/30/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio.h
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*=============================================================================
  Constants and definitions: Variable name 'Y'
=============================================================================*/
#define VARIABLE_NAME 'Y'

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to input a equation as aY +b = c, and then
  solves single-variable linear equations.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  double a, b, c; // User's inputs
  char sign, var; // Variable and Arithmetical operator in the equation
  double answer; // Final result

  printf("Enter a linear equation: ");
  scanf("%lf%c %c %lf = %lf", &a, &var,&sign, &b, &c);
  //printf("%lf %lf %lf %c \n", a, b, z, var);

  // Check whether the variable and sign is valid for calculation
  if (var == VARIABLE_NAME && sign == '+')
  {
    if (a == 0)
    {
      // Equation is invalid if a is 0
      printf("Invalid equation!\n");
      return 1;
    }
    else
    {
      //Make sure a is not 0 (equation is valid)
      // Calculate the anmswer and print 3 decimal digits
      answer = (c - b)/a;
      printf("Y = %.3f\n", answer);
    }
  }
  else
  {
    // Wrong sign or worng variable
    printf("Invalid inputs! \n");
  }


  return 0;
}

/******************************************************************************
                                End of file
******************************************************************************/
