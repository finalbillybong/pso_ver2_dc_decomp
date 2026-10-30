/* Library pool group 0x8c1fb6a4-0x8c1fb7a4 (Hitachi SHC): helpers for a table of
   eight 0xc24-byte entries. The five functions share one literal pool (two
   words, then the callee address and the table address). */
typedef struct Entry {
    short used;
    unsigned short id;
    int state;
    int key;
    short sub;
    char data[0x810 - 14];
    int value;
    char unknown814[0xc24 - 0x814];
} Entry;

typedef struct Request {
    short id;
    short unknown2;
    int unknown4;
    short value;
    short unknowna;
    int key;
    short sub;
    short unknown12;
    char *data;
} Request;

extern int read_count_8c23186e(void);
extern Entry g_entries_8c4f2980[8];

int scaled_count_8c1fb6a4(void)
{
    return read_count_8c23186e() * 16;
}

Entry *find_entry_8c1fb6b4(unsigned short id)
{
    int i;
    for (i = 0; i < 8; i++) {
        if (g_entries_8c4f2980[i].used && g_entries_8c4f2980[i].id == id) break;
    }
    if (i == 8) return 0;
    return &g_entries_8c4f2980[i];
}

int alloc_entry_8c1fb6f0(void)
{
    int i;
    for (i = 0; i < 8; i++) if (g_entries_8c4f2980[i].used == 0) break;
    if (i == 8) return -1;
    g_entries_8c4f2980[i].used = 1;
    return i;
}

void free_entry_8c1fb724(int i)
{
    g_entries_8c4f2980[i].used = 0;
}

int bind_entry_8c1fb732(int create, Request *request)
{
    Entry *entry = find_entry_8c1fb6b4(request->id);
    if (!entry) goto fail;
    if (create) goto make;
    if (entry->state != 1) goto fail;
    if (entry->key != 0) {
        if (entry->key != request->key) goto fail;
    }
    if (entry->sub == 0) goto bind;
    if (entry->sub == request->sub) goto bind;
fail:
    return 1;
bind:
    request->data = entry->data;
    goto done;
make:
    goto store;
store:
    entry->state = 2;
    entry->value = request->value;
done:
    return 0;
}
