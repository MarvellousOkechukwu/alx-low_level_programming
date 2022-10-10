#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);

