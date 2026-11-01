extern unsigned char _ctype[];
extern volatile int errno;
extern double _digits_to_float(int, char *, int, char);

typedef struct {
    unsigned char *_bufptr;
    long _bufcnt;
    unsigned char *_bufbase;
    long _buflen;
    char _ioflag1;
    char _ioflag2;
    char _iofd;
} FILE;

struct ctx {
    char ch;
    char size;
    char conv;
    char flags;
    char *ptr;
    int count;
    int width;
    int (*getfn)(char *);
};

#define ISSPACE(c) (_ctype[(unsigned char)(c)] & 0x40)
#define ISUPPER(c) (_ctype[(unsigned char)(c)] & 0x01)
#define ISDIGIT(c) (_ctype[(unsigned char)(c)] & 0x04)
#define ISALNUM(c) (_ctype[(unsigned char)(c)] & 0x07)
#define TOLOWER(c) (ISUPPER(c) ? (c) + 0x20 : (c))
#define AVAIL(c) (((c)->flags & 1) || (c)->width > 0)

static int getint(int base, char *ptr, struct ctx *c);
static int getfloat(char conv, char *ptr, struct ctx *c);
static int scanset(const char **pp, char *ptr, struct ctx *c);
static void getch(struct ctx *c);
static void ungetch(struct ctx *c);

int scanf_core(int is_str, int (*getfn)(char *), char *src, const char *fmt, char *ap)
{
    struct ctx cs;
    struct ctx *c;
    const char *p;
    int base;
    int n;
    int w;
    char *ptr;

    c = &cs;
    w = 0;
    p = 0;
    c->ch = 0;
    c->flags = 0;
    c->size = 0;
    c->conv = 0;
    c->ptr = 0;
    c->count = 0;
    if (!is_str) {
        if (src == 0) {
            errno = 0x452;
            return -1;
        }
        if ((((FILE *)src)->_ioflag1 & 7) == 0) {
            errno = 0x514;
            return -1;
        }
        if (!(((FILE *)src)->_ioflag1 & 4) && (((FILE *)src)->_ioflag1 & 2)) {
            errno = 0x516;
            return -1;
        }
        c->getfn = getfn;
    }
    c->ch = 0;
    c->ptr = src;
    p = fmt;
    c->flags = 0;
    c->count = 0;
    n = 0;
    if (!is_str) c->flags |= 4;
    getch(c);
    if (c->ch == -1) n = -1;
    while (*p && c->ch != -1 && !(c->flags & 8)) {
        if (*p == ' ' || *p == '\t' || *p == '\n') {
            while (*p == ' ' || *p == '\t' || *p == '\n') p++;
            while (ISSPACE(c->ch)) getch(c);
            continue;
        }
        if (*p != '%') {
            if (*p != c->ch) {
                c->flags |= 8;
                errno = 0x518;
            } else {
                p++;
                getch(c);
            }
            continue;
        }
        p++;
        switch (*p) {
        case '*':
            p++;
        case '%':
            ptr = 0;
            break;
        default:
            ptr = *(char **)((ap = ((int)(ap + 4) & 3) ? ap + 8 : ap + 4), (((int)(ap - 4) & 3) ? ap - 8 : ap - 4));
            break;
        }
        c->width = 0;
        if (ISDIGIT(*p)) {
            c->flags &= ~1;
            while (ISDIGIT(*p)) {
                int d = *p - '0';
                if ((0x200 - d) / 10 >= c->width) {
                    c->width = c->width * 10 + d;
                } else {
                    c->flags |= 8;
                    errno = 0x518;
                }
                p++;
            }
            w = c->width;
        } else {
            c->flags |= 1;
        }
        c->size = *p;
        if (c->size == 'h' || c->size == 'l' || c->size == 'L') p++;
        else c->size = ' ';
        if (*p != 'c' && *p != '[' && *p != 'n') {
            while (ISSPACE(c->ch)) getch(c);
        }
        c->width = w;
        switch (*p) {
        case 'd': case 'u': case 'i': case 'o': case 'x': case 'X':
            c->conv = *p;
            if (*p == 'd' || *p == 'u') base = 10;
            if (*p == 'i') base = 0;
            if (*p == 'o') base = 8;
            if (*p == 'x' || *p == 'X') base = 16;
            if (getint(base, ptr, c)) c->flags |= 8;
            break;
        case 's':
            c->flags &= ~0x10;
            if (c->ch == -1) c->flags |= 8;
            while (AVAIL(c) && c->ch != -1 && !(c->flags & 0x10)) {
                if (!(c->flags & 1)) {
                    while (c->width > 0 && c->ch != -1) {
                        if (ptr) *ptr++ = c->ch;
                        getch(c);
                    }
                } else {
                    while (!(c->ch == -1 || c->ch == ' ' || c->ch == '\n' || c->ch == '\t')) {
                        if (ptr) *ptr++ = c->ch;
                        getch(c);
                    }
                    c->flags |= 0x10;
                }
            }
            if (ptr) *ptr = 0;
            break;
        case 'c':
            if (c->flags & 1) c->width = 1;
            if (c->ch == -1) c->flags |= 8;
            while (c->width > 0 && c->ch != -1) {
                if (ptr) *ptr++ = c->ch;
                getch(c);
            }
            break;
        case 'e': case 'E': case 'f': case 'g': case 'G':
            if (getfloat(*p, ptr, c)) c->flags |= 8;
            break;
        case 'p':
            if (getint(16, ptr, c)) c->flags |= 8;
            break;
        case 'n':
            if (ptr) *(int *)ptr = c->count;
            break;
        case '[':
            if (scanset(&p, ptr, c)) c->flags |= 8;
            break;
        case '%':
            if (c->ch != '%') {
                c->flags |= 8;
                errno = 0x518;
            } else {
                getch(c);
            }
            break;
        default:
            errno = 0x518;
            c->flags |= 8;
            break;
        }
        if (!(c->flags & 8) && *p != 'n' && ptr) n++;
        p++;
    }
    if (c->ch != -1) ungetch(c);
    return n;
}

static int getint(int base, char *ptr, struct ctx *c)
{
    long result;
    int sign;
    int got;
    unsigned long val;
    unsigned char d;
    char maxc;
    int ch;

    result = 0;
    sign = 1;
    got = 0;
    if (c->size == 'L') {
        errno = 0x518;
        return -1;
    }
    if (AVAIL(c) && (c->ch == '+' || c->ch == '-')) {
        if (c->ch == '-') sign = -1;
        getch(c);
    }
    if (base == 0) {
        if (AVAIL(c) && c->ch == '0') {
            getch(c);
            if (AVAIL(c) && TOLOWER(c->ch) == 'x') {
                getch(c);
                base = 16;
            } else {
                base = 8;
                got = 1;
            }
        } else {
            base = 10;
        }
    } else if (base == 16) {
        if (AVAIL(c) && c->ch == '0') {
            getch(c);
            if (AVAIL(c) && TOLOWER(c->ch) == 'x') getch(c);
            else got = 1;
        }
    }
    maxc = base > 10 ? base + 0x56 : base + 0x2f;
    if (AVAIL(c) && ISALNUM(c->ch) && TOLOWER(c->ch) <= maxc) {
        got = 1;
        while (AVAIL(c) && c->ch == '0') getch(c);
        c->flags &= ~2;
        val = 0;
        while (AVAIL(c) && ISALNUM(c->ch) && TOLOWER(c->ch) <= maxc) {
            if (!(c->flags & 2)) {
                if (ISDIGIT(c->ch)) d = c->ch - '0';
                else {
                    ch = c->ch;
                    d = TOLOWER(ch) - 0x57;
                }
                switch (c->size) {
                case 'h':
                    if (val > (0xffffUL - d) / base) {
                        c->flags |= 2;
                        switch (c->conv) {
                        case 'd': case 'i':
                            if (sign == 1) result = 0x7fff;
                            else result = -0x8000;
                            break;
                        case 'x': case 'X': case 'o': case 'u':
                            result = 0xffff;
                            break;
                        default:
                            break;
                        }
                    } else {
                        val = val * base + d;
                    }
                    break;
                case 'l':
                    if (val > (0xffffffffUL - d) / base) {
                        c->flags |= 2;
                        switch (c->conv) {
                        case 'd': case 'i':
                            if (sign == 1) result = 0x7fffffff;
                            else result = 0x80000000;
                            break;
                        case 'x': case 'X': case 'o': case 'u':
                            result = 0xffffffff;
                            break;
                        default:
                            break;
                        }
                    } else {
                        val = val * base + d;
                    }
                    break;
                case ' ':
                    if (val > (0xffffffffUL - d) / base) {
                        c->flags |= 2;
                        switch (c->conv) {
                        case 'd': case 'i':
                            if (sign == 1) result = 0x7fffffff;
                            else result = 0x80000000;
                            break;
                        case 'x': case 'X': case 'o': case 'u':
                            result = 0xffffffff;
                            break;
                        default:
                            break;
                        }
                    } else {
                        val = val * base + d;
                    }
                    break;
                }
            }
            getch(c);
        }
        if (!(c->flags & 2)) {
            if (sign == 1) result = val;
            else result = -val;
        } else {
            errno = 0x44c;
        }
    }
    if (got == 1) {
        if (AVAIL(c) && TOLOWER(c->ch) == 'u') {
            getch(c);
            if (AVAIL(c) && TOLOWER(c->ch) == 'l') getch(c);
        } else if (AVAIL(c) && TOLOWER(c->ch) == 'l') {
            getch(c);
            if (AVAIL(c) && TOLOWER(c->ch) == 'u') getch(c);
        }
    }
    if (ptr) {
        switch (c->size) {
        case 'h':
            *(short *)ptr = result;
            break;
        case 'l':
            *(long *)ptr = result;
            break;
        default:
            *(int *)ptr = result;
        }
    }
    return got ? 0 : 1;
}

/* conv is passed by the caller (r4 = *p in the reference) but not read here. */
static int getfloat(char conv, char *ptr, struct ctx *c)
{
    int nexp;
    int expadj;
    int esign;
    int sign;
    double fval;
    float finf;
    int ovf;
    double dinf;
    char kind;
    int ndig;
    int got;
    int e;
    int i;
    int ch;
    char *res;
    long *lp;
    char buf[20];
    char ebuf[4];
    char zero[8];

    for (i = 0; i < 8; i++) zero[i] = 0;
    lp = (long *)&dinf;
    lp[0] = 0;
    lp[1] = 0x7ff00000;
    lp = (long *)&finf;
    *lp = 0x7f800000;
    ndig = 0;
    nexp = 0;
    sign = 1;
    esign = 1;
    expadj = 0;
    ovf = 0;
    got = 0;
    if (AVAIL(c) && (c->ch == '+' || c->ch == '-')) {
        if (c->ch == '-') sign = -1;
        getch(c);
    }
    while (AVAIL(c) && c->ch == '0') {
        got = 1;
        getch(c);
    }
    while (AVAIL(c) && ISDIGIT(c->ch)) {
        got = 1;
        if (ndig < 17) buf[ndig++] = c->ch;
        else errno = 0x4b2;
        getch(c);
        expadj++;
    }
    if (AVAIL(c) && c->ch == '.') {
        getch(c);
        if (ndig == 0) {
            while (AVAIL(c) && c->ch == '0') {
                got = 1;
                getch(c);
                expadj--;
            }
        }
        while (AVAIL(c) && ISDIGIT(c->ch)) {
            got = 1;
            if (ndig < 17) buf[ndig++] = c->ch;
            else errno = 0x4b2;
            getch(c);
        }
    }
    if (ndig == 0) {
        res = zero;
        if (got == 1) {
            if (AVAIL(c) && TOLOWER(c->ch) == 'e') {
                getch(c);
                if (AVAIL(c) && (c->ch == '+' || c->ch == '-')) getch(c);
                while (AVAIL(c) && ISDIGIT(c->ch)) getch(c);
            }
        }
        if (AVAIL(c) && (TOLOWER(c->ch) == 'f' || TOLOWER(c->ch) == 'l')) getch(c);
    } else {
        if (AVAIL(c) && TOLOWER(c->ch) == 'e') {
            getch(c);
            if (AVAIL(c) && (c->ch == '+' || c->ch == '-')) {
                if (c->ch == '-') esign = -1;
                getch(c);
            }
            while (AVAIL(c) && c->ch == '0') getch(c);
            while (AVAIL(c) && ISDIGIT(c->ch)) {
                if (nexp < 3) {
                    ebuf[nexp++] = c->ch;
                } else {
                    errno = 0x4b4;
                    ovf = esign;
                }
                getch(c);
            }
        }
        if (AVAIL(c) && (TOLOWER(c->ch) == 'f' || TOLOWER(c->ch) == 'l')) {
            ch = c->ch;
            if (TOLOWER(ch) == 'l') kind = 3;
            else kind = 1;
            getch(c);
        } else {
            kind = 2;
        }
        if (ovf == 0) {
            while (ndig < 17) buf[ndig++] = '0';
            e = 0;
            for (i = 0; i < nexp; i++) e = e * 10 + ebuf[i] - '0';
            if (esign == -1) e = -e;
            e += expadj - 1;
            if (e >= 1000) {
                errno = 0x4b6;
                ovf = 1;
            } else if (e <= -1000) {
                errno = 0x4b6;
                ovf = -1;
            }
        }
        switch (ovf) {
        case 1:
            /* the reference loads c->size here and then takes one path for every size
               (float, double and long double are one format with -fpu=single) */
            switch (c->size) {
            default:
                res = (char *)&finf;
                break;
            }
            if (sign == -1) res[7] |= 0x80;
            break;
        case -1:
            res = zero;
            if (sign == -1) res[7] |= 0x80;
            break;
        case 0:
            switch (c->size) {
            default:
                fval = _digits_to_float(sign, buf, e, kind);
                break;
            }
            res = (char *)&fval;
            break;
        }
    }
    if (ptr) {
        if (c->size == 'L') *(long double *)ptr = *(long double *)res;
        else if (c->size == 'l') *(double *)ptr = *(double *)res;
        else *(float *)ptr = *(float *)res;
    }
    return got == 0;
}

static int scanset(const char **pp, char *ptr, struct ctx *c)
{
    char neg;
    const char *start;
    const char *q;

    (*pp)++;
    if (**pp == '^') {
        neg = 1;
        (*pp)++;
    } else {
        neg = 0;
    }
    start = *pp;
    while (**pp != ']' && **pp != 0) (*pp)++;
    if (**pp == 0) {
        errno = 0x518;
        return 1;
    }
    if (c->ch == -1) return 1;
    while (AVAIL(c) && c->ch != -1) {
        for (q = start; q < *pp; q++) {
            if (c->ch == *q) break;
        }
        if (neg == 0) {
            if (q >= *pp) break;
        } else if (q < *pp) break;
        if (ptr) *ptr++ = c->ch;
        getch(c);
    }
    if (ptr) *ptr = 0;
    return 0;
}

static void getch(struct ctx *c)
{
    if (!(c->flags & 4)) {
        if ((c->ch = *c->ptr++) == 0) c->ch = -1;
    } else {
        c->ch = (*c->getfn)(c->ptr);
    }
    if (c->ch != -1) {
        c->count++;
        c->width--;
    }
}

static void ungetch(struct ctx *c)
{
    if (!(c->flags & 4)) {
        c->ptr--;
    } else {
        ((FILE *)c->ptr)->_bufcnt++;
        ((FILE *)c->ptr)->_bufptr--;
    }
}
