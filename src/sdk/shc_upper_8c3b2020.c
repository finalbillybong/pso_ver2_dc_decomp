/* SDK pool group 0x8c3b2020-0x8c3b204c (Hitachi SHC): converts a string to
   upper case in place. */
extern int toupper(int c);

void string_upper_8c3b2020(char *text)
{
    while (*text) {
        *text = toupper(*text);
        text++;
    }
    *text = 0;
}
