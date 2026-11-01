/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c024e5c
 * function: handle_6x30_change_player_level_8c024e5c
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 48 of 194 reference instruction lines
 * differing bytes: 97
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
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_184 S_vv4_184;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
};
struct S_vv4 {
    char unknown0[0x184];
    S_vv4_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
};
struct S_vv4_184 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0xc];
    int f18;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern char g_8c2e75bc[];
extern int object_ready(void *);
extern float operation_8c1a70d4(int);
extern float operation_8c1a70f4(void *);
extern void call_8c0439bc(S_vv4 *, S_vv4_184 *, int, int, float, float);
extern void operation_8c025020(void *, int);
void handle_6x30_change_player_level_8c024e5c(Object *o)
{
    int v31;
    unsigned short v7;
    S_vv4 *v4;
    int v30;
    int v27;
    int v24;
    int v21;
    int v18;
    int v15;
    int v11;
    int v8;
    float t2;
    float t3;
    {
        Object *base = o;
        if (base->f02 == 0xffff) {
            v4 = 0;
        } else if ((int)base->f02 >= 0xc) {
            v4 = 0;
        } else {
            v4 = *(S_vv4 **)((char *)0x8c41ce2c + (base->f02 << 2));
        }
        if (v4 == 0 || object_ready((void *)v4) == 0) {
            return;
        }
        v30 = 0;
        v27 = 0;
        v24 = 0;
        v21 = 0;
        v18 = 0;
        v15 = 0;
        v11 = 0;
        v8 = 0;
        v7 = base->f02;
        if (g_8c4627c8 == 0 && v7 == g_8c418248) {
            v8 = 1;
        }
        if (v8 == 0 && base->f04 >= 0) {
            v11 = 1;
        }
        if (v11 != 0 && base->f06 >= 0) {
            v15 = 1;
        }
        if (v15 != 0 && base->f08 >= 0) {
            v18 = 1;
        }
        if (v18 != 0 && base->f0a >= 0) {
            v21 = 1;
        }
        if (v21 != 0 && base->f0c >= 0) {
            v24 = 1;
        }
        if (v24 != 0 && base->f0e >= 0) {
            v27 = 1;
        }
        if (v27 != 0 && base->f10 >= 0) {
            v30 = 1;
        }
        if (v30 != 0) {
            v4->f184->f00 = base->f04;
            v4->f184->f02 = base->f06;
            v4->f184->f04 = base->f08;
            v4->f184->f06 = base->f0a;
            v4->f184->f08 = base->f0c;
            v4->f184->f0a = base->f0e;
            v4->f184->f18 = base->f10;
            t2 = operation_8c1a70d4((int)v4);
            t3 = operation_8c1a70f4((void *)v4);
            call_8c0439bc(v4, v4->f184, 0, 0, t2, t3);
            v4->f330 = v4->f198;
            v4->f332 = v4->f19a;
            v31 = (v4->f350 & 4) != 0;
            if (v31 == 0) {
                if (base->f12 == 1) {
                    operation_8c025020((void *)v4, (int)(g_8c2e75bc + 0x19));
                    return;
                }
                operation_8c025020((void *)v4, (int)(g_8c2e75bc + 0x24));
            }
        }
    }
}
