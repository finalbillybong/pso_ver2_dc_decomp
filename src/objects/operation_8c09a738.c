typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    float f00;
    float f04;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c09a7f4(int, void *, Frame *);
void operation_8c09a738(void)
{
    Frame frame;
    int v84;
    int t1;
    (&frame)->f04 = -11.5f;
    v84 = (int)0;
    goto L_8c09a7b2;
L_8c09a74a:;
    if (v84 != 0) {
        (&frame)->f00 = -20.0f;
        goto L_8c09a78e;
    }
    (&frame)->f00 = -40.0f;
    goto L_8c09a78e;
L_8c09a762:;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x58);
    if (t1 != 0) {
        call_8c09a7f4(t1, (void *)(*(S_g8c44bea0 **)0x8c44bea0), (Frame *)((&frame)));
    }
    (&frame)->f00 += 40.0f;
L_8c09a78e:;
    if (680.0f > (&frame)->f00) {
        goto L_8c09a762;
    }
    (&frame)->f04 += 11.5f;
    v84 = (int)(v84 ^ 1);
L_8c09a7b2:;
    if (571.5f > (&frame)->f04) {
        goto L_8c09a74a;
    }
}
