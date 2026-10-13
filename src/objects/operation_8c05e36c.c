typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4679ac S_g8c4679ac;
typedef struct S_g8c4679b0 S_g8c4679b0;
extern void call_8c37df90(int, void *);
extern void call_8c38ae68(void);
extern void release_render_mode_four_8c05b938(void);
extern void call_8c3be2dc(int, void *, void *, int);
extern void call_8c38ad10(void);
void operation_8c05e36c(void)
{
    if (*(int *)0x8c4679a8 != 1) {
        if (*(int *)0x8c4679a8 == 0xe) {
            goto L_8c05e38c;
        }
    } else {
        call_8c37df90(0, (void *)(*(S_g8c4679ac **)0x8c4679ac));
        goto L_8c05e3ac;
L_8c05e38c:;
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        call_8c3be2dc(0, (void *)(*(S_g8c4679b0 **)0x8c4679b0), (void *)(*(S_g8c4679b0 **)0x8c4679b0), 2);
        call_8c38ad10();
    }
L_8c05e3ac:;
    *(int *)0x8c4679a8 += 1;
}
