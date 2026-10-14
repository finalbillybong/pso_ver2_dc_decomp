typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c1e6300(int, void *);
void operation_8c1e627c(Object *o)
{
    int t1;
    o->f04 |= 1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
    if (t1 != 0) {
        call_8c1e6300(t1, (void *)(*(S_g8c44be88 **)0x8c44be88));
    }
}
