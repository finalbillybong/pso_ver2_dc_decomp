typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_60 Arg0_60;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
    Arg0_40 *f40;
    char unknown44[0xc];
    int f50;
    int f54;
    int f58;
    char unknown5c[0x4];
    Arg0_60 *f60;
    int f64;
    int f68;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x14];
    int f34;
    int f38;
    char unknown3c[0x34];
    int f70;
    int f74;
};
struct Arg0_60 {
    char unknown0[0x10];
    int f10;
    int f14;
};
struct Arg0_40 {
    int f00;
};
extern int g_8c31468c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int operation_8c1407e4(void *);
extern int operation_8c034c7c(void *);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c13f8e0(void *);
void operation_8c140350(Object *o)
{
    int t3;
    S_c8c122700 *t4;
    int v6;
    int v7;
    int v1;
    int v13;
    S_c8c122700 *t2;
    S_c8c122700 *t5;
    int pm1;
    int v12;
    int v2;
    if (o->f68 > 0x1516 || !(operation_8c1407e4((void *)o) != 0)) {
        return;
    }
    t3 = operation_8c034c7c((void *)(o->f3c));
    v1 = (int)o->f50;
    v2 = (int)o->f40;
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x1d8);
    if (t2 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t2;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t2, (void *)o);
        self->f18 = (void *)0x8c26dc08;
        self->f00 = (int)(g_8c31468c);
        self->f1e = 0x1d8;
        self->f34 = (int)(v1);
        self->f70 = 4;
        self->f38 = (int)(v2);
        self->f74 = (int)(t3);
        operation_8c13f8e0((void *)self);
    }
    if (!(t2 == 0)) {
        pm1 = (int)o->f54;
        v7 = (int)o->f40;
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x1d8);
        v6 = pm1;
        if (t4 != 0) {
            S_c8c122700 *self = (S_c8c122700 *)t4;
            S_c8c122700 **home = &self;
            (void)home;
            initialize_hierarchy_node((void *)t4, (void *)o);
            self->f18 = (void *)0x8c26dc08;
            self->f00 = (int)(g_8c31468c);
            self->f1e = 0x1d8;
            self->f34 = (int)(v6);
            self->f70 = 2;
            self->f38 = (int)(v7);
            self->f74 = (int)(t3);
            operation_8c13f8e0((void *)self);
        }
        if (t4 != 0) {
            if (o->f60->f10 == 0 && o->f60->f14 == 0) {
                goto L_8c1404aa;
            }
            v12 = (int)o->f58;
            v13 = (int)o->f40;
            t5 = allocate_block(g_8c4d97e0, (unsigned int)0x1d8);
            if (t5 != 0) {
                S_c8c122700 *self = (S_c8c122700 *)t5;
                S_c8c122700 **home = &self;
                (void)home;
                initialize_hierarchy_node((void *)t5, (void *)o);
                self->f18 = (void *)0x8c26dc08;
                self->f00 = (int)(g_8c31468c);
                self->f1e = 0x1d8;
                self->f34 = (int)(v12);
                self->f70 = 1;
                self->f38 = (int)(v13);
                self->f74 = (int)(t3);
                operation_8c13f8e0((void *)self);
            }
            if (t5 == 0) {
                return;
            L_8c1404aa:
                ;
                o->f40->f00 = (unsigned int)o->f40->f00 >> 1 << 1;
            }
            o->f64 = 1;
        }
    }
}
