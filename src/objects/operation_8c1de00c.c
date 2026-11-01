typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3064 S_g8c4e3064;
struct S_g8c4e3064 {
    int f00;
    int f04;
    int f08;
};
extern char g_8c32afac[];
extern int load_resource_8c104e9c(void *);
extern int operator_new_8c18de4c(int);
extern int load_pvm_file_tls_8c118528(void *);
void load_assets_TOButterflyDF_8c1de00c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = load_resource_8c104e9c((void *)((g_8c32afac + 0xe)));
    *(int *)0x8c4e3060 = (int)(t1);
    t2 = operator_new_8c18de4c(0xc);
    *(int *)0x8c4e3064 = (int)(t2);
    t3 = load_pvm_file_tls_8c118528((void *)((g_8c32afac + 0x20)));
    (*(S_g8c4e3064 **)0x8c4e3064)->f00 = (int)(t3);
    t4 = load_pvm_file_tls_8c118528((void *)((g_8c32afac + 0x32)));
    (*(S_g8c4e3064 **)0x8c4e3064)->f04 = (int)(t4);
    t5 = load_pvm_file_tls_8c118528((void *)((g_8c32afac + 0x47)));
    (*(S_g8c4e3064 **)0x8c4e3064)->f08 = (int)(t5);
}
