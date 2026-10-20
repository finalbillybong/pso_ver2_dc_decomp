typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
struct Object {
    char unknown0[0xf4];
    float ff4;
    char unknownf8[0xc];
    Arg0_104 *f104;
    char unknown108[0x4];
    short f10c;
    short f10e;
    short f110;
    short f112;
};
struct Arg0_104 {
    char unknown0[0x4];
    int f04;
};
extern int operation_8c03d338(void);
extern void operation_8c259b24(void *);
extern void call_8c259f40(Object *);
void operation_8c2598c8(Object *o)
{
    short v1;
    float v11;
    int t1;
    t1 = operation_8c03d338();
    if (t1 != 1) {
        if (((o->f112 & 1)) == 0 && o->f10e != o->f10c) {
            v1 = (short)-1;
            if (o->f110 != v1) {
                o->f110 = -1;
                operation_8c259b24((void *)o);
            }
            o->f10e = o->f10c;
            o->f110 = 0;
        }
        call_8c259f40(o);
        operation_8c259b24((void *)o);
        if (o->f104 != 0) {
            o->ff4 += 4.0f;
            v11 = o->ff4 + 1.0f;
            if (!((float)(unsigned int)o->f104->f04 > v11)) {
                o->ff4 = 0.0f;
            }
        }
    }
}
