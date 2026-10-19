typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_70 Arg0_24_70;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Arg0_24 {
    char unknown0[0x68];
    char f68;
    char unknown69[0x7];
    Arg0_24_70 *f70;
};
struct Frame {
    char unknown0[0x4];
};
struct Arg0_28 {
    char unknown0[0x83];
    char f83;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void call_8c197f48(Arg0_24 *, Frame *);
extern void call_8c19051c(Object *, Frame *);
extern void call_8c18c808(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c198da4(void *);
extern int operation_8c1995fc(void *);
extern void call_8c197cdc(Arg0_24 *, int);
void operation_8c1903c0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        {
            Arg0_24 *p = o->f24;
            p->f68 = (unsigned int)p->f68 >> 1 << 1;
            operation_8c19a044((void *)(p->f70), 1);
        }
        o->f20 = 2;
    case 2:
        call_8c197f48((Arg0_24 *)(o->f24), (Frame *)((&frame)));
        call_8c19051c(o, (Frame *)((&frame)));
        if (((o->f24->f68 & 2)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 5;
            return;
        }
        if (((o->f24->f68 & 1)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x90);
        if (t1 != 0) {
            operation_8c198da4((void *)t1);
        }
        o->f28 = (Arg0_28 *)t1;
        o->f20 = 4;
    case 4:
        t2 = operation_8c1995fc((void *)(o->f28));
        call_8c19051c(o, (Frame *)t2);
        if (((o->f28->f83 & 2)) != 0) {
            o->f20 = 1;
        }
        if (((o->f28->f83 & 1)) != 0) {
            t3 = operation_8c1995fc((void *)(o->f28));
            call_8c197cdc((Arg0_24 *)(o->f24), t3);
            o->f20 = 1;
        }
        return;
    case 5:
        break;
    }
}
