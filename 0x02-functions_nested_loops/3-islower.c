/**
 * _islower - check if a character is lowercase.
 * @c: the character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
