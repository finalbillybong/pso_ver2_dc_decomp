typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
    unsigned char f01;
};
struct S_c8c1c7658 {
    char unknown0[0x12];
    unsigned char f12;
    unsigned char f13;
};
extern void operation_8c219dc4(int, void *);
extern S_c8c1c7658 *call_8c1c7658(Arg1 *);
extern float call_8c2198e8(int, int);
extern void call_8c1c9334(Arg1 *, int);
extern void call_8c1c9340(Arg1 *, int);
void operation_8c2191ec(int a0, Arg1 *a1)
{
    S_c8c1c7658 *t1;
    float t2;
    float t3;
    if (a1->f00 == 1) {
        if (a1->f01 != 1) {
            if (a1->f01 == 2) {
                goto L_8c219218;
            }
            return;
        }
        operation_8c219dc4(a0, (void *)a1);
L_8c219218:;
        t1 = call_8c1c7658(a1);
        if (t1 != 0) {
            t2 = call_8c2198e8(a0, 0xc);
            call_8c1c9334(a1, (int)((int)((float)t1->f12 * t2)));
            t3 = call_8c2198e8(a0, 0xd);
            call_8c1c9340(a1, (int)((int)((float)t1->f13 * t3)));
        }
    }
}
