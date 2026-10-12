typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_20 S_g8c467180_20;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x3];
    unsigned char f04;
};
struct S_g8c467180 {
    char unknown0[0x20];
    S_g8c467180_20 *f20;
};
struct S_g8c467180_20 {
    char unknown0[0x584];
    int f584;
};
extern int call_8c1c7ffc(void);
int operation_8c1c7d48(Object *o)
{
    int v3;
    int t1;
    if ((o->tag) == 0 && o->f04 != 0 && (unsigned int)0x29 > (unsigned int)o->f04) {
        t1 = call_8c1c7ffc();
        if (t1 == 0) {
            if ((o->tag) == 0 && ((o->f04 & 0x80)) != 0) {
                v3 = (int)0;
            } else {
                v3 = (int)1;
            }
            if (v3 == 1) {
                return (int)(*(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f20 + 0x0) + (o->f04 + 0x138 << 2)));
            }
            return (int)((*(S_g8c467180 **)0x8c467180)->f20->f584);
        }
    }
    return (int)(*(int *)0x8c30b600);
}
