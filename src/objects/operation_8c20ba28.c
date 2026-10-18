typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Arg5 Arg5;
struct Arg5 {
    int f00;
};
extern int call_8c12b0cc(int);
extern void call_8c12b154(int, int, int);
extern int operation_8c18ee00(char);
extern int call_8c20b458(int, Arg5 *);
extern void call_8c20b5b8(int, int, int, int, Arg5 *);
void operation_8c20ba28(int a0, int a1, int a2, Arg3 *a3, Arg4 *a4, Arg5 *a5)
{
    int *home1 = &a1;
    int v1;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v17;
    int v18;
    int t1;
    int t2;
    int t3;
    (void)home1;
    t1 = call_8c12b0cc((int)(a3));
    call_8c12b0cc(a2);
    v6 = (int)t1;
    for (v1 = 1; t1 > v1; v1++) {
        if (*(char *)((char *)a3 + v1) == 0x20) {
            v6 = (int)v1;
            break;
        }
    }
    v7 = (int)(0x80 > (v6 + (int)a5->f00 + 1));
    if (v7 != 0) {
        call_8c12b154((int)((int)a4 + (int)a5->f00), (int)(a3), v6);
        t2 = operation_8c18ee00(*(char *)((char *)((char *)a4 + 0x0) + (a5->f00)));
        *(char *)((char *)((char *)a4 + 0x0) + (a5->f00)) = t2;
        a5->f00 += v6;
        t3 = call_8c20b458((int)(a4), a5);
        if (t3 > 0xf) {
            v8 = (int)a5->f00;
            v9 = (int)(0x80 > (v8 + 2));
            if (v9 != 0) {
                a5->f00 = v8 + 1;
                *(char *)((char *)((char *)a4 + 0x0) + (v8)) = 0xa;
            }
        } else {
            v10 = (int)a5->f00;
            v11 = (int)(0x80 > (v10 + 2));
            if (v11 != 0) {
                a5->f00 = v10 + 1;
                *(char *)((char *)((char *)a4 + 0x0) + (v10)) = 0x20;
            }
        }
        call_8c20b5b8(a0, a1, a2, (int)(a4), a5);
        v17 = (int)(t1 - v6);
        if (v17 > 0) {
            v18 = (int)(0x80 > (v17 + (int)a5->f00 + 1));
            if (v18 != 0) {
                call_8c12b154((int)((int)a4 + (int)a5->f00), (int)((int)a3 + v6), v17);
                a5->f00 += v17;
            }
        }
    }
}
