typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_90 Arg0_30_90;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    Arg0_30_90 *f90;
};
extern int operation_8c220ce0(int);
extern int call_8c106760(int);
extern int call_8c106798(int);
extern void call_8c220b80(int, int);
extern void call_8c19a044(void *, int);
void operation_8c1894f0(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c220ce0((int)o);
    if (t1 != 0) {
        t2 = call_8c106760((int)o);
        if (t2 == 0) {
            t3 = call_8c106798((int)o);
            if (t3 == 0) {
                return;
            }
        }
        call_8c220b80(0xa, 1);
        {
            Arg0_30 *p = o->f30;
            p->f80 = (p->f80 & 0xffff) & -3;
            if (p->f90 != 0) {
                call_8c19a044((void *)(p->f90), 1);
            }
        }
        o->f24 = 1;
    }
}
