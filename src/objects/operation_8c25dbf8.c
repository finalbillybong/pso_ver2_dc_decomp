typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c467188 S_g8c467188;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_c8 Arg0_c8;
struct Object {
    char unknown0[0x94];
    int f94;
    Arg0_98 *f98;
    int f9c;
    char unknowna0[0x4];
    int fa4;
    char unknowna8[0x20];
    Arg0_c8 *fc8;
    int fcc;
};
struct Frame {
    unsigned char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    short f06;
    char f08;
    char unknown9[0x3];
};
extern int g_8c44be04;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c467188 *g_8c467188;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db520 *g_8c4db520;
extern int call_8c206b60(int, void *, void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_loader_8c173578(void *, void *, int);
extern void reparent_hierarchy_node(void *, void *);
extern void operation_8c0368a8(void *);
void operation_8c25dbf8(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    int t2;
    if (a1 != 0 && o->fa4 == 1) {
        v3 = -1;
        if (o->f9c == 0) {
            v3 = call_8c206b60(a1, (void *)(((char *)o + 0xa8)), g_8c467188);
        } else {
            if (o->f9c == 1) {
                v3 = 0;
            }
        }
        if (v3 > -1) {
            if (o->f94 == 0) {
                if (g_8c4db520 == 0) {
                    return;
                }
                t1 = allocate_block(g_8c4d97e0, (unsigned int)0xa8);
                if (t1 != 0) {
                    initialize_loader_8c173578((void *)t1, g_8c4db520, (int)(o->f98));
                }
                o->fc8 = (Arg0_c8 *)t1;
                if (o->fc8 != 0) {
                    reparent_hierarchy_node((void *)(o->fc8), g_8c44be84);
                }
                o->fcc = 1;
                return;
            }
            if ((unsigned int)0x100 > (unsigned int)((int)(*(volatile unsigned short *)((char *)o + 0x98)) & 0xffff)) {
                (&frame)->f00 = 0x93;
                (&frame)->f01 = 3;
                (&frame)->f04 = g_8c44be04;
                (&frame)->f06 = *(volatile unsigned short *)((char *)o + 0x98) & 0xffff;
                (&frame)->f08 = 1;
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
