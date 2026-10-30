typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e1ae0 S_g8c4e1ae0;
typedef struct S_g8c4e1af0 S_g8c4e1af0;
typedef struct S_g8c4e2280 S_g8c4e2280;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv3 S_vv3;
typedef struct S_vv35 S_vv35;
typedef struct S_vv35_42c S_vv35_42c;
typedef struct S_vv35_42c_88 S_vv35_42c_88;
typedef struct S_vv3_2c S_vv3_2c;
typedef struct S_vv4 S_vv4;
typedef struct S_vv7 S_vv7;
struct S_vv1 {
    int f00;
};
struct S_vv35 {
    char unknown0[0x42c];
    S_vv35_42c *f42c;
};
struct S_vv35_42c {
    char unknown0[0x88];
    S_vv35_42c_88 *f88;
    int f8c;
};
struct S_vv3 {
    char unknown0[0x2c];
    S_vv3_2c *f2c;
};
struct S_vv4 {
    int f00;
    int f04;
};
struct S_vv7 {
    int f00;
};
struct S_vv10 {
    int f00;
};
extern S_g8c4e1af0 *g_8c4e1af0;
extern int g_8c4e1af4;
extern int g_8c4e227c;
extern S_g8c4e2280 *g_8c4e2280;
extern void call_8c3c1500(float, float, float);
extern void call_8c3c1540(float, float);
extern void call_8c3c1554(float, float, float);
extern void call_8c3827d8(void *);
extern void set_effect_blend_state(float);
extern int call_8c3c1460(S_vv3 *);
extern int call_8c011e9c(int);
extern void call_8c3c10f6(S_vv3 *, void *);
extern void restore_effect_blend_state(void);
extern void clear_global_8c1acff8(void);
void operation_8c1acea4(void)
{
    S_vv35 *v35;
    int t1;
    S_vv4 *v4;
    S_vv7 *v7;
    int v36;
    int v6;
    S_vv3 *v3;
    int v5;
    int pm7;
    S_vv35_42c *pm2;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) {
                for (; ; ) {
                }
            }
        }
    }
    v35 = (S_vv35 *)g_8c4e2280;
    pm2 = v35->f42c;
    g_8c4e1af0 = (S_g8c4e1af0 *)(pm2->f8c);
    v3 = (S_vv3 *)v35->f42c->f88;
    v4 = (S_vv4 *)v3->f2c;
    v4->f00 &= -3;
    if (v4->f04 != 0) {
        g_8c4e1af4 = (int)(v4->f04);
        call_8c3c1500(1.0f, 0.0f, 0.0f);
        call_8c3c1540(0.96f, 0.3f);
        call_8c3c1554(1.0f, 1.0f, 1.0f);
        call_8c3827d8(g_8c4e1af0);
        set_effect_blend_state(1.0f);
        t1 = call_8c3c1460(v3);
        v5 = (int)0x1000;
        v7 = (S_vv7 *)((int)v4 + 0x18);
        v6 = (int)0;
        while (4 > v6) {
            pm7 = call_8c011e9c(t1);
            v36 = (v6 << 2);
            *(int *)((char *)0x8c4e1ae0 + (v36)) = (pm7);
            if (0 != *(int *)((char *)0x8c4e1ae0 + (v36))) {
                call_8c3c10f6(v3, (void *)(*(S_g8c4e1ae0 **)((char *)0x8c4e1ae0 + (v36))));
                v7->f00 += v5;
            }
            v6 = (int)(v6 + 1);
        }
        restore_effect_blend_state();
        g_8c4e227c = 0;
        clear_global_8c1acff8();
        {
            short i;
            unsigned int *p = (unsigned int *)0x8c004000;
            unsigned int limit = 4096;
            for (i = 0; i < limit; i++) {
                if (*p++) {
                    for (; ; ) {
                    }
                }
            }
        }
    }
}
