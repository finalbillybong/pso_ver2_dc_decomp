/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139594
 * function: operation_8c139594
 * language: c
 * reference size: 648 bytes
 * compiled size: 648 bytes (+0.0%)
 * differing lines: 56 of 236 reference instruction lines
 * differing bytes: 77
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x4];
    int f3a0;
};
struct S_c8c053d84 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern short g_8c313128;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db920;
extern void call_8c05fd7c(int, Object *, int, int, int);
extern int get_game_mode_8c01c25c(void);
extern int operation_8c0c349c(void);
extern void call_8c138668(Object *);
extern int call_8c139d18(Object *);
extern void operation_8c0a1f60(int, float);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void operation_8c13a3f0(void);
extern int rand(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void create_effect_777c(void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c179178(void *, int, int);
extern void operation_8c13a418(void);
extern void operation_8c179264(void *, int, int);
void operation_8c139594(Object *o)
{
    Frame frame;
    int v5;
    int v9;
    float v10;
    int t1;
    int t2;
    int t3;
    S_c8c053d84 *t4;
    S_c8c053d84 *t5;
    float t6;
    int t7;
    float t8;
    int t9;
    int t10;
    int t11;
    int t12;
    call_8c05fd7c(0x30000, o, 0, 0, 0);
    switch (o->f398) {
    case 0:
        o->f398 = 1;
    case 1:
        t1 = get_game_mode_8c01c25c();
        if (t1 == 0x10) {
            t2 = operation_8c0c349c();
            if (t2 == 0) {
                goto L_8c13961a;
            }
            call_8c138668(o);
        } else {
            call_8c138668(o);
        }
L_8c13961a:;
        t3 = call_8c139d18(o);
        if (t3 == 0) {
            return;
        }
        o->f398 = 2;
        return;
    case 2:
        o->f3a0 = 0x96;
        operation_8c0a1f60(0xb4, 0.03f);
        v5 = (int)0;
        while (6 > v5) {
            t4 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (v5 << 1))));
            if (t4 != 0) {
                t4->f04 |= 8;
            }
            v5 = (int)(v5 + 1);
        }
        t5 = lookup_object_by_id((unsigned short)g_8c313128);
        if (t5 != 0) {
            t5->f34 |= 0x800;
        }
        o->f398 = 3;
        operation_8c13a3f0();
    case 3:
        if (!(--o->f3a0 > 0)) {
            o->f398 = 4;
        }
        t11 = rand();
        v9 = (int)(int)((float)t11 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        t12 = rand();
        v10 = (float)((float)t12 / 32768.0f * 30.0f + 60.0f);
        t6 = njCos_8c38c154(v9);
        (&frame)->f00 = v10 * t6;
        t7 = rand();
        (&frame)->f04 = (float)t7 / 32768.0f * 50.0f + 10.0f;
        t8 = njSin_8c37eb0c(v9);
        (&frame)->f08 = v10 * t8;
        create_effect_777c((void *)(&frame), 0xfb);
        call_8c05fd7c(0x30021, o, 0, 0, 0);
        return;
    case 4:
        t9 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
        if (t9 != 0) {
            operation_8c179178((void *)t9, (int)o, 0);
        }
        operation_8c13a418();
        o->f398 = 5;
        return;
    case 5:
        if (g_8c4db920 != 1) {
            return;
        }
        o->f390 = 3;
        return;
    case -1:
        t10 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
        if (t10 != 0) {
            operation_8c179264((void *)t10, (int)o, 0);
        }
        return;
    }
}
