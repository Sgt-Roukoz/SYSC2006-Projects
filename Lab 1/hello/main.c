/* 
	Marwan Zeid 101185876
	SYSC2006 Lab 1
*/

#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output.*/

/* Excercise 2 Error messages
 * a) error #2001: Syntax error: expected '}' but found 'end of input'.
 * b) warning #2099: Missing type specifier; assuming 'int'.
 * c) POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)'.
 *    POLINK: fatal error: 1 unresolved external(s).
 *    *** Error code: 1 ***
 * d) warning #1042: EOF inside a comment.
 * e) warning #2018: Undeclared function 'pintf' (did you mean: printf?); assuming 'extern' returning 'int'.
 * f) (Deleting parentheses of first printf statement): error #2001: Syntax error: expected ')' but found ';'.
 * g) (duplicating parantheses of int main(void)): 
 *	   error #2001: Syntax error: expected ';' but found ')'.
 *     warning #2099: Missing type specifier; assuming 'int'.
 *     error #2001: Syntax error: expected ')' but found 'string constant'.
 *     error #2120: Redeclaration of 'printf', previously declared at C:\Program Files\PellesC\Include\stdio.h(106); expected 'int function(const char * restrict, ...)' but found 'int function()'.
 *     warning #2099: Missing type specifier; assuming 'int'.
 *     error #2001: Syntax error: expected ')' but found 'string constant'.
 *     error #2156: Unrecognized declaration.
 *     error #2156: Unrecognized declaration.
 *     error #2156: Unrecognized declaration. 
 * h) error #2001: Syntax error: expected ';' but found '}'.
 */

int main(void)
{
	printf("Hello, world!\n");
	printf("C programming is fun!\n");
	return EXIT_SUCCESS;
}

