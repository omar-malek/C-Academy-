
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* Notes

Escape characters

\a	07	Alert (Beep, Bell) (added in C89)[1]
\b	08	Backspace
\enote 1	1B	Escape character
\f	0C	Formfeed Page Break
\n	0A	Newline (Line Feed); see notes below
\r	0D	Carriage Return
\t	09	Horizontal Tab
\v	0B	Vertical Tab
\\	5C	Backslash
\'	27	Apostrophe or single quotation mark
\"	22	Double quotation mark
\?	3F	Question mark (used to avoid trigraphs)
*/

enum color { red, yellow , blue , black , green };
char  broild;


int main(void)
{
    printf("#############################################\n");
    printf("\n##########  Variable and Data Types  ########\n");
    printf("\n#############################################\n\n\n");

    enum color  my_color = black;

    broild ='\n';
    printf(" value = %d\n", my_color);

    printf(" text= \"%s \" \a \n", &broild);

return 0;
}
