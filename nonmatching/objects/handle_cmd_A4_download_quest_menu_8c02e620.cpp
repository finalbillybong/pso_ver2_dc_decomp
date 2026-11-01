/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02e620
 * function: handle_cmd_A4_download_quest_menu_8c02e620
 * language: c++
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 18 of 60 reference instruction lines
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
typedef struct Block152 {
    int words[38];
} Block152;
typedef struct Arg1 Arg1;
typedef struct S_x28880 S_x28880;
typedef struct S_x89856 S_x89856;
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
    char unknown0[0xa8c];
    int fa8c;
    char unknowna90[0xa720];
    int fb1b0;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_x28880 {
    Block152 f00;
};
struct S_x89856 {
    Block152 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void handle_cmd_A4_download_quest_menu_8c02e620(Object *o, Arg1 *a1)
{
    int pm3;
    int v3;
    char *v27;
    int pm1;
    int pm2;
    int v1;
    unsigned short pm4;
    int pm5;
    int pm6;
    o->v4((g_8c2e7ce0 + 0x2ec));
    v3 = (int)0;
    ((ObjectData *)o)->fa8c = (int)(int)a1->f01;
    goto L_8c02e674;
    pm4 = 0;
    pm1 = pm4;
    v1 = pm1;
L_8c02e654:
    ;
    pm5 = 0x98;
    pm3 = v1 * pm5;
    pm1 = pm3;
    *(Block152 *)&((S_x28880 *)(pm1 + (char *)(int *)((char *)o + 0x1dd4)))->f00 = *(Block152 *)&((S_x89856 *)((char *)(int *)(0x4 + (char *)a1) + v1 * 0x98))->f00;
    pm6 = (int)((v1 + 1));
    pm2 = pm6;
    v3 = pm2;
L_8c02e674:
    ;
    v1 = (int)v3;
    if (((ObjectData *)o)->fa8c > v3) {
        goto L_8c02e654;
    }
    v27 = (char *)((ObjectData *)o)->fb1b0;
    if (!(v27 == 0)) {
        pm3 = (int)(a1->f01);
        v3 = pm3;
        ((void ( *) ( int , Arg1 *))(v27))(v3, a1);
    }
}
