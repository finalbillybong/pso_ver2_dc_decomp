typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x1];
    unsigned short f22;
    Arg0_24 *f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    int f34;
    Arg0_38 *f38;
};
struct Arg0_38 {
    int f00;
};
struct Arg0_24 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x18];
    int f58;
};
struct Arg0_28 {
    char unknown0[0x68];
    int f68;
};
extern void call_8c0dc854(Arg0_24 *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1de120(void *, int);
extern void operation_8c1e22ec(void *);
extern void call_8c210b5c(int, Object *, void *);
extern void call_8c1bfe90(int, Object *);
void operation_8c1dccb4(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (((o->f22 & 2)) != 0) {
        o->f38->f00 = 1;
        o->f24->f3c = 363.0f;
        if (((o->f22 & 4)) != 0) {
            o->f24->f58 = 3;
            return;
        }
        call_8c0dc854((Arg0_24 *)(o->f24));
        return;
    }
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c1dcd6c;
        }
        if (o->f20 == 2) {
            goto L_8c1dcd9a;
        }
        return;
    }
    o->f38->f00 = 1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x74);
    if (t1 != 0) {
        operation_8c1de120((void *)t1, (int)(o->f24));
    }
    o->f28 = (Arg0_28 *)t1;
    o->f28->f68 |= 2;
    o->f24->f3c = 227.0f;
    if (((o->f22 & 4)) != 0) {
        o->f24->f58 = 3;
        return;
    }
    call_8c0dc854((Arg0_24 *)(o->f24));
    return;
L_8c1dcd6c:;
    operation_8c1e22ec((void *)(o->f24));
    o->f38->f00 = 2;
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x108);
    if (t2 != 0) {
        call_8c210b5c(t2, o, (void *)(((char *)o->f38 + 0x4)));
    }
    o->f34 = (int)(t2);
    return;
L_8c1dcd9a:;
    operation_8c1e22ec((void *)(o->f24));
    o->f38->f00 = 3;
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x28);
    if (t3 != 0) {
        call_8c1bfe90(t3, o);
    }
    o->f30 = (int)(t3);
}
