typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_vv1 S_vv1;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv1 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void operation_8c0a1810(void *);
extern void call_8c0a1d18(int);
extern void call_8c0a18a8(int);
extern void operation_8c0a2048(int);
extern void call_8c37e480(void *);
extern void submit_in_vector_frame(void *, void *);
void operation_8c0a1694(int a0)
{
    Frame frame;
    S_vv1 *v1;
    operation_8c0a1810((void *)a0);
    call_8c0a1d18(a0);
    call_8c0a18a8(a0);
    operation_8c0a2048(a0);
    v1 = (S_vv1 *)g_8c46ee80;
    if (v1 != 0) {
        (&frame)->f08 = v1->f90;
        (&frame)->f04 = v1->f90;
        (&frame)->f00 = v1->f9c;
    }
    if (v1 != 0) {
        (&frame)->f0c = v1->f9c - v1->f90;
        (&frame)->f10 = v1->fa0 - v1->f94;
        (&frame)->f14 = v1->fa4 - v1->f98;
        call_8c37e480((void *)(&(&frame)->f0c));
    }
    submit_in_vector_frame((void *)((void *)0x8c46ee84), (void *)((void *)0x8c46f02c));
}
