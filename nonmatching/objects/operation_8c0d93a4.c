/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d93a4
 * function: operation_8c0d93a4
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 94 of 177 reference instruction lines
 * differing bytes: 145
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_x64016 S_x64016;
typedef struct S_x64016_s4 S_x64016_s4;
typedef struct S_x95408 S_x95408;
struct Frame {
    int f00;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    char unknowna[0x3a];
    int f44;
    char unknown48[0x58];
    int fa0;
};
struct S_vv4 {
    unsigned short f00;
    short f02;
    float f04;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct Object {
    char unknown0[0x440];
    unsigned short f440;
    char unknown442[0xe];
    unsigned short f450;
    short f452;
};
struct S_vv5 {
    char unknown0[0x18];
    int f18;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_x64016 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    float f08;
};
struct S_x64016_s4 {
    char unknown0[0x2];
    short f02;
};
struct S_x95408 {
    char unknown0[0x4];
    unsigned short f04;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void call_8c0d9134(Object *, unsigned short, short, S_vv5 *, int, short, short);
void operation_8c0d93a4(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    int v2;
    int v3;
    S_vv1 *v1;
    S_vv4 *v4;
    S_vv5 *v5;
    unsigned short v51;
    unsigned short ff;
    short k;
    short n8;
    int v10;
    S_c8c053d84 *t1;
    S_x64016_s4 *p;
    v1 = (S_vv1 *)((int)o + a2 * 0xfc + 0x40);
    v2 = (int)0;
    v4 = (S_vv4 *)&v1->f44;
    (&frame)->f00 = *(int *)v4;
    v4 = (S_vv4 *)((char *)v4 + 4);
    for (v3 = 0; v3 < (&frame)->f00; v3++, v4++) {
        v51 = 0xffff;
        if (v4->f00 == v51) {
            continue;
        }
        t1 = lookup_object_by_id(v4->f00);
        if (t1 == 0) {
            continue;
        }
        k = v4->f02;
        v5 = (S_vv5 *)(t1->fdc + k * 0x2c);
        if (v5 == 0) {
            continue;
        }
        n8 = v1->f08;
        if (v2 >= n8) {
            break;
        }
        ff = 0xffff;
        v10 = 0;
        if ((o->f450 & 0xffff) != ff) {
            if ((o->f450 & 0xffff) == v4->f00 && o->f452 == k) {
                if ((o->f440 & 0xffff) == ff) {
                    v10 = 2;
                } else {
                    v10 = 1;
                }
            } else if (n8 > 1) {
                v10 = 1;
            }
        } else {
            if ((o->f440 & 0xffff) == ff) {
                v10 = 2;
            } else {
                v10 = 1;
            }
        }
        if (v10 == 0) {
            continue;
        }
        if (v10 == 1 && v1->f04 == 1) {
            continue;
        }
        if (((v5->f18 & 0x20000000)) == 0 && v4->f00 != a1->f20) {
            call_8c0d9134(o, v4->f00, k, v5, v10, v1->f04, v1->f06);
        }
        p = (S_x64016_s4 *)((char *)((int)v1 + 0xa0 + (v2 << 3)) + 0x4);
        v5->f18 |= 0x20000000;
        *(unsigned short *)p = v4->f00;
        v2++;
        *(float *)((char *)p + 4) = v4->f04;
        p->f02 = v4->f02;
    }
    v1->fa0 = (int)(v2);
    ((S_x95408 *)((int)v1 + 0xa0 + (v2 << 3)))->f04 = 0xffff;
}
