typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block100 {
    int words[25];
} Block100;
typedef struct S_L8c505248 S_L8c505248;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv16 S_vv16;
typedef struct S_vv19 S_vv19;
typedef struct S_vv2 S_vv2;
typedef struct S_vv21 S_vv21;
typedef struct S_vv22 S_vv22;
typedef struct S_vv34 S_vv34;
typedef struct S_vv37 S_vv37;
typedef struct S_vv39 S_vv39;
typedef struct S_vv40 S_vv40;
typedef struct S_vv52 S_vv52;
typedef struct S_vv53 S_vv53;
typedef struct S_vv57 S_vv57;
typedef struct S_vv58 S_vv58;
typedef struct S_vv74 S_vv74;
struct Object {
    int tag;
    char f04[0x30];
    char unknown34[0x30];
    Vector3 f64;
    Block100 f70;
};
struct S_L8c505248 {
    int f00;
    int f04;
    char f08[0x10];
    char f18;
    char f19[0x11];
    char f2a[0x11];
    char f3b[0x11];
    Vector3 f4c;
    Block100 f58;
};
struct S_vv1 {
    char f00;
};
struct S_vv2 {
    char f00;
};
struct S_vv16 {
    char f00;
};
struct S_vv19 {
    char f00;
};
struct S_vv21 {
    char f00;
};
struct S_vv22 {
    char f00;
};
struct S_vv34 {
    char f00;
};
struct S_vv37 {
    char f00;
};
struct S_vv39 {
    char f00;
};
struct S_vv40 {
    char f00;
};
struct S_vv52 {
    char f00;
};
struct S_vv53 {
    char f00;
};
struct S_vv57 {
    char f00;
};
struct S_vv58 {
    char f00;
};
struct S_vv74 {
    char f00;
};
extern S_L8c505248 g_8c505248;
extern void call_8c12b880(void *, int, int);
extern void call_8c12b154(void *, void *, int);
extern int call_8c217c60(void *);
void operation_8c217da8(Object *o)
{
    char *p;
    int i1;
    int i2;
    int i3;
    int i4;
    char *d1;
    char *d2;
    char *d4;
    char c1;
    char c2;
    char c3;
    char c4;
    char *q;
    char *f;
    g_8c505248.f00 = o->tag;
    g_8c505248.f04 = 0;
    q = g_8c505248.f08;
    call_8c12b880(q, 0, 0x11);
    call_8c12b154(q, o->f04, 0x10);
    g_8c505248.f18 = 0;
    p = (char *)call_8c217c60((char *)o + 0x34);
    i1 = 0;
    d1 = g_8c505248.f19;
    while (i1 < 0x10) {
        c1 = *p;
        if (c1 == 0) {
            break;
        }
        p++;
        if (c1 == 0x2c) {
            break;
        }
        *d1 = c1;
        i1++;
        d1++;
    }
    if (*p == 0x2c) {
        p++;
    }
    *d1 = 0;
    f = g_8c505248.f2a;
    i2 = 0;
    d2 = f;
    while (i2 < 0x10) {
        c2 = *p;
        if (c2 == 0) {
            break;
        }
        p++;
        if (c2 == 0x2c) {
            break;
        }
        *d2 = c2;
        i2++;
        d2++;
    }
    if (*p == 0x2c) {
        p++;
    }
    *d2 = 0;
    i3 = 0;
    while (i3 < 0x10) {
        c3 = *p;
        if (c3 == 0) {
            break;
        }
        p++;
        if (c3 == 0x2c) {
            break;
        }
        *f = c3;
        i3++;
        f++;
    }
    if (*p == 0x2c) {
        p++;
    }
    *f = 0;
    i4 = 0;
    d4 = g_8c505248.f3b;
    while (i4 < 0x10) {
        c4 = *p;
        if (c4 == 0) {
            break;
        }
        p++;
        if (c4 == 0x2c) {
            break;
        }
        *d4 = c4;
        i4++;
        d4++;
    }
    *d4 = 0;
    g_8c505248.f4c = o->f64;
    g_8c505248.f58 = o->f70;
}
