/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02e494
 * function: handle_cmd_83_lobby_menu_8c02e494
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 18 of 76 reference instruction lines
 * differing bytes: 9
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
typedef struct Arg1 Arg1;
typedef struct S_x38784 S_x38784;
typedef struct S_x59488 S_x59488;
typedef struct S_x76304 S_x76304;
typedef struct S_x98672 S_x98672;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
};
typedef struct ObjectData {
    char unknown0[0xa94];
    int fa94;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_x76304 {
    Vector3 f00;
};
struct S_x59488 {
    Vector3 f00;
};
struct S_x98672 {
    Vector3 f00;
};
struct S_x38784 {
    Vector3 f00;
};
extern int g_8c2e2ad8;
extern "C" char g_8c2e7ce0[];
extern "C" void handle_cmd_83_lobby_menu_8c02e494(Object *o, Arg1 *a1)
{
    int v12;
    int v7;
    int v3;
    int v1;
    char *pm3;
    o->v4((0x2be + g_8c2e7ce0));
    ((ObjectData *)o)->fa94 = (int)(unsigned int)a1->f01;
    if (!(g_8c2e2ad8 == 0)) {
        int pm2;
        v3 = 0;
        goto L_8c02e4e8;
        v1 = (int)0;
    L_8c02e4cc:
        ;
        pm2 = v1 * 0xc;
        *(Vector3 *)&((S_x76304 *)(pm2 + (char *)(int *)((char *)o + 0x1d14)))->f00 = *(Vector3 *)&((S_x59488 *)(0xc * v1 + (char *)(int *)((char *)a1 + 0x4)))->f00;
        v3 = (int)(1 + v1);
    L_8c02e4e8:
        ;
        v1 = (int)v3;
        if (((ObjectData *)o)->fa94 > v3) {
            goto L_8c02e4cc;
        }
        return;
    }
    v12 = 0;
    goto L_8c02e51e;
    v7 = (int)(char)(0);
L_8c02e502:
    ;
    pm3 = (char *)o;
    *(&((S_x98672 *)(((char *)(int *)(pm3 + 0x1d14) + v7 * 0xc)))->f00) = *(&((S_x38784 *)(0xc * v7 + (char *)(int *)((char *)a1 + 0x4)))->f00);
    v12 = (int)(1 + v7);
L_8c02e51e:
    ;
    v7 = (int)v12;
    if (0xa > v12) {
        goto L_8c02e502;
    }
}
