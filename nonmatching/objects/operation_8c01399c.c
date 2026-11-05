/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01399c
 * function: operation_8c01399c
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 22 of 43 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c4182fc S_L8c4182fc;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct S_L8c4182fc {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x18];
    int f28;
};
struct S_vv2 {
    Vector3 f00;
};
struct Arg1 {
    char unknown0[0xe8];
    Vector3 fe8;
    Block16 ff4;
};
struct S_vv3 {
    Block16 f00;
};
extern int g_8c4189dc;
extern S_L8c4182fc g_8c4182fc;
extern char gc_8c4182fc[];
void operation_8c01399c(int a0, Arg1 *a1)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    v1 = (int)g_8c4189dc;
    if (!(v1 >= 0x20)) {
        *(int *)((char *)(gc_8c4182fc + 0x28) + (v1 * 0x2c)) = a0;
        v3 = (S_vv3 *)((char *)(gc_8c4182fc + 0xc) + v1 * 0x2c);
        v2 = (S_vv2 *)(v1 * 0x2c + gc_8c4182fc);
        *(Vector3 *)&v2->f00 = *(Vector3 *)&a1->fe8;
        *(Block16 *)&v3->f00 = *(Block16 *)&a1->ff4;
        g_8c4189dc += 1;
    }
}
