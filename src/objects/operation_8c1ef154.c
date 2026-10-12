typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    short ff2;
    char unknownf4[0x494];
    float f588;
};
extern void call_8c1ef290(void);
extern void call_8c03bf8c(void *);
extern void call_8c025a44(Object *);
void operation_8c1ef154(Object *o)
{
    int v1;
    v1 = (int)(((o->fe8 & 0x20)) != 0);
    if (v1 != 0 && o->ff0 == o->ff2) {
        call_8c1ef290();
    }
    o->f588 += 0.002f;
    if (o->f588 > 1.0f) {
        o->f588 = 1.0f;
    }
    call_8c03bf8c(((char *)o + 0x580));
    call_8c025a44(o);
}
