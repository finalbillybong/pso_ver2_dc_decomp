typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x22];
    short f22;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c223dac(int, void *, short, void *, void *);
int operation_8c1d1c7c(Object *o)
{
    int t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa0);
    if (t1 != 0) {
        call_8c223dac(t1, (void *)0x8c289348, o->f22, ((char *)o + 0x28), ((char *)o + 0x2c));
    }
    return t1;
}
