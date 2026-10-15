typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c604 S_g8c41c604;
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern void request_resource_release(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
void operation_8c01aa54(int a0)
{
    Frame frame;
    int t1;
    if (*(int *)0x8c41c604 != 0) {
        request_resource_release((void *)(*(S_g8c41c604 **)0x8c41c604));
        *(int *)0x8c41c604 = 0;
    }
    if (*(int *)0x8c41bce4 == 0x11) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c2e2ff4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c2e2ffc;
        t1 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
        *(int *)0x8c41c604 = (int)(t1);
        operation_8c119764(t1, (int)(a0 + 4), 3);
        operation_8c0dc610((void *)(*(S_g8c41c604 **)0x8c41c604), -13000.0f);
    }
}
