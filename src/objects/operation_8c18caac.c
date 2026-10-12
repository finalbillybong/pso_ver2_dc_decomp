typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_19c S_g8c467180_2c_19c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_58_6c Arg0_58_6c;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_70_30 Arg0_70_30;
typedef struct Arg0_70_30_0 Arg0_70_30_0;
struct Object {
    char unknown0[0x54];
    short f54;
    char unknown56[0x1a];
    Arg0_70 *f70;
};
struct Arg0_58 {
    char unknown0[0x6a];
    short f6a;
    Arg0_58_6c *f6c;
};
struct Arg0_70 {
    char unknown0[0x30];
    Arg0_70_30 *f30;
};
struct Arg0_70_30 {
    Arg0_70_30_0 *f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
extern void call_8c19a044(void *, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0e2278(void *, void *, int);
void operation_8c18caac(Object *o)
{
    int t1;
    call_8c19a044((*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f54 << 2)))->f6c, 1);
    if (o->f70 == 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x68);
        if (t1 != 0) {
            initialize_base_8c0db1d0((void *)t1, (int)(void *)0x8c319ff0);
        }
        o->f70 = (Arg0_70 *)t1;
    }
    call_8c0e2278(o->f70->f30->f00, *(S_g8c467180_2c_19c **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x19c) + ((*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f54 << 2)))->f6a << 2)), 0);
}
