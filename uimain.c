#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Arrow = a, Triangle = t, Square = s, Chars = c) or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 'a':
      puts("You selected arrow:");
      print_arrow(8, 4, 4);  //rectCol, triCol, size
      print_arrow(3, 3, 3);
      print_arrow(7, 5, 3);
      print_arrow(7, 7, 7);
      print_arrow(3, 5, 3);
      print_arrow(4, 10, 7);
      print_arrow(4, 7, 4);
      print_arrow(3, 12, 6);
      print_arrow(2, 15, 8);
      break;

    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'a'; c < 'd'; c++)
	print_char_5x7(c);
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
