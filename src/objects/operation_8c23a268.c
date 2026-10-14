typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void initialize_scaled_resource_actor(void *, void *, void *);
int operation_8c23a268(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x240);
        if (t1 != 0) {
            initialize_scaled_resource_actor((void *)t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), (void *)a0);
        }
        return (int)(t1);
    }
    return 0;
}
