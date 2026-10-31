extern unsigned short g_len_8c5c5884;
extern unsigned short g_count_8c5c5660;
extern char *g_wp_8c5c565c;
extern char g_type_8c5c5887;
extern char *g_end_8c5c5654;
extern char g_buf_8c5c5248[];
extern char *g_src_8c5c5668;

void ring_put_8c3f0e48(void)
{
    unsigned short i;

    if (g_len_8c5c5884 + g_count_8c5c5660 + 3 > 0x40c)
        return;
    *g_wp_8c5c565c++ = g_type_8c5c5887;
    if (g_wp_8c5c565c > g_end_8c5c5654)
        g_wp_8c5c565c = g_buf_8c5c5248;
    g_count_8c5c5660++;
    *g_wp_8c5c565c++ = g_len_8c5c5884 >> 8;
    if (g_wp_8c5c565c > g_end_8c5c5654)
        g_wp_8c5c565c = g_buf_8c5c5248;
    g_count_8c5c5660++;
    *g_wp_8c5c565c++ = g_len_8c5c5884;
    if (g_wp_8c5c565c > g_end_8c5c5654)
        g_wp_8c5c565c = g_buf_8c5c5248;
    g_count_8c5c5660++;
    for (i = 1; i <= g_len_8c5c5884; i++) {
        *g_wp_8c5c565c++ = *g_src_8c5c5668++;
        if (g_wp_8c5c565c > g_end_8c5c5654)
            g_wp_8c5c565c = g_buf_8c5c5248;
        g_count_8c5c5660++;
    }
}
