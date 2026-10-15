typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern int allocate_block(void *, unsigned int);
extern void operation_8c07fd68(void *, int, int);
void operation_8c0802c4(Object *o)
{
    int t1;
    if (!(--o->f20 >= 0)) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xfc);
        if (t1 != 0) {
            operation_8c07fd68((void *)t1, (int)(*(S_g8c44be98 **)0x8c44be98), 9);
        }
        o->f20 = 2;
    }
}
