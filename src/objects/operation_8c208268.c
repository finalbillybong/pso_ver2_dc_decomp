typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c504968 S_L8c504968;
typedef struct S_L8c504968_38 S_L8c504968_38;
typedef struct S_L8c5049a4 S_L8c5049a4;
typedef struct S_L8c5049a4_38 S_L8c5049a4_38;
typedef struct S_g8c5049e8 S_g8c5049e8;
typedef struct S_g8c5049ec S_g8c5049ec;
typedef struct S_g8c505960 S_g8c505960;
typedef struct S_g8c505960_s4 S_g8c505960_s4;
struct S_L8c5049a4 {
    char unknown0[0x38];
    S_L8c5049a4_38 *f38;
};
struct S_L8c504968 {
    char unknown0[0x38];
    S_L8c504968_38 *f38;
};
struct S_g8c505960_s4 {
    char unknown0[0x24];
    int f24;
};
extern int g_8c4dc800;
extern int g_8c4dc844;
extern int g_8c5049e0;
extern int g_8c5049e4;
extern S_g8c5049e8 *g_8c5049e8;
extern S_g8c5049ec *g_8c5049ec;
extern S_g8c505960 *g_8c505960;
extern S_L8c504968 g_8c504968;
extern S_L8c5049a4 g_8c5049a4;
extern int operation_8c01c228(void);
extern void clear_global_8c01c210(void);
extern void call_8c18de08(void *);
extern void request_resource_release(void *);
extern void operation_8c21da34(void);
extern void clear_group_flag_08(void *);
extern void operation_8c25decc(int, int);
void operation_8c208268(void)
{
    int t1;
    t1 = operation_8c01c228();
    if (t1 == 0) {
        g_8c4dc800 = 0;
        g_8c4dc844 = 0;
        clear_global_8c01c210();
        if ((&g_8c5049a4)->f38 != 0) {
            call_8c18de08((void *)((&g_8c5049a4)->f38));
            (&g_8c5049a4)->f38 = (S_L8c5049a4_38 *)0;
        }
        if ((&g_8c504968)->f38 != 0) {
            call_8c18de08((void *)((&g_8c504968)->f38));
            (&g_8c504968)->f38 = (S_L8c504968_38 *)0;
        }
        if (g_8c5049e8 != 0) {
            request_resource_release(g_8c5049e8);
            g_8c5049e8 = (S_g8c5049e8 *)0;
        }
        if (g_8c5049ec != 0) {
            request_resource_release(g_8c5049ec);
            g_8c5049ec = (S_g8c5049ec *)0;
        }
        g_8c5049e0 = 0;
        g_8c5049e4 = 0;
        if (g_8c505960 != 0) {
            ((S_g8c505960_s4 *)((char *)g_8c505960 + 0x4))->f24 = 0xb;
        }
        operation_8c21da34();
        clear_group_flag_08((void *)((void *)0x8c44bec8));
        operation_8c25decc(1, 1);
    }
}
