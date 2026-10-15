typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_10 S_g8c467180_90_10;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x10];
    S_g8c467180_90_10 *f10;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern void call_8c02ed60(void *);
void operation_8c017010(void)
{
    Frame frame;
    int t1;
    if (*(int *)0x8c41c614 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c2e2f54;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c2e2f5c;
        t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        *(int *)0x8c41c614 = (int)(t1);
        operation_8c0dc610((void *)t1, -19999.0f);
    }
    operation_8c119764((int)(*(S_g8c41c614 **)0x8c41c614), (int)((*(S_g8c467180 **)0x8c467180)->f90->f10), 1);
    if (*(int *)0x8c41c61c != 0) {
        request_resource_release((void *)(*(S_g8c41c61c **)0x8c41c61c));
        *(int *)0x8c41c61c = 0;
    }
    if (*(int *)0x8c41c620 != 0) {
        request_resource_release((void *)(*(S_g8c41c620 **)0x8c41c620));
        *(int *)0x8c41c620 = 0;
    }
    call_8c02ed60((void *)(*(S_g8c418a00 **)0x8c418a00));
    *(int *)0x8c41bce4 = 6;
}
