typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4db410 S_g8c4db410;
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern void request_resource_release(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
void operation_8c16d698(int a0)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c317b50;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c317b58;
    if (*(int *)0x8c4db410 != 0) {
        request_resource_release((void *)(*(S_g8c4db410 **)0x8c4db410));
        *(int *)0x8c4db410 = 0;
    }
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    *(int *)0x8c4db410 = (int)(t1);
    operation_8c119764(t1, a0, 3);
    operation_8c0dc610((void *)(*(S_g8c4db410 **)0x8c4db410), 30.0f);
    *(int *)0x8c4db428 = 5;
}
