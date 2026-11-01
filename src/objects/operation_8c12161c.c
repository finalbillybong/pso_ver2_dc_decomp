typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c311cb0 S_g8c311cb0;
typedef struct S_g8c4d8628 S_g8c4d8628;
extern int g_8c44be20;
extern int g_8c4d85e0;
extern S_g8c4d8628 *g_8c4d8628;
extern int operation_8c05bbf8(void);
extern void file_load_8c104d00(int, void *);
extern int get_current_area_8c032b10(void);
extern void call_8c122210(void *, int);
extern void call_8c391cc4(void);
void select_fog_entry_file_8c12161c(void)
{
    int t1;
    int t2;
    t1 = operation_8c05bbf8();
    if (t1 == 0 && g_8c44be20 == 0) {
        goto L_8c121650;
    }
    if (((g_8c4d85e0 & 2)) == 0) {
        file_load_8c104d00((int)((void *)0x8c285dc5), g_8c4d8628);
        g_8c4d85e0 |= 2;
        goto L_8c121670;
L_8c121650:;
        if (((g_8c4d85e0 & 2)) != 0) {
            file_load_8c104d00((int)((void *)0x8c285db8), g_8c4d8628);
            g_8c4d85e0 &= -3;
        }
    }
L_8c121670:;
    t2 = get_current_area_8c032b10();
    call_8c122210((void *)(*(S_g8c311cb0 **)((char *)0x8c311cb0 + (t2 << 2))), 1);
    call_8c391cc4();
}
