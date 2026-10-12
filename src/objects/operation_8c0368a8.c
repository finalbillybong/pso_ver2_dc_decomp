typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
extern void call_8c02f0c4(void *, Object *, int);
extern void call_8c036d04(Object *);
void operation_8c0368a8(Object *o)
{
    if (*(int *)0x8c418a00 != 0) {
        call_8c02f0c4(*(S_g8c418a00 **)0x8c418a00, o, o->f01 << 2);
    }
    *(int *)0x8c4627c8 = 1;
    call_8c036d04(o);
    *(int *)0x8c4627c8 = 0;
}
