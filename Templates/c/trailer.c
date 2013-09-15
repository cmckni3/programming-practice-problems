/*
*  Author:
*    Date:
* Purpose:
* Problem:
*/

/*
* This template reads data until a terminating value is reached.
*/

#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

using namespace std;

void init()
{ /* FUNCTION init */
} /* FUNCTION init */

void dump()
{ /* FUNCTION dump */
} /* FUNCTION dump */

int getInput()
{ /* FUNCTION getInput */
  int dataReadFlag;
  return (dataReadFlag);
} /* FUNCTION getInput */

void process()
{ /* FUNCTION process */
} /* FUNCTION process */

int main ()
{ /* main */
  int moreToDo;

  init();
  moreToDo = getInput();
  while (moreToDo)
  { /* while */
    process();
    moreToDo = getInput();
  } /* while */

  return 0;
} /* main */
