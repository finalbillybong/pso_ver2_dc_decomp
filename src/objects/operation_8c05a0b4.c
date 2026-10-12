typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
};
struct Arg1 {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
extern void call_8c05a03c(void);
extern void seed_random_state(void *, unsigned int);
void operation_8c05a0b4(Object *o, Arg1 *a1)
{
    call_8c05a03c();
    o->f2c = a1->f2c;
    o->f2e = a1->f2e;
    seed_random_state(((char *)o + 0x1d4), (unsigned int)o->f20 + *(int *)0x8c418000);
}
