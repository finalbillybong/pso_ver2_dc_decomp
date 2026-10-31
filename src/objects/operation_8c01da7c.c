typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c36b024 S_c8c36b024;
typedef struct S_c8c36b024_30 S_c8c36b024_30;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct S_vv5 {
    S_vv5_0 *f00;
};
struct S_c8c36b024 {
    char unknown0[0x30];
    S_c8c36b024_30 *f30;
};
struct S_c8c36b024_30 {
    int f00;
};
struct S_vv4 {
    S_c8c36b024 *f00;
};
struct S_vv6 {
    int f00;
};
struct S_vv8 {
    void *f00;
};
struct S_vv9 {
    int f00;
};
extern S_c8c36b024 *call_8c36b024(void *);
void operation_8c01da7c(void)
{
    int i;
    int n;
    void **src;
    S_c8c36b024 **out;
    int *flags;
    S_c8c36b024 *t1;
    n = 0;
    out = (S_c8c36b024 **)0x8c41cba0;
    src = (void **)0x8c2e34e0;
    flags = (int *)((char *)out + 0x10);
    for (i = 0; i < 4; i++) {
        t1 = call_8c36b024(*src++);
        if (t1->f30->f00 & 1) {
            *out = t1;
            *flags = 1;
            n++;
            out++;
            flags++;
        }
    }
    for (; n < 4; n++) {
        *out++ = (S_c8c36b024 *)0x8c2e3470;
        *flags++ = 0;
    }
}
