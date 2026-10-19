typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
};
extern void call_8c1bc46c(Object *);
extern void call_8c1bc550(Object *);
extern void call_8c3bdf60(void *, void *);
void operation_8c1bc424(Object *o)
{
    call_8c1bc46c(o);
    call_8c1bc550(o);
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0x3a8)));
}
