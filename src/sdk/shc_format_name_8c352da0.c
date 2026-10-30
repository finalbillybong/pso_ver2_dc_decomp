/* SDK pool group 0x8c352da0-0x8c352e20 (Hitachi SHC): builds "<name>:<kind> <label>"
   in a static buffer, choosing the kind text from a copied table. */
typedef struct NameTable {
    char *names[10];
} NameTable;

typedef struct Item {
    int unknown0;
    char *label;
} Item;

extern NameTable g_kind_names_8c3f4b68;
extern char g_buffer_8c538328[];
extern char g_separator_8c3f4b90[];
extern char g_space_8c3f4b94[];
extern void *memset(void *, int, unsigned int);
extern char *strcpy(char *, const char *);
extern char *strcat(char *, const char *);

void format_name_8c352da0(char *name, Item *item, int kind)
{
    NameTable kinds;
    kinds = g_kind_names_8c3f4b68;
    memset(g_buffer_8c538328, 0, 0x81);
    strcpy(g_buffer_8c538328, name);
    strcat(g_buffer_8c538328, g_separator_8c3f4b90);
    strcat(g_buffer_8c538328, kinds.names[kind]);
    strcat(g_buffer_8c538328, g_space_8c3f4b94);
    strcat(g_buffer_8c538328, item->label);
}
