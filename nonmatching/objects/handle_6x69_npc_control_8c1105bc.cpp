/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1105bc
 * function: handle_6x69_npc_control_8c1105bc
 * language: c++
 * reference size: 548 bytes
 * compiled size: 548 bytes (+0.0%)
 * differing lines: 78 of 243 reference instruction lines
 * differing bytes: 24
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_c8c01e790;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    unsigned short f06;
    short f08;
    short f0a;
};
class S_c8c01e790 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct S_c8c01e790Data {
    char unknown0[0x5f8];
    short f5f8;
    char unknown5fa[0x2];
    int f5fc;
} S_c8c01e790Data;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x2ee];
    unsigned short f5f8;
};
extern "C" int load_npc_player_chars_8c10bc84(int);
extern "C" S_c8c01e790 *operation_8c01e790(int, int, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c10be58(int, void *, short, int, void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02ab70(void *);
extern "C" void call_8c10c174(int, void *, short, int, int, void *);
extern "C" void handle_6x69_npc_control_8c1105bc(Object *o)
{
    unsigned short v1;
    int v2;
    int v3;
    int v6;
    S_c8c01e790 *t2;
    int v7;
    S_c8c01e790 *t9;
    int t1;
    int v4;
    int t3;
    int t4;
    S_c8c01e790 *t5;
    S_c8c021ef8 *t6;
    S_c8c021ef8 *t7;
    int t8;
    int v5;
    int t10;
    int t11;
    S_c8c01e790 *t12;
    v1 = (unsigned short)o->f04;
    v2 = (int)0xffff;
    if (v1 == (unsigned short)v2) {
        return;
    }
    switch (o->f08) {
    case 0:
        if (o->f06 == v2) {
            return;
        }
        if ((int)v1 == *(int *)0x8c418248) {
            t1 = load_npc_player_chars_8c10bc84((int)(o->f0a));
            t2 = operation_8c01e790((int)(o->f06), 5, t1);
            if (t2 == 0) {
                return;
            }
            t2->v7();
            ((S_c8c01e790Data *)t2)->f5f8 = *(int *)0x8c418248;
            ((S_c8c01e790Data *)t2)->f5fc = o->f0a;
            t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xec);
            if (t3 == 0) {
                return;
            }
            call_8c10be58(t3, (void *)(*(S_g8c418248 **)0x8c418248), o->f06, (int)(o->f0a), (void *)(*(S_g8c44be84 **)0x8c44be84));
            return;
        }
        t4 = load_npc_player_chars_8c10bc84((int)(o->f0a));
        t5 = operation_8c01e790((int)(o->f06), 4, t4);
        if (t5 == 0) {
            return;
        }
        t5->v7();
        return;
    case 1:
        t6 = lookup_low_id(v1);
        if (t6 == 0) {
            return;
        }
        v3 = (int)(t6->f308 == 3);
        if (v3 == 0) {
            return;
        }
        t6->f5f8 = 0xffff;
        return;
    case 2:
        v4 = (int)0x308;
        v5 = (int)0x5f8;
        v6 = (int)0;
        while (4 > v6) {
            t7 = lookup_low_id(v6);
            if (t7 != 0) {
                v7 = (int)(*(short *)((char *)((char *)t7 + 0x0) + (v4)) == 3);
                if (v7 != 0) {
                    *(short *)((char *)((char *)t7 + 0x0) + (v5)) = o->f04;
                }
            }
            v6 = (int)(v6 + 1);
        }
        return;
    case 3:
        if (o->f06 != v2) {
            if ((int)v1 == *(int *)0x8c418248) {
                t8 = load_npc_player_chars_8c10bc84((int)(o->f0a));
                t9 = operation_8c01e790((int)(o->f06), 5, t8);
                if (t9 == 0) {
                    return;
                }
                operation_8c02ab70((void *)t9);
                t9->v7();
                ((S_c8c01e790Data *)t9)->f5f8 = *(int *)0x8c418248;
                ((S_c8c01e790Data *)t9)->f5fc = o->f0a;
                t10 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xec);
                if (t10 == 0) {
                    return;
                }
                call_8c10c174(t10, (void *)(*(S_g8c418248 **)0x8c418248), o->f06, (int)(o->f0a), 1, (void *)(*(S_g8c44be84 **)0x8c44be84));
                return;
            }
            t11 = load_npc_player_chars_8c10bc84((int)(o->f0a));
            t12 = operation_8c01e790((int)(o->f06), 4, t11);
            if (t12 != 0) {
                t12->v7();
                operation_8c02ab70((void *)t12);
            }
        }
    }
}
