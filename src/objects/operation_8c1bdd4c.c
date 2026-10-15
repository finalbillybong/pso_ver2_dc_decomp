typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x68];
    short f68;
    char unknown6a[0x2];
    int f6c;
    int f70;
    int f74;
    Arg0_78 *f78;
};
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
void operation_8c1bdd4c(Object *o)
{
    if (o->f74 < o->f6c || o->f74 > o->f70) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 2;
    if (o->f78 != 0) {
        operation_8c19a044((void *)(o->f78), 2);
    }
}
