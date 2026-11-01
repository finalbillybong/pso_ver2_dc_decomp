typedef struct Object {
    int tag;
    char unknown4[0xc];
    float f10;
    float f14;
    char unknown18[0x8];
    char *f20;
} Object;
extern int g_8c467188;
extern char *call_8c04ba30(char *, int *, int);
extern int operation_8c087244(unsigned short);
extern int operation_8c087248(int);
extern int operation_8c04b794(unsigned short);
extern int operation_8c04b8b0(int);
void operation_8c0e2328(Object *o, float w)
{
    float h;
    float limit;
    int sjis;
    int narrow;
    float maxw;
    float y;
    float x;
    float dy;
    char *s;
    unsigned short code;
    int cw;
    int c;
    if (o->f20 == 0 || *o->f20 == 0) {
        o->f10 = 0.0f;
        o->f14 = 0.0f;
        return;
    }
    if (o->tag & 0x40) {
        limit = 10000000.0f;
    } else {
        limit = w;
    }
    sjis = g_8c467188 == 0;
    narrow = (o->tag & 4) != 0;
    if (narrow) {
        h = 10.0f;
        dy = 15.0f;
        y = dy;
    } else {
        h = 18.0f;
        y = h;
        dy = 20.0f;
    }
    s = o->f20;
    maxw = 0.0f;
    x = maxw;
    while (*s != 0) {
        s = call_8c04ba30(s, &sjis, 0);
        c = *s;
        if (c != 0) {
            s++;
            code = (unsigned char)c;
            if (code == 10) {
                if (o->tag & 0x80) {
                    x += h / 2.0f;
                } else {
                    if (x > maxw) {
                        maxw = x;
                    }
                    y += dy;
                    x = 0.0f;
                }
            } else if (code == 0x20) {
                x += h / 2.0f;
            } else {
                if (sjis) {
                    if ((code & 0xe0) == 0x80 || (code & 0xe0) == 0xe0) {
                        cw = code << 8 | (unsigned char)*s++;
                        code = cw;
                    }
                }
                if (narrow) {
                    cw = operation_8c087248((unsigned char)operation_8c087244(code));
                } else {
                    cw = operation_8c04b8b0(operation_8c04b794(code));
                }
                if (x + (float)(unsigned char)cw > limit) {
                    if (x > maxw) {
                        maxw = x;
                    }
                    y += dy;
                    x = 0.0f;
                }
                x += (float)(unsigned char)cw;
            }
        }
    }
    if (!(x > 0.0f)) {
        y -= dy;
    }
    if (x > maxw) {
        maxw = x;
    }
    if (maxw > w) {
        maxw = w;
    }
    o->f10 = maxw;
    o->f14 = y;
}
