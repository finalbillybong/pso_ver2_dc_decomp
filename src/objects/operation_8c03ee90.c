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
struct S_vv2 {
    char f00;
};
struct S_vv3 {
    char f00;
};
extern void call_8c12b084(char *, void *);
extern void call_8c12b154(int, char *, int);
int operation_8c03ee90(int a0, int a1, int a2)
{
    char frame[0x20];
    S_vv3 *v3;
    S_vv2 *v2;
    char v4;
    if (a0 == 0) {
        a0 = a1;
    }
    v2 = (S_vv2 *)frame;
    v3 = (S_vv3 *)a1;
    while ((unsigned int)(a0 + 0x20) > (int)v2) {
        v2->f00 = v3->f00;
        v4 = (char)v2->f00;
        if (v4 == 0x2e) {
            goto L_8c03eec2;
        }
        if (v4 == 0) {
            goto L_8c03eec2;
        }
        v2 = (S_vv2 *)((char *)v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 1);
    }
L_8c03eec2:;
    if ((unsigned int)v2 > (unsigned int)&frame[0x1b]) {
        return -1;
    }
    v2->f00 = 0;
    call_8c12b084(frame, (void *)((void *)0x8c2ef4c0));
    call_8c12b084(frame, (void *)a2);
    call_8c12b154(a0, frame, 0x20);
    return 0;
}
