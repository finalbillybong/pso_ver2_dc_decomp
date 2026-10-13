typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f1c0 S_g8c46f1c0;
typedef struct S_g8c46f1c0_0 S_g8c46f1c0_0;
struct S_g8c46f1c0 {
    S_g8c46f1c0_0 *f00;
};
extern void clear_global_8c0d0354(void);
extern void call_8c37d534(void *);
extern void operation_8c105320(int);
void operation_8c0adb84(void)
{
    clear_global_8c0d0354();
    call_8c37d534((void *)((void *)0x8c3055f4));
    call_8c37d534((void *)((*(S_g8c46f1c0 **)0x8c46f1c0)->f00));
    operation_8c105320((int)(*(S_g8c46f1c0 **)0x8c46f1c0));
    *(int *)0x8c46f1c0 = 0;
}
