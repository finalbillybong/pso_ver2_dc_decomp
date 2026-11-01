/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02a624
 * function: handle_6x2F_change_player_hp_8c02a624
 * language: c
 * reference size: 176 bytes
 * compiled size: 172 bytes (-2.3%)
 * differing lines: 10 of 73 reference instruction lines
 * differing bytes: 93
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    short f08;
    unsigned short f0a;
};
struct S_vv5 {
    char unknown0[0x198];
    short f198;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int set_330(void *, short);
extern int operation_8c04a7a0(void *, short);
void handle_6x2F_change_player_hp_8c02a624(Object *o)
{
    int v16;
    S_vv5 *v5;
    int v9;
    int v12;
    int v6;
    int v7;
    int v10;
    v16 = (int)(unsigned short)o->f0a;
    if (v16 == 0xffff) {
        v5 = (S_vv5 *)0;
    } else {
        if (v16 >= 0xc) {
            v5 = (S_vv5 *)0;
        } else {
            v5 = (S_vv5 *)*(int *)((char *)0x8c41ce2c + (v16 << 2));
        }
    }
    if (v5 != 0) {
        v7 = (int)o->f02;
        v12 = v9 = 0;
        if (g_8c4627c8 == 0) {
            v6 = (int)0;
            if (o->f02 == g_8c418248) {
                v6 = (int)1;
            }
            v9 = (int)v6;
        }
        if (v9 == 0) {
            if (o->f08 >= 0) {
                v12 = 1;
            }
        }
        if (v12 != 0) {
        switch (o->f04) {
        case 0:
            set_330((void *)v5, o->f08);
            break;
        case 1:
            operation_8c04a7a0((void *)v5, o->f08);
            break;
        case 2:
            operation_8c04a7a0((void *)v5, v5->f198);
            break;
        }
        }
    }
}
