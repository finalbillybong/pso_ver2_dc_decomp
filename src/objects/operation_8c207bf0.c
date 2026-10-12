typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c504968 S_L8c504968;
typedef struct S_L8c504968_38 S_L8c504968_38;
typedef struct S_L8c5049a4 S_L8c5049a4;
typedef struct S_L8c5049a4_38 S_L8c5049a4_38;
typedef struct S_g8c504960 S_g8c504960;
typedef struct S_g8c504964 S_g8c504964;
typedef struct S_g8c5049e8 S_g8c5049e8;
typedef struct S_g8c5049ec S_g8c5049ec;
struct S_L8c5049a4 {
    char unknown0[0x38];
    S_L8c5049a4_38 *f38;
};
struct S_L8c504968 {
    char unknown0[0x38];
    S_L8c504968_38 *f38;
};
extern S_g8c504960 *g_8c504960;
extern S_g8c504964 *g_8c504964;
extern S_g8c5049e8 *g_8c5049e8;
extern S_g8c5049ec *g_8c5049ec;
extern int g_8c5049f0;
extern int g_8c505960;
extern S_L8c504968 g_8c504968;
extern S_L8c5049a4 g_8c5049a4;
extern void call_8c18de08(void *);
extern void call_8c011ec0(void *);
extern void request_resource_release(void *);
void operation_8c207bf0(void)
{
    if ((&g_8c5049a4)->f38 != 0) {
        call_8c18de08((void *)((&g_8c5049a4)->f38));
        (&g_8c5049a4)->f38 = (S_L8c5049a4_38 *)0;
    }
    if ((&g_8c504968)->f38 != 0) {
        call_8c18de08((void *)((&g_8c504968)->f38));
        (&g_8c504968)->f38 = (S_L8c504968_38 *)0;
    }
    if (g_8c504964 != 0) {
        call_8c011ec0(g_8c504964);
        g_8c504964 = 0;
    }
    if (g_8c504960 != 0) {
        call_8c011ec0(g_8c504960);
        g_8c504960 = 0;
    }
    if (g_8c5049e8 != 0) {
        request_resource_release(g_8c5049e8);
        g_8c5049e8 = 0;
    }
    if (g_8c5049ec != 0) {
        request_resource_release(g_8c5049ec);
        g_8c5049ec = 0;
    }
    g_8c5049f0 = 0;
    g_8c505960 = 0;
}
