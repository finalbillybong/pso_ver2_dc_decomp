typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c469a40 S_g8c469a40;
struct Frame {
    Block16 f00;
    Block16 f10;
};
extern void operation_8c074ce4(void);
extern void call_8c075ccc(void *, Frame *, ...);
extern void operation_8c074c30(int);
void operation_8c23f590(void)
{
    Frame frame;
    switch (*(int *)0x8c4689f0) {
    case 3:
    case 4:
        operation_8c074ce4();
        call_8c075ccc((void *)(*(S_g8c469a40 **)0x8c469a40), (Frame *)((&frame)));
        *(Block16 *)&(&frame)->f10 = *(Block16 *)&(&frame)->f00;
        operation_8c074c30((int)(&(&frame)->f10));
    }
}
