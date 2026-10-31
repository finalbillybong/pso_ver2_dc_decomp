/* SDK pool group 0x8c367c94 (Hitachi SHC): interrupt lock helpers and the
   lookup of named entries in the boot-time module table at 0x8c00fc00. */
typedef struct Entry {
    char *object;
    int refs;
} Entry;

typedef struct Table {
    int count;
    int unknown4;
    Entry entries[1];
} Table;

extern Table *g_table_8c00fff0;
extern int g_table_size_8c00fff4;
extern char g_table_area_8c00fc00[];
extern int call_8c12b748(char *, char *, int);
void set_table_8c367d7e(char *, int);

void lock_8c367c94(int *old)
{
    *old = _builtin_get_imask();
    _builtin_set_imask(15);
}

void unlock_8c367cac(int *old)
{
    _builtin_set_imask(*old);
}

Table *get_table_8c367cc2(int *volatile size)
{
    Table *t;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto load;
load:
    t = g_table_8c00fff0;
    if (t == 0) set_table_8c367d7e(g_table_area_8c00fc00, 0x78);
    t = g_table_8c00fff0;
    *size = g_table_size_8c00fff4;
    return t;
}

int find_id_8c367cea(int id)
{
    int size;
    Table *t = get_table_8c367cc2(&size);
    int i;
    for (i = 0; i < t->count; i++) {
        if (id == (int)t->entries[i].object) return i;
    }
    return -3;
}

int find_name_8c367d2a(char *name)
{
    int size;
    Table *t = get_table_8c367cc2(&size);
    int i;
    for (i = 0; i < t->count; i++) {
        char *p = t->entries[i].object;
        if (call_8c12b748(name, p + 0x10, 0x10) == 0) return i;
    }
    return -2;
}

void set_table_8c367d7e(char *table, int size)
{
    g_table_8c00fff0 = (Table *)table;
    g_table_size_8c00fff4 = size;
}

void nothing_8c367d88(void)
{
}

char *open_8c367d8c(char *name)
{
    int old;
    int size;
    Table *t;
    int i;
    char *object;
    lock_8c367c94(&old);
    t = get_table_8c367cc2(&size);
    i = find_name_8c367d2a(name);
    if (i >= 0) {
        object = t->entries[i].object;
        t->entries[i].refs++;
    } else {
        object = 0;
    }
    unlock_8c367cac(&old);
    return object;
}
