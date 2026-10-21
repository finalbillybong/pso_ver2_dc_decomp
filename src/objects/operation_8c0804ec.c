typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Block_p2_24 {
    float f00;
    char unknown4[0x8];
} Block_p2_24;
typedef struct Block_p0_6c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_6c;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    Block_p0_6c f6c;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x8];
    int f94;
    int f98;
};
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Block_p2_24 f24;
};
extern int g_8c2fec20;
extern void call_8c01d1ec(Object *);
extern int create_effect_78d0(void *, void *, int, int);
extern int create_effect_785c(void *, void *, int);
Object *operation_8c0804ec(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c2643b0;
    o->tag = (int)(g_8c2fec20);
    o->size = 0x9c;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a2->f18;
    *(Vector3 *)&o->f6c = *(Vector3 *)&a2->f24;
    v1 = (int)0;
    while (3 > v1) {
        *(int *)((char *)&o->f88 + (v1 << 2)) = (int)(*(int *)((char *)((char *)a2 + 0x30) + (v1 << 2)));
        v1 = (int)(v1 + 1);
    }
    o->f98 = (int)a2->f24.f00;
    o->f94 = 0;
    {
    Object *p = o;
    v2 = (int)(int)p->f6c.f00;
    if (!((int)p->f6c.f00 >= 0)) {
        v2 = (int)0;
    }
    if (0.0f > p->f6c.f08) {
        if (p->f88 == 1) {
            v3 = (int)0x42;
        } else {
            v3 = (int)2;
        }
        t1 = create_effect_78d0((void *)(&p->f3c), (void *)(&p->f60), v2, v3);
        o->f94 = (int)(t1);
    } else {
        if ((int)p->f6c.f08 == 2) {
            if (p->f88 == 1) {
                v4 = (int)0x48;
            } else {
                v4 = (int)8;
            }
            t2 = create_effect_78d0((void *)(&p->f3c), (void *)(&p->f60), v2, v4);
            o->f94 = (int)(t2);
        } else {
            if ((int)p->f6c.f08 == 3) {
                if (p->f88 == 1) {
                    v5 = (int)0x44;
                } else {
                    v5 = (int)4;
                }
                t3 = create_effect_78d0((void *)(&p->f3c), (void *)(&p->f60), v2, v5);
                o->f94 = (int)(t3);
            } else {
                if (p->f88 == 1) {
                    t4 = create_effect_78d0((void *)(&p->f3c), (void *)(&p->f60), v2, 0x40);
                    o->f94 = (int)(t4);
                } else {
                    t5 = create_effect_785c((void *)(&p->f3c), (void *)(&p->f60), v2);
                    o->f94 = (int)(t5);
                }
            }
        }
    }
    }
    o->f04 |= 0x10;
    return o;
}
