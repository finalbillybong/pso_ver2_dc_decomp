typedef unsigned long size_t;

void *memmove(void *s1, const void *s2, size_t n)
{
    char *d;
    const char *s;
    size_t i;

    if (s1 != s2) {
        if (s1 < s2) {
            s = s2;
            d = s1;
            for (i = 0; i < n; i++)
                { *d = *s++; d++; }
        } else {
            d = (char *)s1 + n;
            s = (const char *)s2 + n;
            for (i = 0; i < n; i++)
                *--d = *--s;
        }
    }
    return s1;
}
