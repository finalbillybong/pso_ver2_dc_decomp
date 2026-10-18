typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct Frame {
    char unknown0[0x20];
};
struct S_vv3 {
    char f00;
};
struct S_vv2 {
    char f00;
    char f01;
};
extern void call_8c12b880(char *, int, int);
extern void call_8c12b084(char *, int);
extern void call_8c12b154(int, char *, int);
int operation_8c03ef04(int a0, int a1, int a2)
{
    char frame[0x20];
    S_vv2 *v2;
    S_vv3 *v3;
    char v4;
    call_8c12b880(frame, 0, 0x20);
    if (a0 == 0) {
        a0 = a1;
    }
    v2 = (S_vv2 *)frame;
    v3 = (S_vv3 *)a1;
    while ((unsigned int)(a0 + 0x20) > (int)v2) {
        v4 = (char)v3->f00;
        if (v4 == 0x2e) {
            goto L_8c03ef42;
        }
        if (v4 == 0) {
            goto L_8c03ef42;
        }
        v2->f00 = v4;
        v3 = (S_vv3 *)((char *)v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 1);
    }
L_8c03ef42:;
    if ((unsigned int)v2 > (unsigned int)&frame[0x1b]) {
        return -1;
    }
    v2->f01 = 0;
    call_8c12b084(frame, a2);
    call_8c12b154(a0, frame, 0x20);
    return 0;
}
