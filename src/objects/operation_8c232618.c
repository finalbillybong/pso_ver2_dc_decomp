typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(void *, int, int);
extern void call_8c2326f4(void *);
void operation_8c232618(void)
{
    call_8c12b880((void *)0x8c338c40, 0xff, 0x20);
    call_8c2326f4((void *)0x8c338c40);
}
