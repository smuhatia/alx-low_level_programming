 #include <unistd.h>
  2
  3 /**
  4  * _putchar - writes the character c to stdout
  5  * @c: The character to print
  6  *
  7  * Return: On success 1.
  8  * On error, -1 is returned, and errno is set appropriately.
  9  */
 10 int _putchar(char c)
 11 {
 12         return (write(1, &c, 1));
 13 }
