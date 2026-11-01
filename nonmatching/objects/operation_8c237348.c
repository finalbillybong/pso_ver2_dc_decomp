/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c237348
 * function: operation_8c237348
 * language: c
 * reference size: 808 bytes
 * compiled size: 808 bytes (+0.0%)
 * differing lines: 32 of 361 reference instruction lines
 * differing bytes: 29
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_s20 S_c8c122700_s20;
typedef struct S_c8c122700_s2c S_c8c122700_s2c;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Block_c8c122700_20 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_c8c122700_20;
typedef struct Block_frame_30 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_30;
typedef struct Block_frame_24 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_24;
typedef struct Block_frame_18 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_18;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    int f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
    char unknown38[0xc];
    int f44;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    Block_c8c122700_20 f20;
    int f2c;
    char unknown30[0x8];
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
};
struct S_c8c122700_s20 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_c8c122700_s2c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    Block_frame_24 f24;
    Block_frame_30 f30;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c510b2c[];
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c18e8a0(void *, int);
extern void create_effect(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c0a1ed0(int);
extern void call_8c0b6824(S_c8c122700 *, void *, int, int, int, void *);
void operation_8c237348(Object *o)
{
    Frame frame;
    char *v4;
    S_c8c122700 *t1;
    int v3;
    char *v2;
    char *v1;
    int t2;
    int t3;
    S_c8c122700 *t4;
    int t5;
    S_c8c122700 *t6;
    if (*(unsigned short *)(g_8c510b2c + 0x48) == 0) {
        o->f34 = (Arg0_34 *)((int)o->f34 + 1);
        if ((int)(o->f34) != 1) {
            return;
        }
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x5c);
        if (t1 == 0) {
            return;
        }
        v1 = (char *)o->f44;
        v2 = (char *)o->f2c;
        v3 = (int)*(short *)(g_8c510b2c + 0x14);
        TObject_ctor_8c0330e4((void *)t1, g_8c44be9c);
        t1->f18 = (void *)0x8c279068;
        *(Vector3 *)&t1->f20 = *(Vector3 *)&o->f20;
        t1->f2c = (int)(t1->f20.f00);
        v4 = (char *)((S_c8c122700_s20 *)((char *)t1 + 0x20))->f04;
        ((S_c8c122700_s2c *)((char *)t1 + 0x2c))->f04 = (int)(v4);
        ((S_c8c122700_s2c *)((char *)t1 + 0x2c))->f08 = (int)(((S_c8c122700_s20 *)((char *)t1 + 0x20))->f08);
        t1->f20.f04 -= 16.0f;
        t1->f40 = 0;
        t1->f38 = 0;
        t1->f3c = 0;
        t1->f4c = (int)(v3);
        t1->f48 = 0;
        t1->f44 = 0;
        t1->f54 = (int)(v2);
        t1->f58 = (int)(v1);
        t1->f50 = 0;
        return;
    }
    if (*(unsigned short *)(g_8c510b2c + 0x48) == 6) {
        o->f34 = (Arg0_34 *)((int)o->f34 + 1);
        t2 = call_8c18e8a0((void *)(o->f34), 5);
        if (t2 != 0 || !(0x1e >= (int)(o->f34))) {
            return;
        }
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&o->f20;
        (&frame)->f30.f04 += 7.0f;
        create_effect((void *)(&(&frame)->f30), 0x17d, 0x40);
        play_se_8c05fbf8(0x1002e, (void *)(&o->f20), 0, 0);
        return;
    }
    if (*(unsigned short *)(g_8c510b2c + 0x48) == 2) {
        o->f34 = (Arg0_34 *)((int)o->f34 + 1);
        if (o->f2c != 0) {
            if ((int)(o->f34) != 1) {
                return;
            }
            operation_8c0a1ed0(2);
            *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f20;
            (&frame)->f24.f04 += 7.0f;
            create_effect((void *)(&(&frame)->f24), 0x45, 0x40);
            create_effect((void *)(&(&frame)->f24), 0x189, 0x40);
            play_se_8c05fbf8(0x10012, (void *)(&o->f20), 0, 0);
            return;
        }
        if ((int)(o->f34) != 1) {
            return;
        }
        operation_8c0a1ed0(2);
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f20;
        (&frame)->f18.f04 += 7.0f;
        create_effect((void *)(&(&frame)->f18), 0x45, 0x40);
        create_effect((void *)(&(&frame)->f18), 0x189, 0x40);
        play_se_8c05fbf8(0x10012, (void *)(&o->f20), 0, 0);
        return;
    }
    if (*(unsigned short *)(g_8c510b2c + 0x48) != 0) {
        o->f34 = (Arg0_34 *)((int)o->f34 + 1);
        if (o->f2c != 0) {
            t3 = call_8c18e8a0((void *)(o->f34), 5);
            if (t3 != 0) {
                return;
            }
            if (!(0x32 >= (int)(o->f34))) {
                return;
            }
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f20;
            (&frame)->f0c.f04 += 7.0f;
            create_effect((void *)(&(&frame)->f0c), 0x17e, 0x40);
            t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t4 == 0) {
                return;
            }
            call_8c0b6824(t4, (void *)(&o->f20), 5, 0x2000c, 0, g_8c44be98);
            return;
        }
        t5 = call_8c18e8a0((void *)(o->f34), 5);
        if (t5 == 0 && 0x32 >= (int)(o->f34)) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20;
            (&frame)->f00.f04 += 7.0f;
            create_effect((void *)(&frame), 0x17f, 0x40);
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t6 != 0) {
                call_8c0b6824(t6, (void *)(&o->f20), 5, 0x2000c, 0, g_8c44be98);
            }
        }
    }
}
