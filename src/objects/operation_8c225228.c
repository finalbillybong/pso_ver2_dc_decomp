typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x80];
    char f80;
    char unknown81[0x5];
    short f86;
    char unknown88[0x10];
    Arg0_98 *f98;
};
extern int operation_8c225448(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c225228(Object *o)
{
    int t1;
    t1 = operation_8c225448((void *)o);
    if (t1 >= o->f86) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f80 |= 1;
    call_8c19a044((void *)(o->f98), 2);
}
