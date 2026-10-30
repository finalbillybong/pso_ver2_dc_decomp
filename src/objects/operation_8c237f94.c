typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0_14 S_L8c339ca0_14;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_vv2 S_vv2;
typedef struct S_x13712 S_x13712;
struct S_x13712 {
    char unknown0[0x274];
    int f274;
};
struct S_vv2 {
    char f00;
    char f01;
    char unknown2[0x3];
    char f05;
    short f06;
};
typedef struct Game {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    void *f14;
} Game;
extern Game g_8c339ca0;
extern S_g8c44bea0 *g_8c44bea0;
extern void operation_8c24759c(void);
extern int lookup_low_id(int);
extern int call_8c2383dc(void *);
extern void spawn_effect_alt_8c246528(void *, void *, void *);
void operation_8c237f94(void)
{
    int v1;
    S_vv2 *v2;
    int v3;
    char *q;
    int k;
    operation_8c24759c();
    k = 0x274;
    for (v1 = 0; v1 < 4; v1++) {
        q = (char *)(v1 * 0xa4 + (char *)&g_8c339ca0) + k;
        if (*(int *)q != 0) {
            if (lookup_low_id(v1) != 0) {
                v2 = (S_vv2 *)(q + 0x34);
                if (v2->f06 > 0) {
                    v3 = g_8c339ca0.f00;
                    if (v2->f00 == v3 && v2->f05 == g_8c339ca0.f08) {
                        if (v3 == 9) {
                            if (v2->f01 != call_8c2383dc(g_8c339ca0.f14)) {
                                continue;
                            }
                        }
                        spawn_effect_alt_8c246528(g_8c44bea0, (void *)v1, (void *)v2);
                    }
                }
            }
        }
    }
}
