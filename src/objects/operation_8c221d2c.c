typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c3827d8(void *);
void operation_8c221d2c(void)
{
    if (*(int *)0x8c4703c0 != 0 && *(int *)0x8c4703c0 != 1) {
        if (*(int *)0x8c4703c0 == 2) {
            goto L_8c221d52;
        }
        if (*(int *)0x8c4703c0 == 3) {
            goto L_8c221d5e;
        }
        return;
    }
    call_8c3827d8((void *)((void *)0x8c337100));
    return;
L_8c221d52:;
    call_8c3827d8((void *)((void *)0x8c3371b0));
    return;
L_8c221d5e:;
    call_8c3827d8((void *)((void *)0x8c337260));
}
