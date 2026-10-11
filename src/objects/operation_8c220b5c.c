typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505c28 S_g8c505c28;
extern void request_resource_release(void *);
void operation_8c220b5c(void)
{
    if (*(int *)0x8c505c28 != 0) {
        request_resource_release(*(S_g8c505c28 **)0x8c505c28);
        *(int *)0x8c505c28 = 0;
    }
}
