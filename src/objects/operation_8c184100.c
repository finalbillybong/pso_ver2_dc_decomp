typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb34 S_g8c4dbb34;
extern int hierarchy_is_active(void *);
extern void request_resource_release(void *);
void operation_8c184100(void)
{
    int t1;
    if (*(int *)0x8c4dbb34 != 0) {
        t1 = hierarchy_is_active(*(S_g8c4dbb34 **)0x8c4dbb34);
        if (t1 != 0) {
            request_resource_release(*(S_g8c4dbb34 **)0x8c4dbb34);
            *(int *)0x8c4dbb34 = 0;
        }
    }
}
