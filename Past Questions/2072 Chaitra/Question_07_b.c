#include <stdio.h>

void main()
{
    char ch;
    FILE *out_data,
        *in_record;

    out_data = fopen("Data.txt", "r");
    in_record = fopen("record.txt", "a");

    while (1)
    {
        ch = fgetc(out_data);
        if (ch == EOF)
            break;
        putc(ch, in_record);
    }
}