typedef unsigned long size_t;

int strncmp(const char *s1, const char *s2, size_t n)
{
    const char *q = s2;
    size_t i;

    if (n == 0)
        return 0;
    for (i = 0; i < n; i++) {
        if (*s1++ != *q++ || s1[-1] == '\0')
            break;
    }
    return (unsigned char)s1[-1] - (unsigned char)q[-1];
}
