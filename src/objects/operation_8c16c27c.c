typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c16bfd0(int);
extern int operation_8c16c2f8(void);
extern void call_8c16c0d8(int);
int operation_8c16c27c(int a0)
{
    int v1;
    int v7;
    char *v8;
    int v6;
    int t1;
    int t2;
    call_8c16bfd0(a0);
    *(int *)0x8c4db428 = 0;
    v1 = (int)0x100;
    v7 = (int)a0;
    goto L_8c16c2c2;
L_8c16c298:;
    t1 = operation_8c16c2f8();
    v6 = (int)(unsigned char)t1;
    switch (v6) {
    case 0xf8:
        t2 = operation_8c16c2f8();
        v6 = (int)((unsigned char)t2 + v1);
        break;
    }
    ((void (*)(int))(*(int *)((char *)0x8c317ba8 + (v6 << 3))))(v6);
L_8c16c2c2:;
    v8 = (char *)*(int *)0x8c4db428;
    if (v8 == 0) {
        goto L_8c16c298;
    }
    call_8c16c0d8(v7);
    return (int)(v8);
}
