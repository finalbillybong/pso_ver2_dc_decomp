/* SDK pool group 0x8c379038-0x8c379280 (Hitachi SHC): system flash configuration
   accessors (language/area/time-zone bytes) and the console ID block check. */
extern int d_8c3fbfc0;
/* system-area flash configuration bytes (fixed addresses) */
#define SYS_LANG ((char *)0x8c00007e)
#define SYS_AREA ((char *)0x8c00007d)
extern int flash_id_8c378f3c(int, int);
extern int select_8c378714(int unit);
extern char *get_info_8c37873c(void);
extern void *memcpy(void *, const void *, unsigned int);

char *id_block_8c379200(void);
int id_check_8c37923c(unsigned char *p);

int flash_set_ctx_8c379038(int ctx)
{
    if (!ctx) return -1;
    d_8c3fbfc0 = ctx;
    return 0;
}

int flash_clear_ctx_8c37904a(void)
{
    d_8c3fbfc0 = 0;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto done;
done:
    return 0;
}

int flash_set_lang_8c379054(int lang)
{
    int r;
    if (d_8c3fbfc0 == 0) return -1;
    if (lang != 0 && lang != 1) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto lang_ok;
lang_ok:
    ((volatile char *)SYS_LANG)[0] = lang;
    r = flash_id_8c378f3c(2, d_8c3fbfc0);
    if (r == -1) return -1;
    return 0;
}

int flash_get_lang_8c37908a(int *out)
{
    int r;
    char c;
    if (!out) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto out_ok;
out_ok:
    *out = 0;
    if (d_8c3fbfc0 == 0) return -1;
    r = flash_id_8c378f3c(0, d_8c3fbfc0);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto id_read;
id_read:
    if (r == -1) return -1;
    c = SYS_LANG[0];
    if (c == 0) *out = 0;
    else if (c == 1) *out = 1;
    else return -1;
    return 0;
}

int id_byte_a_8c3790d8(int *out)
{
    char *p;
    if (!out) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto a_ok;
a_ok:
    *out = 0x30;
    p = id_block_8c379200();
    if (!p) return -1;
    *out = p[10];
    return 0;
}

int digit_8c379102(int c)
{
    return c - 0x30;
}

int id_byte_c_8c379166(int *out);

int flash_get_area_8c379108(int *out)
{
    int r;
    int t;
    char c;
    if (!out) return -1;
    *out = 0;
    if (d_8c3fbfc0 == 0) return -1;
    r = flash_id_8c378f3c(0, d_8c3fbfc0);
    if (r == -1) return -1;
    c = SYS_AREA[0];
    if (c == -1) {
        id_byte_c_8c379166(&t);
        if (t == -1) *out = 1;
        else *out = digit_8c379102(t);
    } else {
        *out = c;
    }
    return 0;
}

int id_byte_c_8c379166(int *out)
{
    char *p;
    if (!out) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto c_ok;
c_ok:
    *out = 0;
    p = id_block_8c379200();
    if (!p) return -1;
    *out = p[11];
    return 0;
}

int id_byte_d_8c379190(int *out)
{
    char *p;
    if (!out) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto d_ok;
d_ok:
    *out = 0x30;
    p = id_block_8c379200();
    if (!p) return -1;
    *out = p[12];
    return 0;
}

int id_copy_8c3791ba(dst)
void *dst;
{
    char *src;
    char *p;
    int r;
    if (!dst) return 0;
    select_8c378714(0);
    p = get_info_8c37873c();
    src = p;
    p += 2;
    memcpy(dst, p, 6);
    if (id_check_8c37923c((unsigned char *)src)) r = 1;
    else r = 2;
    return r;
}

char *id_block_8c379200(void)
{
    int r = select_8c378714(0);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto selected;
selected:
    if (r) return 0;
    else return get_info_8c37873c();
}

int id_check_8c37923c(unsigned char *p)
{
    volatile unsigned char b;
    volatile unsigned char a;
    int i;
    int sum;
    int t;
    a = p[0];
    b = p[1];
    sum = 0;
    for (i = 0; i < 6; i++) {
        sum += p[i + 2];
        if (0) p++;
    }
    i = (unsigned char)sum;
    t = (unsigned char)i;
    if (t == b && (unsigned char)~t == a) return 1;
    if (0) a = i;
    return 0;
}
