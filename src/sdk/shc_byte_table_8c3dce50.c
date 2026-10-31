/* Byte table store and copy-out (Hitachi SHC). */
extern unsigned char g_table_8c5be168[];

void table_put_8c3dce50(unsigned char value, unsigned short index)
{
    g_table_8c5be168[index] = value;
}

void table_read_8c3dce58(unsigned short start, unsigned short count, unsigned char *out)
{
    unsigned short i;
    unsigned char *p;
    i = 0;
    p = &g_table_8c5be168[start];
    if (i < count) {
        do {
            *out = *p;
            p++;
            out++;
            i++;
        } while (i < count);
    }
}

int table_ready_8c3dce78(void)
{
    return 1;
}
