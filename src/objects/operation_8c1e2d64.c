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
    unsigned short f6a;
    char unknown6c[0x4];
    Arg0_70 *f70;
    char unknown74[0x48];
    int fbc;
};
struct Arg0_70 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
    int f10;
};
extern void call_8c1e1a54(void);
extern void call_8c1e18bc(void);
void operation_8c1e2d64(Object *o)
{
    if (((o->f68 & 4)) != 0) {
        if (((o->f6a & 1)) != 0 && ((o->fbc & 0x20)) == 0) {
            call_8c1e1a54();
            return;
        }
        call_8c1e18bc();
        return;
    }
    if (!((unsigned int)o->f70->f04 >= (unsigned int)o->f70->f10)) {
        o->f70->f04 += 1;
    }
}
