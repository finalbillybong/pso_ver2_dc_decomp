typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv2 S_vv2;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct S_vv2 {
    char f00;
};
struct Frame {
    char unknown0[0x14];
};
struct S_vv5 {
    char f00;
};
struct S_vv6 {
    char f00;
};
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ece0(void);
extern int operation_8c217cf0(int, int, int);
extern void operation_8c18ea4c(int);
void *operation_8c217c60(int a0)
{
    Frame frame;
    S_vv2 *v2;
    int v4;
    int v1;
    S_vv5 *v5;
    S_vv6 *v6;
    reset_text_cursor_8c18ea38();
    v2 = (S_vv2 *)a0;
    v1 = (int)1;
    while (v2->f00 != 0) {
        if ((v2++)->f00 == 0x2c) {
            v1 = (int)(v1 + 1);
        }
    }
    v4 = (int)0;
    while (v1 > v4) {
        operation_8c18ece0();
        v5 = (S_vv5 *)operation_8c217cf0(a0, v4, v1);
        v6 = (S_vv6 *)(&frame);
        while (v5->f00 != 0 && v5->f00 != 0x2c) {
            (v6++)->f00 = (v5++)->f00;
        }
        v6->f00 = 0;
        operation_8c18ea4c((int)(&frame));
        v4 = (int)(v4 + 1);
    }
    return (void *)0x8c4dbe40;
}
