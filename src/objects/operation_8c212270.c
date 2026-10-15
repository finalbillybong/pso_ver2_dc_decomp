typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
extern void call_8c212338(int, Arg1 *);
void operation_8c212270(int a0, Arg1 *a1)
{
    call_8c212338(a0, a1);
    a1->f48 = a1->f38 = *(float *)0x8c2e1624;
    a1->f4c = a1->f3c = *(float *)0x8c2e1628;
    a1->f50 = a1->f40 = *(float *)0x8c2e162c;
    a1->f54 = a1->f44 = *(float *)0x8c2e1630;
}
