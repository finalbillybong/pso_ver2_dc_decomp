typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x234];
    int f234;
};
extern void create_effect_777c(void *, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c23fb74(int a0, Arg1 *a1, int a2, int a3)
{
    if (a1 != 0 && a3 != 0) {
        if (a1 != 0) {
            a1->f234 &= -3;
        }
        create_effect_777c((void *)a3, 0x45);
        call_8c05fbf8(0x10012, 0, 0, 0);
    }
}
