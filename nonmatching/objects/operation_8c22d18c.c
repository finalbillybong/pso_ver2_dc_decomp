/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22d18c
 * function: operation_8c22d18c
 * language: c
 * reference size: 444 bytes
 * compiled size: 444 bytes (+0.0%)
 * differing lines: 12 of 178 reference instruction lines
 * differing bytes: 237
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c506350 S_L8c506350;
typedef struct S_L8c506350_34 S_L8c506350_34;
typedef struct S_L8c506350_38 S_L8c506350_38;
typedef struct S_L8c50638c S_L8c50638c;
typedef struct S_L8c50638c_34 S_L8c50638c_34;
typedef struct S_L8c50638c_38 S_L8c50638c_38;
typedef struct S_L8c5063c8 S_L8c5063c8;
typedef struct S_L8c5064f0 S_L8c5064f0;
typedef struct S_g8c506404 S_g8c506404;
typedef struct S_g8c5064fc S_g8c5064fc;
typedef struct S_g8c506500 S_g8c506500;
typedef struct Object Object;
typedef struct Arg0_414 Arg0_414;
typedef struct S_vv3 S_vv3;
struct S_L8c506350 {
    char unknown0[0x34];
    S_L8c506350_34 *f34;
    S_L8c506350_38 *f38;
};
struct S_L8c50638c {
    char unknown0[0x34];
    S_L8c50638c_34 *f34;
    S_L8c50638c_38 *f38;
};
struct S_L8c5063c8 {
    char unknown0[0x38];
    int f38;
};
struct Object {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x412];
    Arg0_414 *f414;
};
struct S_vv3 {
    int f00;
};
struct S_L8c5064f0 {
    int f00;
    int f04;
};
extern int g_8c506340;
extern int g_8c506344;
extern int g_8c506348;
extern char g_8c50634c;
extern S_g8c506404 *g_8c506404;
extern S_g8c5064fc *g_8c5064fc;
extern S_g8c506500 *g_8c506500;
extern S_L8c506350 g_8c506350;
extern S_L8c50638c g_8c50638c;
extern S_L8c5063c8 g_8c5063c8;
extern S_L8c5064f0 g_8c5064f0;
extern int strncmp(void *, void *, int);
extern void memcpy_8c12b77c(void *, void *, void *);
extern void operation_8c25decc(int, int);
extern void request_resource_release(void *);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void call_8c22d348(void *, void *);
extern void TQuestVmDownLoadServer_create_8c22eb58(void);
void operation_8c22d18c(Object *o)
{
    int v1;
    int v2;
    int v5;
    int v8;
    S_vv3 *v3;
    S_vv3 *pm8;
    int v21;
    int v28;
    int t5;
    int t1;
    int t2;
    int t4;
    int t3;
    int t6;
    Arg0_414 *pm9;
    Arg0_414 *pm12;
    if (o != 0) {
        int pm10;
        unsigned char pm13;
        if (strncmp((void *)((void *)&g_8c506350), (void *)((0x4 + (char *)o)), 0x10) == 0) {
            v8 = (int)((int)(&g_8c506350)->f38 + 8);
            v3 = (S_vv3 *)(void *)&g_8c506340;
        } else {
            if (strncmp((void *)((void *)&g_8c50638c), (void *)(((char *)o + 0x4)), 0x10) == 0) {
                pm8 = (S_vv3 *)(void *)&g_8c506344;
                v8 = (int)((int)(&g_8c50638c)->f38 + 8);
                v3 = pm8;
            } else {
                if (strncmp(((void *)&g_8c5063c8), (void *)((0x4 + (char *)o)), 0x10) == 0) {
                    v3 = (S_vv3 *)(void *)&g_8c506348;
                    v8 = (&g_8c5063c8)->f38;
                } else {
                    return;
                }
            }
        }
        pm13 = o->f01;
        memcpy_8c12b77c((void *)(& *(int *)((char *)((char *)v8 + 0x0) + (pm13 << 10))), (void *)((0x14 + (char *)o)), (void *)(o->f414));
        pm12 = o->f414;
        pm10 = (int)g_8c506500 + (int)pm12;
        g_8c506500 = (S_g8c506500 *)(pm10);
        operation_8c25decc((int)g_8c506500, (int)g_8c5064fc);
        pm9 = o->f414;
        if ((unsigned int)0x400 > (unsigned int)pm9) {
            v3->f00 = 1;
        }
    }
    switch (g_8c50634c) {
        case 0:
        if (g_8c506340 == 0) {
            return;
        }
        if (g_8c506344 == 0) {
            return;
        }
        if (g_8c506404 != 0) {
            request_resource_release(g_8c506404);
            g_8c506404 = (S_g8c506404 *)0;
        }
        t4 = operation_8c2324e0();
        v21 = t4;
        if (t4 == 0) {
            t6 = operation_8c2324c0();
            v21 = (int)t6;
        }
        (&g_8c5064f0)->f04 = (int)(v21);
        (&g_8c5064f0)->f00 = (v21);
        call_8c22d348((void *)((&g_8c506350)->f38), (void *)((&g_8c506350)->f34));
        call_8c22d348((void *)((&g_8c50638c)->f38), (void *)((&g_8c50638c)->f34));
        TQuestVmDownLoadServer_create_8c22eb58();
        return;
        case 1:
        if (g_8c506340 != 0) {
            if (g_8c506344 != 0 && g_8c506348 != 0) {
                int pm14;
                if (!(g_8c506404 == 0)) {
                    request_resource_release(g_8c506404);
                    g_8c506404 = (S_g8c506404 *)0;
                }
                pm14 = operation_8c2324e0();
                t5 = pm14;
                v28 = t5;
                if (t5 == 0) {
                    int t7;
                    t7 = operation_8c2324c0();
                    v28 = (int)t7;
                }
                (&g_8c5064f0)->f04 = (int)(v28);
                (&g_8c5064f0)->f00 = (v28);
                call_8c22d348((void *)((&g_8c506350)->f38), (void *)((&g_8c506350)->f34));
                call_8c22d348((void *)((&g_8c50638c)->f38), (void *)((&g_8c50638c)->f34));
                TQuestVmDownLoadServer_create_8c22eb58();
            }
        }
    }
}
