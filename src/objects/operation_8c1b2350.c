typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x4];
    Arg0_3a8 *f3a8;
};
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c0a1ed0(int);
extern void create_related_object_8c21b658(void *, int);
extern void operation_8c1b1668(void *, int);
void operation_8c1b2350(Object *o)
{
    if (o->f3a0 == 0x1e) {
        call_8c05fbf8(0x30016, (void *)(((char *)o + 0x3c)), 0, 1);
        operation_8c0a1ed0(1);
        create_related_object_8c21b658((void *)o, (int)(o->f3a8));
    }
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b1668((void *)o, 8);
    }
}
