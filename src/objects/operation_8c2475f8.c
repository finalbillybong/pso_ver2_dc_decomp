typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char f01;
    char f02;
    char unknown3[0x1];
    short f04;
    char unknown6[0x2];
    short f08;
    char unknowna[0x2];
    int f0c;
    char unknown10[0x4];
    float f14;
    float dispatch;
    float f1c;
};
extern void operation_8c24770c(void *, int);
extern void call_8c247654(Object *);
extern void call_8c24766c(Object *);
void operation_8c2475f8(Object *o)
{
    o->tag = 0x1d;
    o->f01 = -1;
    o->f02 = 0;
    o->f04 = 0;
    operation_8c24770c((void *)o, 0);
    o->f08 = 0;
    o->f0c = 0;
    o->f14 = 0.0f;
    o->dispatch = 0.0f;
    o->f1c = 1.5f;
    call_8c247654(o);
    call_8c24766c(o);
}
