/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e24ac
 * function: operation_8c1e24ac
 * language: c
 * reference size: 284 bytes
 * compiled size: 280 bytes (-1.4%)
 * differing lines: 32 of 126 reference instruction lines
 * differing bytes: 203
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original;
 *   compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_a4 Arg0_a4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv26 S_vv26;
typedef struct S_vv28 S_vv28;
typedef struct S_vv29 S_vv29;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0xa];
    Arg0_74 *f74;
    int f78;
    char unknown7c[0x10];
    int f8c;
    char unknown90[0x14];
    Arg0_a4 *fa4;
};
struct Frame {
    char unknown0[0xa0];
};
struct S_vv4 {
    char f00;
    unsigned char f01;
};
struct S_vv6 {
    short f00;
};
struct S_vv2 {
    short f00;
};
struct S_vv26 {
    unsigned short f00;
};
struct S_vv29 {
    unsigned short f00;
};
struct S_vv28 {
    short f00;
};
extern void call_8c1e15e8(Object *, int);
extern void operation_8c04bd14(void *, void *);
extern void operation_8c04be80(void *, int, int);
extern void operation_8c1e25c8(void *);
void operation_8c1e24ac(Object *o)
{
    Frame frame;
    char *p;
    short *d;
    int i;
    int n;
    int k80;
    int ke0;
    short c;
    unsigned short *s;
    unsigned short *q;
    short *e;
    int cnt;
    if (((o->f68 & 4)) != 0) {
        call_8c1e15e8(o, 1);
        d = (short *)&frame;
        ke0 = 0xe0;
        i = 0;
        k80 = 0x80;
        p = (char *)o->fa4;
        while (*p != 0) {
            n = p[1];
            p += 3;
            while (n-- != 0) {
                c = *p;
                p++;
                if (((unsigned short)c & ke0) == k80 || ((unsigned short)c & ke0) == ke0) {
                    c = (unsigned short)c << 8 | (unsigned char)*p;
                    p++;
                    n--;
                }
                *d = c;
                i++;
                d++;
            }
        }
        *d = 0;
        o->f68 &= -5;
        s = (unsigned short *)&frame;
    } else {
        s = (unsigned short *)o->f8c;
    }
    operation_8c04bd14((void *)(&o->f74), (void *)s);
    q = s;
    for (cnt = 0; *q != 0; cnt++) {
        q++;
    }
    if (cnt > 0) {
        operation_8c04be80((void *)(&o->f74), (int)(o->f78), cnt);
        e = (short *)((char *)o->f74 + (o->f78 << 1));
        while (*s != 0) {
            *e++ = *s++;
        }
        o->f78 += cnt;
    }
    operation_8c1e25c8((void *)o);
}
