typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daa80 S_g8c4daa80;
typedef struct S_g8c4daa84 S_g8c4daa84;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c157810(void)
{
    if (*(int *)0x8c4daa84 != 0) {
        call_8c37d534((void *)(*(S_g8c4daa84 **)0x8c4daa84));
        call_8c011ec0((void *)(*(S_g8c4daa84 **)0x8c4daa84));
        *(int *)0x8c4daa84 = 0;
    }
    if (*(int *)0x8c4daa80 != 0) {
        call_8c03dc40((void *)(*(S_g8c4daa80 **)0x8c4daa80), 1);
        *(int *)0x8c4daa80 = 0;
    }
}
