typedef struct {
    short a;
    char *src;
    short len;
    int d;
    short e;
    char *buf;
} Req;
extern void func_8c3ce83e(char *, char *, int);

void req_copy_8c3cea94(int (*cb)(int, Req *), short a, char *src, short len, int d, short e)
{
    Req r;
    r.a = a;
    r.src = src;
    r.len = len;
    r.d = d;
    r.e = e;
    if (cb(0, &r) == 0) {
        if (r.len >= len) {
            r.len = len;
        }
        func_8c3ce83e(r.buf, src, r.len);
        cb(1, &r);
    }
}
