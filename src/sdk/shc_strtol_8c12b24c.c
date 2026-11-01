extern int _ptrchk(const char *, const char *);
extern unsigned char _ctype[];
extern int errno;

#define ISSPACE(c) (_ctype[(unsigned char)(c)] & 0x40)
#define ISUPPER(c) (_ctype[(unsigned char)(c)] & 0x01)
#define ISDIGIT(c) (_ctype[(unsigned char)(c)] & 0x04)
#define ISALNUM(c) (_ctype[(unsigned char)(c)] & 0x07)
#define TOLOWER(c) (ISUPPER(c) ? (c) + 0x20 : (c))

long strtol(const char *s, char **endptr, int base)
{
    const char *nptr;
    long result;
    int neg;
    int ovf;
    unsigned long val;
    int d;
    char maxc;
    int c;
    const unsigned char *ct;

    result = 0;
    neg = 0;
    nptr = s;
    while (ISSPACE(*s)) {
        s++;
        if (_ptrchk(s, nptr)) return 0;
    }
    if (*s == '+' || *s == '-') {
        if (*s == '-') neg = 1;
        s++;
        if (_ptrchk(s, nptr)) return 0;
    }
    if (base == 0) {
        if (*s == '0') {
            s++;
            if (_ptrchk(s, nptr)) return 0;
            c = *s;
            if (TOLOWER(c) == 'x') {
                s++;
                if (_ptrchk(s, nptr)) return 0;
                base = 16;
            } else {
                base = 8;
            }
        } else {
            base = 10;
        }
    } else if (base == 16 && *s == '0') {
        s++;
        c = *s;
        if (TOLOWER(c) == 'x') s++;
        if (_ptrchk(s, nptr)) return 0;
    }
    if (base < 2 || base > 36) goto bad;
    maxc = base > 10 ? base + 0x56 : base + 0x2f;
    c = *s;
    if (ISALNUM(c) && TOLOWER(c) <= maxc) {
        while (*s == '0') {
            s++;
            if (_ptrchk(s, nptr)) return 0;
        }
        ovf = 0;
        for (val = 0, c = *s; ISALNUM(c) && TOLOWER(c) <= maxc; ) {
            if (!ovf) {
                if (ISDIGIT(*s)) d = *s - '0';
                else { c = *s; d = TOLOWER(c) - 0x57; }
                if (val > (unsigned long)(0x7fffffff + neg - d) / base) ovf = 1;
                else val = val * base + d;
            }
            s++;
            if (_ptrchk(s, nptr)) return 0;
            c = *s;
        }
        if (!ovf) {
            if (neg) val = -val;
            result = val;
        } else {
            errno = 1100;
            if (!neg) result = 0x7fffffff;
            else result = 0x80000000;
        }
    }
    ct = _ctype;
    c = *s;
    if ((ct[(unsigned char)c] & 1 ? c + 0x20 : c) == 'u') {
        s++;
        c = *s;
        if ((ct[(unsigned char)c] & 1 ? c + 0x20 : c) == 'l') s++;
    }
    c = *s;
    if ((ct[(unsigned char)c] & 1 ? c + 0x20 : c) == 'l') {
        s++;
        c = *s;
        if ((ct[(unsigned char)c] & 1 ? c + 0x20 : c) == 'u') s++;
    }
    if (_ptrchk(s, nptr)) return 0;
    goto done;
bad:
    errno = 1200;
done:
    if (endptr) *endptr = (char *)s;
    return result;
}
