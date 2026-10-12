typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x4e6];
    int f508;
};
extern void call_8c1ef2fc(void);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_blue(int, void *, void *);
void operation_8c1ef290(Object *o)
{
    int v1;
    int t1;
    call_8c1ef2fc();
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            initialize_color_blue(t1, *(S_g8c44be84 **)0x8c44be84, (void *)0x8c029528);
        }
        o->f508 = t1;
    }
}
