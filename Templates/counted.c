/*
 *  Author:
 *    Date:
 * Purpose:
 * Problem:
 */

/*
 * This template reads data a specified number of times.
 */

#include <stdio.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

int numberOfTimes;

void init()
{ /* FUNCTION init */
	scanf("%d ", &numberOfTimes);
} /* FUNCTION init */

void dump()
{ /* FUNCTION dump */
} /* FUNCTION dump */

void getInput()
{ /* FUNCTION getInput */
} /* FUNCTION getInput */

void process()
{ /* FUNCTION process */
} /* FUNCTION process */

int main ()
{ /* main */
	int i;

	init();
	for (i=0; i<numberOfTimes; i++)
	{ /* while */
		getInput();
		process();
	} /* while */

	return 0;
} /* main */