typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c328b44[];
extern int load_resource_8c104e9c(void *);
extern int load_pvm_file_tls_8c118528(void *);
void load_assets_TObjNpcNFW01_8c1c49cc(void)
{
    int t1;
    int t2;
    t1 = load_resource_8c104e9c((void *)((g_8c328b44 + 0xd)));
    *(int *)0x8c4e2d60 = (int)(t1);
    t2 = load_pvm_file_tls_8c118528((void *)((g_8c328b44 + 0x1e)));
    *(int *)0x8c4e2d64 = (int)(t2);
}
