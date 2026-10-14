typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv83 S_vv83;
struct S_vv1 {
    int f00;
};
struct S_vv83 {
    int f00;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c44be90 *g_8c44be90;
extern int g_8c460908;
extern int g_8c461ac4;
extern char g_8c461ac8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db9e0;
extern char g_8c2ec0a0[];
extern void call_8c3806f6(int, int, int);
extern void call_8c014498(void *, int);
extern void call_8c0a1bf8(void);
extern void call_8c0a2a4c(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c0a1448(int, void *);
extern void call_8c0a1a78(int);
extern void operation_8c097018(void);
extern void operation_8c04c270(void);
extern void call_8c08710c(void);
extern void operation_8c051a90(void);
extern void call_8c1beba4(int);
extern void operation_8c1bec9c(void *, int);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void operation_19584c(void);
extern void call_8c05f87c(void *);
extern void call_8c1003d0(void *);
extern int get_field_8c0353d4(void);
extern void operation_8c096488(int);
extern void operation_8c035494(void);
extern void call_8c0348bc(void *, int);
void operation_8c034618(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    call_8c3806f6(0, 0, 0);
    call_8c014498((void *)((void *)0x8c2e2e84), 4);
    call_8c0a1bf8();
    call_8c0a2a4c();
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf8);
    if (t1 != 0) {
        call_8c0a1448(t1, g_8c44be88);
    }
    call_8c0a1a78(5);
    operation_8c097018();
    operation_8c04c270();
    call_8c08710c();
    operation_8c051a90();
    call_8c1beba4(1);
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t2 != 0) {
        operation_8c1bec9c((void *)t2, (int)g_8c44be84);
    }
    t3 = call_8c011ecc(0x440);
    if (t3 != 0) {
        call_8c03d610(t3, 1, (void *)((void *)0x8c2ebfe4), 0, 0, 0);
    }
    g_8c460908 = (int)(t3);
    if (t3 != 0) {
        operation_19584c();
        call_8c05f87c((void *)((g_8c2ec0a0 + 0x449)));
        call_8c1003d0((void *)((g_8c2ec0a0 + 0x457)));
        t4 = get_field_8c0353d4();
        if (t4 != 0) {
            g_8c461ac4 = 0;
            g_8c461ac8 = 0;
            operation_8c096488((int)g_8c44be90);
        } else {
            g_8c461ac4 = 1;
            operation_8c035494();
            call_8c0348bc(g_8c44be90, (int)(g_8c4db9e0 + 0x370));
        }
        {
            short i;
            unsigned int *p = (unsigned int *)0x8c004000;
            unsigned int limit = 4096;
            for (i = 0; i < limit; i++) {
                if (*p++) for (;;) {
                }
            }
        }
    }
}
