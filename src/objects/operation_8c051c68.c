typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_28 {
    char unknown0[0x68];
    int f68;
};
extern S_L8c41cba0 g_8c41cba0;
extern void set_fields_8c1e0ef4(void *);
extern void operation_8c0dc710(void *);
extern void operation_8c0dc79c(void *);
void operation_8c051c68(Object *o)
{
    int v1;
    v1 = (int)o->f20;
    if (((v1 & 1)) != 0) {
        if ((((&g_8c41cba0)->f28 & 0x200)) == 0) {
            return;
        }
        o->f20 = (unsigned int)v1 >> 1 << 1;
        set_fields_8c1e0ef4((void *)(o->f28));
        if (o->f2c == 0) {
            return;
        }
        operation_8c0dc710((void *)(o->f2c));
        return;
    }
    if (((o->f28->f68 & 0x100)) == 0) {
        o->f20 = v1 | 1;
        if (o->f2c != 0) {
            operation_8c0dc79c((void *)(o->f2c));
        }
    }
}
