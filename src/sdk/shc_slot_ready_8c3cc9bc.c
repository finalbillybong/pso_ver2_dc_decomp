/* Checks whether entry n is in state 1 (Hitachi SHC). */
typedef struct Entry {
    char unknown0[0x138];
    unsigned short state;
    char unknown13a[0x174 - 0x13a];
} Entry;

extern unsigned char g_entry_count_8c5b857c;
extern Entry *g_entries_8c5b85b0;

int entry_ready_8c3cc9bc(int n)
{
    if (n >= g_entry_count_8c5b857c || n < 0 || g_entries_8c5b85b0[n].state != 1) return -4;
    return 0;
}
