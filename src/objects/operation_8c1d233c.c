typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x17];
    Arg0_38 *f38;
    char unknown3c[0x4];
    Arg0_40 *f40;
    char unknown44[0x14];
    Arg0_58 *f58;
};
extern int operation_8c1571f4(void *);
extern void call_8c225464(void *);
extern void operation_8c1a6480(void *);
extern int call_8c21f468(void);
extern int call_8c21f454(void);
void operation_8c1d233c(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c1571f4((void *)(o->f40));
    switch (t1) {
    case 22:
        o->f20 = 0x18;
        return;
    case 26:
        call_8c225464((void *)(o->f58));
        operation_8c1a6480((void *)(o->f38));
        t3 = call_8c21f468();
        v1 = (int)(0xc - t3);
        t2 = call_8c21f454();
        if (!((t2 + v1) > 0)) {
            o->f20 = 4;
            return;
        }
        o->f20 = 0x14;
    }
}
