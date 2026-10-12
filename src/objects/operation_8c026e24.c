typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x5a8];
    float f5a8;
};
extern void restore_child_blend(void);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
void operation_8c026e24(Object *o)
{
    if (1.0f > o->f5a8) {
        restore_child_blend();
        *(int *)0x8c575570 |= 0x810;
        call_8c38c0e6(-1, 0x800);
        call_8c38c0f0(&o->f5a8);
    }
}
