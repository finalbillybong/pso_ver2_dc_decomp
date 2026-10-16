typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x2];
    unsigned char f6c;
    char unknown6d[0x3];
    Arg0_70 *f70;
    char unknown74[0x48];
    int fbc;
};
extern void call_8c1e15e8(Object *, int);
extern void call_8c1e24ac(Object *);
extern void call_8c04bfc8(void *, int);
void operation_8c1e25fc(Object *o, int a1)
{
    int v24;
    if (*(int *)0x8c467188 == 0 && (unsigned int)(unsigned short)a1 >= (unsigned int)0x80 && (unsigned int)0x100 > (unsigned int)(unsigned short)a1) {
        return;
    }
    if (((o->f68 & 0x20)) == 0 && (unsigned int)o->f6c >= (unsigned int)1) {
        call_8c1e15e8(o, 1);
        if (o->f6c == 2) {
            o->f68 |= 0x20;
        }
        if (o->f6c == 3 && ((o->f68 & 2)) != 0) {
            call_8c1e24ac(o);
        }
    }
    if (((o->f68 & 4)) == 0 && ((o->fbc & 0x40)) == 0) {
    } else {
        call_8c1e24ac(o);
    }
    v24 = (int)o->fbc;
    if (((v24 & 0x10)) != 0 && (unsigned int)(unsigned short)a1 >= (unsigned int)0x80) {
        return;
    }
    if (((v24 & 0x80)) != 0 && (0x41 > (int)(unsigned short)a1 || (int)(unsigned short)a1 > 0x5a)) {
        return;
    }
    if (((v24 & 1)) == 0) {
        call_8c04bfc8((void *)(o->f70), a1);
        return;
    }
    if (((o->f68 & 2)) == 0) {
        o->f70 = (Arg0_70 *)((char *)o + 0x8c);
        o->f68 |= 2;
    }
    call_8c04bfc8((void *)(o->f70), a1);
    if ((o->f6c) == 0 && ((o->f68 & 0x20)) == 0) {
        call_8c1e15e8(o, 0);
    }
}
