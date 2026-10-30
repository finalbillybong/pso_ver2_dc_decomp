typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
struct Arg1 {
    char f00;
    char f01;
};
struct Frame {
    char unknown0[0x10];
};
struct S_vv10 {
    char f00;
};
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
S_vv10 *operation_8c18eb64(int a0, char *a1)
{
    Frame frame;
    unsigned int v5;
    unsigned int v9;
    int t2;
    unsigned char pm3;
    char *pm4;
    char pm1;
    int pm5;
    if (0 == a0) {
        pm4 = a1 + 1;
        a1[0] = (char)0x30;
        a1 = pm4;
        pm3 = (unsigned char)0;
        *a1 = (char)(int)pm3;
        return (S_vv10 *)a1;
    }
    if (!(a0 >= 0)) {
        a0 = a0 * -1;
        *a1 = 0x2d;
        a1 = a1 + 1;
    }
    v5 = (unsigned int)0;
    while (v5 < (unsigned int)0x10) {
        pm1 = (char)call_8c18e8a0(a0, 0xa);
        frame.unknown0[v5] = pm1;
        pm5 = call_8c18e768(a0, 0xa);
        t2 = pm5;
        a0 = t2;
        if (!(t2 > 0)) {
            break;
        }
        v5 = v5 + 1;
    }
    if (v5 >= (unsigned int)0x10) {
        v5 = 0xf;
    }
    v9 = 0;
    while ((unsigned int)(v5 + 1) > v9) {
        *a1++ = *(unsigned char *)((char *)(v5 - v9) + (int)&frame) + 0x30;
        v9 = v9 + 1;
    }
    *a1 = 0;
    return (S_vv10 *)a1;
}
