typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4db520 S_g8c4db520;
extern void call_8c192aa8(void);
extern void operation_8c1734e8(void *);
extern void call_8c173ad0(void *);
extern void call_8c1869f4(void);
extern void call_8c09d42c(void);
extern void call_8c186ffc(void);
extern void operation_03cee8(void);
extern void call_8c1031e4(void);
extern void call_8c2484ec(void);
void operation_8c171d24(void)
{
    call_8c192aa8();
    if (*(int *)0x8c4db520 != 0) {
        operation_8c1734e8((void *)(*(S_g8c4db520 **)0x8c4db520));
    }
    call_8c173ad0((void *)(*(S_g8c44be84 **)0x8c44be84));
    call_8c1869f4();
    call_8c09d42c();
    call_8c186ffc();
    operation_03cee8();
    call_8c1031e4();
    call_8c2484ec();
}
