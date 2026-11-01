typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e30c4 S_g8c4e30c4;
struct S_g8c4e30c4 {
    int f00;
    int f04;
    int f08;
};
extern int g_8c2e2ad8;
extern int g_8c4e30c0;
extern S_g8c4e30c4 *g_8c4e30c4;
extern char g_8c32b804[];
extern int get_current_area_8c032b10(void);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int operator_new_8c18de4c(int);
extern int load_pvm_file_tls_8c118528(void *);
void load_assets_o_container_ancient_8c1e3e0c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    if (g_8c2e2ad8 == 1) {
        t1 = get_current_area_8c032b10();
        if (t1 == 0x10) {
            t2 = game_malloc_8c011ecc(0x440);
            if (t2 != 0) {
                call_8c03d610(t2, 1, (void *)((void *)0x8c32b67c), 0, 0, 0);
            }
            g_8c4e30c0 = (int)(t2);
            t3 = operator_new_8c18de4c(0xc);
            g_8c4e30c4 = (S_g8c4e30c4 *)(int)(t3);
            t4 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x1f5)));
            g_8c4e30c4->f00 = (int)(t4);
            t5 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x208)));
            g_8c4e30c4->f04 = (int)(t5);
            t6 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x223)));
            g_8c4e30c4->f08 = (int)(t6);
            return;
        }
    }
    if (g_8c2e2ad8 == 1) {
        t7 = get_current_area_8c032b10();
        if (t7 == 0x11) {
            t8 = game_malloc_8c011ecc(0x440);
            if (t8 != 0) {
                call_8c03d610(t8, 1, (void *)((void *)0x8c32b658), 0, 0, 0);
            }
            g_8c4e30c0 = (int)(t8);
            t9 = operator_new_8c18de4c(0xc);
            g_8c4e30c4 = (S_g8c4e30c4 *)(int)(t9);
            t10 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x23e)));
            g_8c4e30c4->f00 = (int)(t10);
            t11 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x25a)));
            g_8c4e30c4->f04 = (int)(t11);
            t12 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x278)));
            g_8c4e30c4->f08 = (int)(t12);
            return;
        }
    }
    t13 = game_malloc_8c011ecc(0x440);
    if (t13 != 0) {
        call_8c03d610(t13, 1, (void *)((void *)0x8c32b634), 0, 0, 0);
    }
    g_8c4e30c0 = (int)(t13);
    t14 = operator_new_8c18de4c(0xc);
    g_8c4e30c4 = (S_g8c4e30c4 *)(int)(t14);
    t15 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x296)));
    g_8c4e30c4->f00 = (int)(t15);
    t16 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x2af)));
    g_8c4e30c4->f04 = (int)(t16);
    t17 = load_pvm_file_tls_8c118528((void *)((g_8c32b804 + 0x2cf)));
    g_8c4e30c4->f08 = (int)(t17);
}
