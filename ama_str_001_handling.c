#include "shell.h"

/**
 * _strcat - concatenate tambo mbiri
 * @dest: karekta yaka  tariswa
 * @src: const karekta yaka tariswa
 * Return: dzosa kuri kuyendwa
 */
char *_strcat(char *dest, const char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
/**
 * *_strcpy - ino kopa.
 * @dest: rwudzi rwe kuri kuyendwa kwe str
 * @src: rudzi ruri kubva ku source of yeTambo
 * Return: kuri kuyendwa.
 */
char *_strcpy(char *dest, char *src)
{
	size_t a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
/**
 * _strcmp - Fanksheni ino yenzanisa tambo mbiri
 * @s1: rudzi str yayenza niswa
 * @s2: rudzi str yayenza niswa
 * Return: nguva dzose0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;

	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}
/**
 * _strchr - tarisa karekta iri mutambo
 * @s: tambo.
 * @c: karekta.
 * Return: taridza ku occurrence ye karekta c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
/**
 * _strspn - wana len yema prefix ema substring.
 * @s: tanga ma segment.
 * @accept: bvuma ma bytes.
 * Return: ma numba ema  bytes.
 */
int _strspn(char *s, char *accept)
{
	int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
