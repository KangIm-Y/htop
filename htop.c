/*
htop - htop.c
(C) 2004-2011 Hisham H. Muhammad
(C) 2020-2021 htop dev team
Released under the GNU GPLv2+, see the COPYING file
in the source distribution for its full text.
*/

#include "config.h" // IWYU pragma: keep
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CommandLine.h"
int meml=100;   // memory limit
int cpul=100;   // CPU limit
int notice; // alarm Y/N

int main(int argc, char **argv)
{
   printf("noti YES =0 NO =1 \n");
   scanf("%d", &notice);
   if (notice == 0)
   {
      printf("Set Memory Limit \n");
      scanf("%d", &meml);
      printf("Set CPU Limit \n");
      scanf("%d", &cpul);
   }
   else
   {
      //nothing to do 
   }

   return CommandLine_run(PACKAGE, argc, argv);
}
