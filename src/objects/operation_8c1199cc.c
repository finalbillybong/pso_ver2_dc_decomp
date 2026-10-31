typedef struct Node {
    int f00;
    char unknown4[0x8];
    float f0c;
    char unknown10[0x4];
    float f14;
    char unknown18[0x8];
    int f20;
} Node;
typedef struct Pair {
    int f00;
    int f04;
} Pair;
typedef struct Object {
    char unknown0[0x30];
    Node **f30;
    char unknown34[0x48];
    float f7c;
    int f80;
    int f84;
    char unknown88[0x8];
    Pair *f90;
    char unknown94[0x8];
    int f9c;
} Object;
extern void remove_pair_grid_node(Object *, Node *);
void operation_8c1199cc(Object *o)
{
    Pair *p;
    int m;
    Node *n;
    int i;
    int t;
    m = -9;
    i = o->f80;
    n = *(Node **)((char *)o->f30 + (i << 2));
    p = (Pair *)((char *)o->f90 + (i << 3));
    while (n->f20 != 0 && n->f0c + n->f14 < o->f7c) {
        remove_pair_grid_node(o, n);
        p->f00 = 0;
        p->f04 = 0;
        if (o->f84 == o->f80) {
            t = o->f84 + 1;
            o->f84 = t;
            if (t >= o->f9c) {
                o->f84 = 0;
            }
        }
        t = o->f80 + 1;
        o->f80 = t;
        if (t >= o->f9c) {
            o->f80 = 0;
        }
        i = o->f80;
        n = *(Node **)((char *)o->f30 + (i << 2));
        p = (Pair *)((char *)o->f90 + (i << 3));
        if ((p->f00 & 8) != 0) {
            p->f00 &= m;
            n->f00 &= m;
        }
    }
}
