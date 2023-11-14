#include <stdio.h>
#include "main.h"



char rot13(char c)
{
  	if (c >= 'a' && c <= 'z')/*Runs through list of alphabets */
	{
    	c = (c - 'a' + 13) % 26 + 'a'; /*substitution key for rot 13*/
  	}
 	else if (c >= 'A' && c <= 'Z') 
	{
    	c = (c - 'A' + 13) % 26 + 'A';
  	}

  return (c);
}

