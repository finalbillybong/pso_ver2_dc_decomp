typedef struct {
    char pad00[0x4c];
    int dev_a;
    int dev_b;
    char pad54[0x8c - 0x54];
    int level;
    int mode;
} Voice;
extern void func_8c356204(int, int);
extern int debug_print_8c35570c(char *, ...);
extern char str_8c3f34bc[];
extern void func_8c3561f2(int, int);
extern void func_8c340ae4(Voice *);
extern void func_8c340aac(void);

void voice_set_level_8c342548(Voice *v, int level)
{
    v->level = level;
    if (v->dev_a) {
        func_8c356204(v->dev_a, level);
    }
    if (v->dev_b) {
        func_8c356204(v->dev_b, level);
    }
}

int voice_get_level_8c342584(Voice *v)
{
    return v->level;
}

void voice_set_mode_8c34258a(Voice *v, int mode)
{
    if (mode >= 4 && v->dev_b == 0) {
        debug_print_8c35570c(str_8c3f34bc, mode);
        return;
    }
    if (mode == 0) {
        func_8c3561f2(v->dev_a, 0);
    } else if (mode == 1) {
        func_8c3561f2(v->dev_a, 2);
    } else {
        func_8c3561f2(v->dev_a, 1);
    }
    if (v->dev_b) {
        if (mode == 0 || mode == 1 || mode == 2) {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto l;
l:
            func_8c340ae4(v);
        } else if (mode == 4 || mode == 5 || mode == 6 || mode == 7) {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto m;
m:
            func_8c340aac();
        }
    }
    v->mode = mode;
}
