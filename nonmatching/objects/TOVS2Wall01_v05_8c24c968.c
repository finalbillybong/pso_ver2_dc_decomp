/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24c968
 * function: TOVS2Wall01_v05_8c24c968
 * language: c
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 74 of 152 reference instruction lines
 * differing bytes: 84
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOVS2Wall01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg1 Arg1;
typedef struct S_vv38_0 S_vv38_0;
typedef struct S_x85584 S_x85584;
typedef struct Block_frame_4 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_4;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x40];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
    char unknown30c[0x4c];
    int f358;
};
struct Arg1 {
    short f00;
};
struct Frame {
    short f00;
    char unknown2[0x2];
    Block_frame_4 f04;
};
struct S_x85584 {
    Vector3 f00;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c05428c(void *, int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjChip_ctor_8c087d8c(void *, void *, void *);
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TOVS2Wall01_v05_8c24c968(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    int v6;
    int v3;
    int v38;
    int v4;
    int v7;
    int t1;
    if (a1 != 0) {
        o->f30a = a1->f00;
    }
    if (o->f30a != 0) {
        if (o->f30a != 1) {
            o->f30a = 0;
        } else {
            o->f358 = 0;
            if (a2 != 0) {
                operation_8c05428c((void *)o, 0, 1);
                v3 = (int)0x324;
                v6 = (int)7;
                v4 = (int)0x42c;
                while (0xf >= v6) {
                    *(Block76 *)&(&frame)->f04 = *(Block76 *)&*(Block76 *)0x8c33eb94;
                    *(Vector3 *)&(&frame)->f04.f0c = *(Vector3 *)&((S_x85584 *)((int)o + v3))->f00;
                    v7 = (int)(v6 << 4);
                    (&frame)->f04.f38 = o->f40;
                    v38 = (int)*(int *)0x8c510fe0;
                    (&frame)->f04.f40 = (int)(*(int *)((char *)((char *)*(S_vv38_0 **)((char *)((char *)v38 + 0x0) + (v4)) + 0x8) + (v7)));
                    (&frame)->f04.f44 = (int)(*(int *)((char *)((char *)*(S_vv38_0 **)((char *)((char *)v38 + 0x0) + (v4)) + 0xc) + (v7)));
                    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x78);
                    if (t1 != 0) {
                        TObjChip_ctor_8c087d8c((void *)t1, (void *)(*(S_g8c44be98 **)0x8c44be98), (void *)(&(&frame)->f04));
                    }
                    v6 = (int)(v6 + 1);
                }
                create_effect_777c((void *)(((char *)o + 0x3c)), 0x45);
                create_effect_777c((void *)(((char *)o + 0x3c)), 0x46);
                play_se_8c05fbf8(0x40005, (void *)(((char *)o + 0x3c)), 0, 0);
            }
        }
    }
    (&frame)->f00 = o->f30a;
    if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
        *(SBlock4 *)&*(char *)((char *)((char *)*(S_g8c46ed0c **)0x8c46ed0c + 0x0) + (o->f84->f04 << 2)) = *(SBlock4 *)&*(char *)&(&frame)->f00;
    }
}
