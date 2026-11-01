typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void *heap_alloc_8c122700(void *, int);
extern void TFogCtrl_ctor_8c1216c0(void *, void *);
extern void TObjFogCollision_Manager_create_8c1372e8(void);
void operation_8c1215e0(void)
{
    void *t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, 0x20);
    if (t1 != 0) {
        TFogCtrl_ctor_8c1216c0(t1, *(S_g8c44be8c **)0x8c44be8c);
    }
    TObjFogCollision_Manager_create_8c1372e8();
}
