/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a5400
 * function: operation_8c0a5400
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 6 of 101 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c3032d8 S_L8c3032d8;
typedef struct S_L8c3032d8_8 S_L8c3032d8_8;
typedef struct S_g8c303864 S_g8c303864;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46f0c8 S_g8c46f0c8;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_430 S_vv5_430;
struct S_g8c46ee80 {
    char unknown0[0xb4];
    int fb4;
};
struct S_L8c3032d8 {
    char unknown0[0x8];
    S_L8c3032d8_8 *f08;
};
struct S_vv4 {
    char unknown0[0x94];
    int f94;
    void *f98;
    unsigned char f9c;
    unsigned char f9d;
    short f9e;
    float fa0;
    float fa4;
};
struct Object {
    unsigned char tag;
    char f01;
    short f02;
    float f04;
    float f08;
};
struct S_vv5 {
    char unknown0[0x430];
    S_vv5_430 *f430;
};
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f0c0;
extern int g_8c46f0c4;
extern S_L8c3032d8 g_8c3032d8;
extern int get_current_area_8c032b10(void);
void operation_8c0a5400(Object *o, int a1)
{
    S_vv4 *v4;
    int t1;
    if (!(g_8c46ee80 == 0)) {
        g_8c46f0c0 = (int)(g_8c46ee80->fb4);
        g_8c46f0c4 = a1;
    }
    v4 = (S_vv4 *)(&g_8c3032d8)->f08;
    if (!(0 == v4)) {
        S_vv5 *v5;
        v4->f9d = (unsigned char)o->f01;
        v4->f9c = o->tag;
        v4->f9e = o->f02;
        v4->fa0 = o->f04;
        v4->fa4 = o->f08;
        t1 = get_current_area_8c032b10();
        a1 = t1 << 3;
        v4->f98 = & *(int *)((char *)(0x0 + (char *)*(S_g8c303864 **)((a1) + (char *)0x8c303864)) + ((int)v4->f9c << 3));
        v5 = (S_vv5 *)*(S_g8c46f0c8 **)(((int)o->tag << 2) + (char *)0x8c46f0c8);
        if (0 != v5) {
            char *pm2;
            pm2 = (char *)((char *)v5->f430 + 0x4);
            v4->f94 = (int)(*(int *)(pm2 + (v4->f9d << 3)));
            v4->f94 = (int)(*(int *)((char *)((char *)v5->f430 + 0x4) + (v4->f9d << 3)));
        }
    }
}
