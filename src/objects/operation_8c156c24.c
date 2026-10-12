typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void set_configuration_pair(void *, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_grid_8c1566f0(void *, unsigned int);
int operation_8c156c24(int a0, int a1)
{
    int t1;
    set_configuration_pair((void *)a0, a1);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        initialize_grid_8c1566f0((void *)t1, (unsigned int)a1);
    }
    return t1;
}
