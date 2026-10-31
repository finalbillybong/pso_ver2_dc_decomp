/* SDK pool group 0x8c360714-0x8c360ab8 (Hitachi SHC): reads device
   capability values through query callbacks into an info block. */
typedef struct Ctx Ctx;

typedef struct Info {
    int valid;
    int major;
    int minor;
    int level;
    int caps[4];
    int ids[7];
    int f3c;
    int f40;
    int f44;
    int f48;
    int ext[4];
    int sub[13];
} Info;

typedef struct Obj {
    char pad0[0x4c];
    Info info;
} Obj;

typedef struct SubV { int a; int b; int lo; int hi; } SubV;
typedef int (*QueryFn)(Ctx *, int *);
typedef int (*QueryFn2)(Ctx *, int, int *);

extern int get_level_8c366184(Ctx *, int *);
extern int get_version_8c3663b0(Ctx *, int *, int *);
extern int get_sign_8c366630(Ctx *, int *);
extern int get_range_8c36695a(Ctx *, int, int *, int *);
extern int get_flag_8c366240(Ctx *, int, int *);
extern int probe_8c3661fc(Ctx *, int, int *);
extern int query_8c366420(Ctx *, int *);
extern int query_8c36644e(Ctx *, int *);
extern int query_8c36647e(Ctx *, int *);
extern int query_8c3664ac(Ctx *, int *);
extern int query_8c366562(Ctx *, int *);
extern int query_8c366592(Ctx *, int *);
extern int query_8c3665c2(Ctx *, int *);
extern int query_8c3665f2(Ctx *, int *);
extern int query_8c36666e(Ctx *, int *);
extern int query_8c36669c(Ctx *, int *);
extern int query_8c3666ca(Ctx *, int *);
extern int query_8c3667b0(Ctx *, int, int *);
extern int query_8c3667f4(Ctx *, int, int *);
extern int query_8c366842(Ctx *, int, int *);
extern int query_8c366890(Ctx *, int, int *);
extern int query_8c3668d0(Ctx *, int, int *);
extern int query_8c366914(Ctx *, int, int *);
extern int query_8c3669d6(Ctx *, int, int *);
extern int query_8c366a1a(Ctx *, int, int *);
extern int query_8c366a5e(Ctx *, int, int *);
extern int query_8c366aa6(Ctx *, int, int *);
extern int query_8c366af2(Ctx *, int, int *);
extern int query_8c366b3e(Ctx *, int, int *);
extern int query_8c366b82(Ctx *, int, int *);
extern int query_8c366bca(Ctx *, int, int *);

static void read_caps_8c3607f2(Ctx *ctx, Info *info);
static void read_ids_8c360850(Ctx *ctx, int *ids);
static int find_8c360898();
static void read_ext_8c3608d4(Ctx *ctx, int n, int *out);
static void read_sub_8c360918(Ctx *ctx, int n, int *out);
static int query_8c3609d4(Ctx *ctx, QueryFn fn);
static int query2_8c3609f6();

void info_read_8c360714(Ctx *ctx, Info *info)
{
    int sign;
    int major;
    int minor;
    int level;
    int version;
    if (get_level_8c366184(ctx, &level) == 0) level = 0;
    if (level == 0) return;
    if (get_version_8c3663b0(ctx, &major, &minor) == 0) {
        major = 0;
        minor = 0;
    }
    info->major = major;
    info->minor = minor;
    version = info->major * 100 + info->minor;
    if (get_sign_8c366630(ctx, &sign) == 0) sign = 0;
    if (version < 110) sign = -sign;
    info->level = sign;
    read_caps_8c3607f2(ctx, info);
    read_ids_8c360850(ctx, info->ids);
    info->f3c = find_8c360898(ctx, 0xbd, 0xbd);
    info->f40 = find_8c360898(ctx, 0xbf, 0xbf);
    info->f44 = find_8c360898(ctx, 0xc0, 0xdf);
    info->f48 = find_8c360898(ctx, 0xe0, 0xef);
    read_ext_8c3608d4(ctx, info->f44, info->ext);
    read_sub_8c360918(ctx, info->f48, info->sub);
    info->valid = 1;
}

static void read_caps_8c3607f2(Ctx *ctx, Info *info)
{
    info->caps[0] = query_8c3609d4(ctx, query_8c366420);
    info->caps[1] = query_8c3609d4(ctx, query_8c36644e);
    if ((info->caps[2] = query_8c3609d4(ctx, query_8c36647e)) == -1) info->caps[2] = 2;
    info->caps[3] = query_8c3609d4(ctx, query_8c3664ac);
}

static void read_ids_8c360850(Ctx *ctx, int *ids)
{
    ids[0] = query_8c3609d4(ctx, query_8c366562);
    ids[1] = query_8c3609d4(ctx, query_8c366592);
    ids[2] = query_8c3609d4(ctx, query_8c3665c2);
    ids[3] = query_8c3609d4(ctx, query_8c3665f2);
    ids[4] = query_8c3609d4(ctx, query_8c36666e);
    ids[5] = query_8c3609d4(ctx, query_8c36669c);
    ids[6] = query_8c3609d4(ctx, query_8c3666ca);
}

static int find_8c360898(Ctx *ctx, int lo, int hi)
{
    int v;
    int i = lo;
    QueryFn2 fn = probe_8c3661fc;
    for (; i <= hi; i++) {
        if (fn(ctx, i, &v) == 0) continue;
        if (v) return i;
    }
    return 0;
}

static void read_ext_8c3608d4(Ctx *ctx, int n, int *out)
{
    if (n) {
        out[0] = query2_8c3609f6(ctx, n, query_8c3667b0);
        out[1] = query2_8c3609f6(ctx, n, query_8c3667f4);
        out[2] = query2_8c3609f6(ctx, n, query_8c366842);
        out[3] = query2_8c3609f6(ctx, n, query_8c366890);
    }
}

static void read_sub_8c360918(Ctx *ctx, int n, int *out)
{
    int v;
    out[0] = query2_8c3609f6(ctx, n, query_8c3668d0);
    out[1] = query2_8c3609f6(ctx, n, query_8c366914);
    if (get_range_8c36695a(ctx, n, &out[2], &out[3]) == 0) {
        ((SubV *)out)->lo = -1;
        ((SubV *)out)->hi = -1;
    }
    out[4] = query2_8c3609f6(ctx, n, query_8c3669d6);
    if (get_flag_8c366240(ctx, n, &v) == 0) v = 0;
    out[5] = v ? 1 : 0;
    if (v) {
        out[6] = query2_8c3609f6(ctx, n, query_8c366a1a);
        out[7] = query2_8c3609f6(ctx, n, query_8c366a5e);
        out[8] = query2_8c3609f6(ctx, n, query_8c366aa6);
        out[9] = query2_8c3609f6(ctx, n, query_8c366af2);
        out[10] = query2_8c3609f6(ctx, n, query_8c366b3e);
        out[11] = query2_8c3609f6(ctx, n, query_8c366b82);
        out[12] = query2_8c3609f6(ctx, n, query_8c366bca);
    }
}

static int query_8c3609d4(Ctx *ctx, QueryFn fn)
{
    int v;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto next;
next:
    &fn;
    if (fn(ctx, &v) == 0) return -1;
    return v;
}

static int query2_8c3609f6(Ctx *ctx, int n, QueryFn2 fn)
{
    volatile int m = n;
    QueryFn2 f = fn;
    int v;
    if (f(ctx, m, &v) == 0) return -1;
    return v;
}

int info_two_8c360a1c(void)
{
    return 2;
}

int info_version_8c360a20(Obj *obj)
{
    Info *info = &obj->info;
    if (info->valid == 0) return 0;
    return info->major * 100 + info->minor;
}

int info_sub_value_8c360a3c(Obj *obj)
{
    Info *info = &obj->info;
    int *sub = info->sub;
    if (info->valid == 0) return -1;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto next;
next:
    if (sub[5] == 0) return -1;
    return sub[6];
}
