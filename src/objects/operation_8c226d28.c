typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_98 S_vv14_98;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_98 S_vv31_98;
typedef struct S_vv34 S_vv34;
struct Object {
    char unknown0[0x20];
    char f20;
    unsigned char f21;
    char unknown22[0x2];
    short f24;
    char unknown26[0x2];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct Arg0_28 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv14 {
    char unknown0[0x98];
    S_vv14_98 *f98;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv31 {
    char unknown0[0x98];
    S_vv31_98 *f98;
};
struct S_vv34 {
    char unknown0[0x68];
    char f68;
    char unknown69[0x1];
    short f6a;
    short f6c;
};
extern char g_8c337834[];
extern void request_resource_release(void *);
extern void call_8c156ec0(Arg0_28 *);
extern void operation_8c19a044(void *, int);
extern int operation_8c1571f4(void *);
extern void call_8c156e58(Arg0_28 *);
extern int call_8c227148(Object *);
extern int operation_8c1d03b4(void *);
extern void forward_signed_mode(void *, signed char);
extern void operation_8c100524(int);
extern int operation_8c2271e0(Object *);
extern void clear_global_render_resources(void);
extern void operation_8c060660(void);
extern void call_8c1003d0(void *);
extern void operation_8c2273a4(void *, int);
extern int call_8c227284(Object *);
extern int operation_8c2272e8(Object *);
extern void operation_8c2274e8(int, int, int);
extern int call_8c227320(Object *);
extern void operation_8c227580(int, int);
void operation_8c226d28(Object *o)
{
    S_vv14 *v14;
    int v17;
    int v18;
    S_vv31 *v31;
    int v32;
    int v33;
    S_vv34 *v34;
    int v35;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    switch (o->f20) {
    case 0:
    case 1:
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        call_8c156ec0((Arg0_28 *)(o->f28));
        v14 = (S_vv14 *)o->f28;
        o->f28->f80 = (o->f28->f80 & 0xffff) & -3;
        if (v14->f98 != 0) {
            operation_8c19a044((void *)(v14->f98), 1);
        }
        o->f20 = 2;
    case 2:
        if (((o->f28->f80 & 0xffff & 4)) != 0) {
            o->f20 = 0xd;
            return;
        }
        if (((o->f28->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t1 = operation_8c1571f4((void *)(o->f28));
        o->f20 = t1;
        return;
    case 3:
        call_8c156e58((Arg0_28 *)(o->f28));
        t2 = call_8c227148(o);
        o->f30 = (Arg0_30 *)t2;
        v17 = (int)4;
        o->f20 = v17;
    case 4:
        t3 = operation_8c1d03b4((void *)(o->f30));
        forward_signed_mode((void *)o, (signed char)t3);
        if (((o->f30->f80 & 0xffff & 4)) == 0) {
            return;
        }
        o->f20 = 1;
        return;
    case 5:
        operation_8c100524(0x1e);
        call_8c156e58((Arg0_28 *)(o->f28));
        t4 = operation_8c2271e0(o);
        o->f2c = (Arg0_2c *)t4;
        v18 = (int)6;
        o->f20 = v18;
    case 6:
        if (((o->f2c->f80 & 0xffff & 4)) != 0) {
            if (((o->f21 & 2)) != 0) {
                operation_8c100524(0x1e);
                o->f21 &= -3;
                o->f2c->f80 = (o->f2c->f80 & 0xffff) & -5;
            } else {
                clear_global_render_resources();
                operation_8c060660();
                call_8c1003d0((void *)((g_8c337834 + 0x12)));
                o->f20 = 1;
                return;
            }
        }
        if (((o->f2c->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t5 = operation_8c1571f4((void *)(o->f2c));
        operation_8c2273a4((void *)o, t5);
        v31 = (S_vv31 *)o->f2c;
        o->f2c->f80 = (o->f2c->f80 & 0xffff) & -3;
        if (v31->f98 == 0) {
            return;
        }
        operation_8c19a044((void *)(v31->f98), 1);
        return;
    case 7:
        call_8c156e58((Arg0_28 *)(o->f28));
        t6 = call_8c227284(o);
        o->f30 = (Arg0_30 *)t6;
        v32 = (int)8;
        o->f20 = v32;
    case 8:
        t7 = operation_8c1d03b4((void *)(o->f30));
        o->f24 = t7;
        if (((o->f30->f80 & 0xffff & 4)) == 0) {
            return;
        }
        o->f20 = 1;
        return;
    case 9:
        call_8c156e58((Arg0_28 *)(o->f28));
        t8 = operation_8c2272e8(o);
        o->f34 = (Arg0_34 *)t8;
        v33 = (int)0xa;
        o->f20 = v33;
    case 10:
        v34 = (S_vv34 *)o->f34;
        if (((v34->f68 & 2)) != 0) {
            operation_8c2274e8((int)o, (int)(v34->f6a), (int)(v34->f6c));
            o->f20 = 1;
            return;
        }
        if (((v34->f68 & 1)) == 0) {
            return;
        }
        operation_8c2274e8((int)o, (int)(v34->f6a), (int)(v34->f6c));
        o->f20 = 1;
        return;
    case 11:
        call_8c156e58((Arg0_28 *)(o->f28));
        t9 = call_8c227320(o);
        o->f30 = (Arg0_30 *)t9;
        v35 = (int)0xc;
        o->f20 = v35;
    case 12:
        t10 = operation_8c1d03b4((void *)(o->f30));
        operation_8c227580((int)o, t10);
        if (((o->f30->f80 & 0xffff & 4)) == 0) {
            return;
        }
        o->f20 = 1;
        return;
    case 13:
        o->f21 |= 1;
        return;
    }
}
