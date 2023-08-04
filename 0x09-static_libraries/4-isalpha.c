/**
 * _isalpha - Checks if a character is a letter
 *@c: Character to be checked
 *
 * Return: Returns 1 if character is a letter
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

