typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x5];
    char f19;
    char unknown1a[0x2];
    float f1c;
    float f20;
};
struct Arg1 {
    float f00;
    float f04;
};
extern int call_8c04b8dc(int);
extern float call_8c19a09c(float);
extern void operation_8c19a044(void *, int);
extern float operation_8c2097e4(void);
Object *operation_8c199e48(Object *o, Arg1 *a1, int a2, int a3)
{
    int t1;
    float t2;
    float t3;
    o->f04 = a1->f00;
    o->f08 = a1->f04;
    t1 = call_8c04b8dc(a2);
    o->f10 = (float)(unsigned int)t1;
    t2 = call_8c19a09c(o->f10);
    o->f0c = t2;
    o->tag = a2;
    o->f19 = 0;
    o->f1c = 0.0f;
    operation_8c19a044((void *)o, a3);
    t3 = operation_8c2097e4();
    o->f20 = t3;
    if (!(o->f20 > 0.0f)) {
        o->f1c = 100000.0f;
    }
    return o;
}
