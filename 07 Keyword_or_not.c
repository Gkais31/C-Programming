// C program to check whether a given
// string is a keyword or not
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Function to check whether the given
// string is a keyword or not
// Returns 'true' if the string is a KEYWORD.
bool isKeyword(char* str)
{
	if (!strcmp(str, "auto") || !strcmp(str, "default")
		|| !strcmp(str, "signed") || !strcmp(str, "enum")
		||!strcmp(str, "extern") || !strcmp(str, "for")
		|| !strcmp(str, "register") || !strcmp(str, "if")
		|| !strcmp(str, "else") || !strcmp(str, "int")
		|| !strcmp(str, "while") || !strcmp(str, "do")
		|| !strcmp(str, "break") || !strcmp(str, "continue")
		|| !strcmp(str, "double") || !strcmp(str, "float")
		|| !strcmp(str, "return") || !strcmp(str, "char")
		|| !strcmp(str, "case") || !strcmp(str, "const")
		|| !strcmp(str, "sizeof") || !strcmp(str, "long")
		|| !strcmp(str, "short") || !strcmp(str, "typedef")
		|| !strcmp(str, "switch") || !strcmp(str, "unsigned")
		|| !strcmp(str, "void") || !strcmp(str, "static")
		|| !strcmp(str, "struct") || !strcmp(str, "goto")
		|| !strcmp(str, "union") || !strcmp(str, "volatile"))
		return (true);
	return (false);
}

// Driver code
int main()
{
	isKeyword("geeks") ? printf("Yes\n")
					: printf("No\n");
	isKeyword("for") ? printf("Yes\n")
					: printf("No\n");
	return 0;
}
