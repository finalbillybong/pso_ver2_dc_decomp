extern int g_8c2e2ad8;
extern void *g_8c44be94;
extern int g_8c467188;
extern int g_8c4703c0;
extern void *g_8c4d97e0;
extern char g_8c318cf0[];
extern char g_8c318d68[];
extern int current_effect_mode(void);
extern int operation_8c01c25c(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c172d28(int, void *, void *, int);
void operation_8c17327c(void)
{
    int idx;
    int p;
    switch (current_effect_mode()) {
    case 0:
        if (operation_8c01c25c() == 0xf) {
            idx = 0;
        } else {
            idx = 1;
        }
        break;
    case 1:
    case 2:
        idx = 2;
        break;
    case 3:
    case 4:
    case 5:
        idx = 3;
        break;
    case 6:
    case 7:
    case 13:
        idx = 4;
        break;
    case 8:
    case 9:
    case 10:
        idx = 5;
        break;
    case 11:
    case 12:
    case 14:
    case 15:
    default:
        return;
    }
    if (g_8c2e2ad8 == 1 && g_8c4703c0 == 3) {
        p = allocate_block(g_8c4d97e0, 0xb8);
        if (p == 0) {
            for (;;) {
            }
        }
        if (p != 0) {
            idx <<= 2;
            call_8c172d28(p, g_8c44be94, *(void **)((g_8c467188 * 0x18 + g_8c318d68) + idx), 1);
        }
    } else {
        p = allocate_block(g_8c4d97e0, 0xb8);
        if (p == 0) {
            for (;;) {
            }
        }
        if (p != 0) {
            idx <<= 2;
            call_8c172d28(p, g_8c44be94, *(void **)((g_8c467188 * 0x18 + g_8c318cf0) + idx), 1);
        }
    }
}
