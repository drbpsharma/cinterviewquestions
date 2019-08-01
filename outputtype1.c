/*
What will be the output of the following program if argument passed to command lines are
demo friday
*/
#include<stdio.h>
main(int argc, char *argv[])
{
	printf("%c",*++argv[1]);
}

/*
Answer is: e
*/
