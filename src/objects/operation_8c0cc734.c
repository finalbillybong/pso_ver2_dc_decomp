typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fa4c S_g8c46fa4c;
typedef struct S_g8c46fa50 S_g8c46fa50;
typedef struct S_g8c46fa54 S_g8c46fa54;
typedef struct S_g8c46fa58 S_g8c46fa58;
typedef struct S_g8c46fa64 S_g8c46fa64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_10 S_vv1_10;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv23 S_vv23;
typedef struct S_vv23_10 S_vv23_10;
typedef struct S_vv23_14 S_vv23_14;
typedef struct S_vv45 S_vv45;
typedef struct S_vv45_10 S_vv45_10;
typedef struct S_vv45_14 S_vv45_14;
struct S_vv1 {
    char unknown0[0x10];
    S_vv1_10 *f10;
    S_vv1_14 *f14;
    int f18;
    int f1c;
};
struct S_vv23 {
    char unknown0[0x10];
    S_vv23_10 *f10;
    S_vv23_14 *f14;
    int f18;
    int f1c;
};
struct S_vv45 {
    char unknown0[0x10];
    S_vv45_10 *f10;
    S_vv45_14 *f14;
    int f18;
    int f1c;
};
extern S_g8c46fa4c *g_8c46fa4c;
extern S_g8c46fa50 *g_8c46fa50;
extern S_g8c46fa54 *g_8c46fa54;
extern S_g8c46fa58 *g_8c46fa58;
extern S_g8c46fa64 *g_8c46fa64;
extern void call_8c18de08(void *);
extern void call_8c011ed8(S_vv1 *);
void operation_8c0cc734(void)
{
    S_vv1 *v1;
    S_vv23 *v23;
    S_vv45 *v45;
    call_8c18de08(g_8c46fa64);
    g_8c46fa64 = (S_g8c46fa64 *)0;
    call_8c18de08(g_8c46fa58);
    g_8c46fa58 = (S_g8c46fa58 *)0;
    if (g_8c46fa50 != 0) {
        v1 = (S_vv1 *)g_8c46fa50;
        call_8c18de08((void *)(v1->f10));
        v1->f10 = (S_vv1_10 *)0;
        call_8c18de08((void *)(v1->f14));
        v1->f14 = (S_vv1_14 *)0;
        v1->f18 = 0;
        v1->f1c = 0;
        call_8c011ed8(v1);
    }
    g_8c46fa50 = (S_g8c46fa50 *)0;
    if (g_8c46fa54 != 0) {
        v23 = (S_vv23 *)g_8c46fa54;
        call_8c18de08((void *)(v23->f10));
        v23->f10 = (S_vv23_10 *)0;
        call_8c18de08((void *)(v23->f14));
        v23->f14 = (S_vv23_14 *)0;
        v23->f18 = 0;
        v23->f1c = 0;
        call_8c011ed8((S_vv1 *)v23);
    }
    g_8c46fa54 = (S_g8c46fa54 *)0;
    if (g_8c46fa4c != 0) {
        v45 = (S_vv45 *)g_8c46fa4c;
        call_8c18de08((void *)(v45->f10));
        v45->f10 = (S_vv45_10 *)0;
        call_8c18de08((void *)(v45->f14));
        v45->f14 = (S_vv45_14 *)0;
        v45->f18 = 0;
        v45->f1c = 0;
        call_8c011ed8((S_vv1 *)v45);
    }
    g_8c46fa4c = (S_g8c46fa4c *)0;
}
