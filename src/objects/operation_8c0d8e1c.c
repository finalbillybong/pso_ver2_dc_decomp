typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x40];
    int f44;
    char unknown48[0x58];
    int fa0;
};
extern void call_8c18e044(void *, void *, int, int, int);
extern void set_fields_8c0daf8c(void *);
Object *operation_8c0d8e1c(Object *o)
{
    o->tag = 0;
    call_8c18e044((void *)(((char *)o + 0x48)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->f44 = 0;
    call_8c18e044((void *)(((char *)o + 0xa4)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->fa0 = 0;
    set_fields_8c0daf8c((void *)o);
    return o;
}
