typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
typedef struct S_x80128 S_x80128;
struct S_vv3 {
    unsigned char f00;
};
struct S_x80128 {
    char f00;
};
extern void restore_child_blend(void);
extern void call_8c38aeb4(int);
extern void apply_resource_3827d8(void *);
extern void call_8c38af22(int, int);
extern int call_8c2266fc(int, char);
extern void call_8c2265cc(int, int, float, float);
extern void call_8c38b09e(int, float);
extern void call_8c38af12(void);
void operation_8c2263b8(int a0, int a1, char *a2, float f0, float f1, float f2)
{
    int v1;
    int t1;
    char v2;
    restore_child_blend();
    call_8c38aeb4(1);
    apply_resource_3827d8((void *)((void *)0x8c33760c));
    call_8c38af22(0, a1);
    v1 = (int)0x1970;
    while (*a2 != 0) {
        v2 = *a2++;
        if ((unsigned char)v2 != 0x23) {
            t1 = call_8c2266fc(a0, v2);
            call_8c2265cc(a0, t1, f0, f1);
            call_8c38b09e((int)(a0 + v1), f2);
            f0 = (float)(f0 + *(float *)((char *)0x8c337614 + ((unsigned char)t1 << 2)));
        }
    }
    call_8c38af12();
}
