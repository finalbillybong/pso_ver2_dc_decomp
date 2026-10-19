typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c506350 S_L8c506350;
typedef struct S_L8c506350_38 S_L8c506350_38;
typedef struct S_L8c50638c S_L8c50638c;
typedef struct S_L8c50638c_38 S_L8c50638c_38;
typedef struct S_L8c5063c8 S_L8c5063c8;
typedef struct S_L8c5063c8_38 S_L8c5063c8_38;
typedef struct S_g8c506404 S_g8c506404;
struct S_L8c506350 {
    char unknown0[0x38];
    S_L8c506350_38 *f38;
};
struct S_L8c50638c {
    char unknown0[0x38];
    S_L8c50638c_38 *f38;
};
struct S_L8c5063c8 {
    char unknown0[0x38];
    S_L8c5063c8_38 *f38;
};
extern int g_8c506340;
extern int g_8c506344;
extern int g_8c506348;
extern S_g8c506404 *g_8c506404;
extern S_L8c506350 g_8c506350;
extern S_L8c50638c g_8c50638c;
extern S_L8c5063c8 g_8c5063c8;
extern void request_resource_release(void *);
extern void call_8c011ec0(void *);
extern void call_8c12b880(void *, int, int);
extern void operation_8c25decc(int, int);
void operation_8c22ce80(void)
{
    if (g_8c506404 != 0) {
        request_resource_release(g_8c506404);
        g_8c506404 = (S_g8c506404 *)0;
    }
    if ((&g_8c506350)->f38 != 0) {
        call_8c011ec0((void *)((&g_8c506350)->f38));
        (&g_8c506350)->f38 = (S_L8c506350_38 *)0;
    }
    if ((&g_8c50638c)->f38 != 0) {
        call_8c011ec0((void *)((&g_8c50638c)->f38));
        (&g_8c50638c)->f38 = (S_L8c50638c_38 *)0;
    }
    if ((&g_8c5063c8)->f38 != 0) {
        call_8c011ec0((void *)((&g_8c5063c8)->f38));
        (&g_8c5063c8)->f38 = (S_L8c5063c8_38 *)0;
    }
    g_8c506340 = 0;
    g_8c506344 = 0;
    g_8c506348 = 0;
    call_8c12b880((void *)((void *)&g_8c506350), 0, 0x3c);
    call_8c12b880((void *)((void *)&g_8c50638c), 0, 0x3c);
    call_8c12b880((void *)((void *)&g_8c5063c8), 0, 0x3c);
    *(int *)0x8c5064f8 = 0;
    *(int *)0x8c5064fc = 0;
    *(int *)0x8c506500 = 0;
    operation_8c25decc(1, 1);
}
