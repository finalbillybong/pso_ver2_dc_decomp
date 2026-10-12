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
extern void call_8c036d04(void);
extern void call_8c02f138(void *, int, Object *, int);
void operation_8c036914(Object *o, int a1)
{
    if (*(int *)0x8c418248 == a1) {
        *(int *)0x8c4627c8 = 1;
        call_8c036d04();
        *(int *)0x8c4627c8 = 0;
        return;
    }
    if (*(int *)0x8c418a00 != 0) {
        call_8c02f138(*(S_g8c418a00 **)0x8c418a00, a1, o, o->f01 << 2);
    }
}
