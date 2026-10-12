typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x4e6];
    int f508;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c1a8f8c(int, void *);
int operation_8c02947c(Object *o)
{
    int v1;
    int t1;
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0 && *(int *)0x8c41cd2c == 0 && o->f508 != 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            call_8c1a8f8c(t1, *(S_g8c44bea0 **)0x8c44bea0);
        }
        *(int *)0x8c41cd2c = t1;
        return 1;
    }
    return 0;
}
