char *strcat(char *s1, const char *s2)
{
    unsigned char *p = (unsigned char *)s1;
    const unsigned char *q = (const unsigned char *)s2;

    while (*p != '\0')
        p++;
    while ((*p++ = *q++) != '\0')
        ;
    return s1;
}
