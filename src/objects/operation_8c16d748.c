typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db40c S_g8c4db40c;
typedef struct S_g8c4db410 S_g8c4db410;
typedef struct S_g8c4db430 S_g8c4db430;
extern void operation_8c217904(int, int, int);
extern void operation_8c119764(int, int, int);
extern void call_8c16d30c(void *, int);
void operation_8c16d748(int a0)
{
    if (*(int *)0x8c4db40c != 0) {
        operation_8c217904((int)(*(S_g8c4db40c **)0x8c4db40c), a0, 3);
        *(int *)0x8c4db428 = 4;
        return;
    }
    if (*(int *)0x8c4db410 != 0) {
        operation_8c119764((int)(*(S_g8c4db410 **)0x8c4db410), a0, 3);
        *(int *)0x8c4db428 = 5;
        return;
    }
    call_8c16d30c((void *)(*(S_g8c4db430 **)0x8c4db430), a0);
}
