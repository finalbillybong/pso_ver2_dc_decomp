typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x18];
    unsigned char f80;
    unsigned char f81;
    unsigned char f82;
    char unknown83[0x1];
    short f84;
};
struct Arg1 {
    int f00;
};
extern void operation_8c0df720(void *, int);
extern void operation_8c0e1bbc(void *);
extern void operation_8c1a64d4(int);
extern float operation_8c2097e4(void);
extern void call_8c1a64e4(void *, Arg1 *);
extern void operation_8c21f3c4(int);
void operation_8c0df924(Object *o, Arg1 *a1, int a2)
{
    int v1;
    float t1;
    v1 = (int)0;
    operation_8c0df720((void *)o, a2);
    if (o->f82 != 1) {
        o->f82 = 1;
        operation_8c0e1bbc((void *)(((char *)o + 0x2c)));
        operation_8c1a64d4((int)(((char *)o + 0x2c)));
        if ((o->f80) != 0) {
            v1 = (int)1;
        }
    } else {
        unsigned char v2;
        v2 = o->f80;
        if (v2 != 0 && v2 != 4) {
            v1 = (int)1;
        }
    }
    if (v1 != 0) {
        o->f80 = 5;
        o->f81 &= -5;
        t1 = operation_8c2097e4();
        if (t1 > 0.0f) {
            o->f64 = 0;
        }
    }
    call_8c1a64e4((void *)(((char *)o + 0x2c)), a1);
    operation_8c21f3c4((int)((unsigned int)(unsigned int)(unsigned int)a1->f00 >> 2 >> 2 >> 1 & 0xf));
    o->f84 = 0x5a;
}
