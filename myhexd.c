#include <stdio.h>
#include <stdlib.h>

void print_clear(char *s, int len)
{
	printf("|");
	// For each char in 16 characters entered at s[mem_i % 0x10] = c;
	for(int i=0; i<len; i++)
	{
		// hexadecimal values to ignore up to 0x20, and above 0x7E
		if(s[i] <= 0x19 || s[i] > 0x7E)
		{
			// Special characters get replaced with dot
			printf(".");

		}
		// Print if actual character
		else {
			printf("%c", s[i]);


		}
	}
	printf("|");
}






int main()
{
  int c;
  int mem_i = 0;
	// WHILE LOOP!!
  // 0x10 meaning 16 digits of space/characters
  char *s = calloc(0x10, sizeof(char));

  while((c = getchar()) != EOF)
  //  You can use %c for normal format, and %x for hex version
  {
	   s[mem_i % 0x10] = c;

    // If 4bits x 8 then new line, checking it with modulo
	   if(mem_i % 0x10 == 0x0)
	   {
		printf("%08x  ", mem_i);
	   }
	   printf("%02x ", c);

	   mem_i++;
	    // nicer formatting
	   if (mem_i % 0x8 == 0x0)
	   {
	   	printf(" ");
	   }

	   if(mem_i % 0x10 == 0x0)
	   {
		// last memory address in "row" is reached
		print_clear(s, 0x10);
		printf("\n");
	   }


  }
  printf("%*s ", 3*(0x10 - mem_i % 0x10), "");
  print_clear(s, (mem_i%0x10));
  printf("\n%08x  ", mem_i);
  printf("\n");

}
