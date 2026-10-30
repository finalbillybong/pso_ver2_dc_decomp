/* Pool group 0x8c200ac4-0x8c200ba8 (Hitachi SHC): small record
   serialisers (two bytes and a 16-bit word). */
typedef struct {
    char c0;
    char c1;
    short s;
} Rec;

extern char **func_8c1fc430(int, int);
extern void func_8c1fd1ba(char *, int);
extern short func_8c1fc374(int, char *, int);
extern short func_8c1fd1ca(char *);
extern void func_8c204144();

char **put_rec_8c200ac4(Rec *rec, int handle)
{
    volatile int h = handle;
    char **buf;
    char *p;
    buf = func_8c1fc430(h, 4);
    p = *buf;
    *p++ = rec->c0;
    *p++ = rec->c1;
    func_8c1fd1ba(p, rec->s);
    return buf;
}

int get_rec_8c200afc(Rec *arg, int handle)
{
    register Rec *rec = arg;
    volatile int h = handle;
    char tmp[4];
    register char *t;
    if (rec == 0) goto fail;
    t = tmp;
    if (func_8c1fc374(h, t, 4) < 4) {
fail:
        return -1;
    }
    rec->c0 = t[0];
    rec->c1 = t[1];
    rec->s = func_8c1fd1ca(t + 2);
    return 0;
}

int get_pair_8c200b44(Rec *arg, int handle)
{
    register Rec *rec = arg;
    volatile int h = handle;
    char tmp[4];
    register char *t;
    if (rec == 0) goto fail;
    t = tmp;
    if (func_8c1fc374(h, t, 2) < 2) {
fail:
        return -1;
    }
    rec->c0 = t[0];
    rec->c1 = t[1];
    return 0;
}

void nop_8c200b82(void)
{
}

int zero_8c200b86(void)
{
    return 0;
}

void forward_8c200b8a(int x)
{
    /* Unprototyped callee: SHC homes the parameter (push) yet still
       tail-jumps. */
    func_8c204144(x + 16);
}
