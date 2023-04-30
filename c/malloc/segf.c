/**
 *segf - lets segfault \o/
 *
 *Return: nothing.
 */
void segf(void)
{
	char *str = str;

	str = "Holberton";
	str[0] = 's';
}
/**
 *main - concept introduct
 * 
 *Return: 0
 */
int main(void)
{
	segf();
	return (0);
}
