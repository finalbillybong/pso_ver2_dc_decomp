typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_24 Arg0_20_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0x24];
    Arg0_20_24 *f24;
};
struct Arg0_20_24 {
    char unknown0[0x68];
    short f68;
};
extern char g_8c318df4[];
extern int operation_8c051cf0(void *);
extern int operation_8c051d18(void *);
extern void call_8c18de08(int);
extern int call_8c206b08(int);
extern void operation_8c174250(int);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c174184(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f20 != 0) {
        t1 = operation_8c051cf0((void *)(o->f20));
        if (t1 != 0) {
            t2 = operation_8c051d18((void *)(o->f20));
            t3 = icmp((unsigned char *)t2, (unsigned char *)(g_8c318df4 + 0x3c3));
            if (t3 == 0) {
                call_8c18de08(t2);
                if (o->f20->f24 != 0) {
                    o->f20->f24->f68 = (unsigned int)o->f20->f24->f68 >> 1 << 1;
                }
                return 0;
            }
            t4 = call_8c206b08(t2);
            if (t4 != 0) {
                if (o->f20->f24 != 0) {
                    o->f20->f24->f68 = (unsigned int)o->f20->f24->f68 >> 1 << 1;
                }
                call_8c18de08(t2);
                return 0;
            }
            operation_8c174250(t2);
            call_8c18de08(t2);
            return 1;
        }
    }
    return 0;
}
