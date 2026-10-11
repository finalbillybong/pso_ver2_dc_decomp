typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void *allocate_block(void *, int);
extern void initialize_manager_8c1216c0(void *, void *);
extern void create_object_8c1372e8(void);
void operation_8c1215e0(void)
{
    void *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x20);
    if (t1 != 0) {
        initialize_manager_8c1216c0(t1, *(S_g8c44be8c **)0x8c44be8c);
    }
    create_object_8c1372e8();
}
