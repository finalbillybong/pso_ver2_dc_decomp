typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da370 S_g8c4da370;
extern void operation_8c1764d4(void);
extern void operation_8c176048(void);
extern void call_8c1aabb0(void);
extern void operation_8c1656b8(void);
extern void operation_8c142028(void);
extern void call_8c03dc40(void *, int);
void operation_8c1434d0(void)
{
    operation_8c1764d4();
    operation_8c176048();
    call_8c1aabb0();
    operation_8c1656b8();
    operation_8c142028();
    if (*(int *)0x8c4da370 != 0) {
        call_8c03dc40((void *)(*(S_g8c4da370 **)0x8c4da370), 1);
        *(int *)0x8c4da370 = 0;
    }
}
