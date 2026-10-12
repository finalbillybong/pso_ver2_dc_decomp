typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x4];
    int f04;
    char unknown8[0xc];
    int f14;
};
extern int operation_194d60(unsigned short);
extern void call_8c023e44(int, Arg1 *);
void operation_8c21f134(int a0, Arg1 *a1)
{
    int t1;
    if (((a1->f04 & 8)) != 0) {
        t1 = operation_194d60((unsigned short)*(S_g8c418248 **)0x8c418248);
        a1->f14 = t1;
        call_8c023e44(a0, a1);
    }
}
