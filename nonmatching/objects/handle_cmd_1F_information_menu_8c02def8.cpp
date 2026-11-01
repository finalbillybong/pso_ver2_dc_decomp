/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02def8
 * function: handle_cmd_1F_information_menu_8c02def8
 * language: c++
 * reference size: 152 bytes
 * compiled size: 148 bytes (-2.6%)
 * differing lines: 62 of 66 reference instruction lines
 * differing bytes: 74
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Arg0_a8c Arg0_a8c;
typedef struct Arg1 Arg1;
typedef struct S_x43888 S_x43888;
typedef struct S_x4512 S_x4512;
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
    Arg0_a8c *fa8c;
    char unknowna90[0xa734];
    int fb1c4;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_x43888 {
    Block28 f00;
};
struct S_x4512 {
    Block28 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void handle_cmd_1F_information_menu_8c02def8(Object *o, Arg1 *a1)
{
    int v2;
    int v1;
    int v3;
    char *v25;
    o->v4((g_8c2e7ce0 + 0x1bc));
    ((ObjectData *)o)->fa8c = (Arg0_a8c *)a1->f01;
    v1 = (int)((char *)o + 0xf14);
    v2 = (int)((char *)a1 + 0x20);
    v3 = (int)0;
    while ((int)(((ObjectData *)o)->fa8c) > v3) {
        *(Block28 *)&((S_x43888 *)(v1 + v3 * 0x1c))->f00 = *(Block28 *)&((S_x4512 *)(v2 + v3 * 0x1c))->f00;
        v3 = (int)(v3 + 1);
    }
    v25 = (char *)((ObjectData *)o)->fb1c4;
    if (v25 != 0) {
        ((void (*)(void *, void *, void *))(v25))((void *)(((ObjectData *)o)->fa8c), (void *)(((char *)o + 0xf14)), (void *)(((char *)a1 + 0x4)));
    }
}
