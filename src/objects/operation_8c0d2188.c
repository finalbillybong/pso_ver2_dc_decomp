typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fc6c S_g8c46fc6c;
typedef struct S_g8c46fc70 S_g8c46fc70;
typedef struct S_g8c46fc78 S_g8c46fc78;
extern void call_8c05b97c(int, void *, void *, void *);
void operation_8c0d2188(int a0)
{
    call_8c05b97c(a0, *(S_g8c46fc6c **)((char *)0x8c46fc6c + (*(int *)0x8c28581c << 2)), *(S_g8c46fc70 **)((char *)0x8c46fc70 + (*(int *)0x8c285824 << 2)), *(S_g8c46fc78 **)((char *)0x8c46fc78 + (*(int *)0x8c28582c << 2)));
}
