typedef unsigned long size_t;

char *strncpy(char *s1, const char *s2, size_t n)
{
    char *d = s1;
    const char *s = s2;
    size_t i;

    i = 0;
    while (i < n && *s != '\0') {
        *d++ = *s++;
        i++;
    }
    while (i < n) {
        *d++ = '\0';
        i++;
    }
    return s1;
}
