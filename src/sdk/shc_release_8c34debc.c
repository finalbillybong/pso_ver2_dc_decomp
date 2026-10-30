/* SDK pool group 0x8c34debc-0x8c34df6c (Hitachi SHC): drops a reference and,
   on the last one, shuts the subsystems down in order. */
extern int g_references_8c3fb40c;
extern int g_pending_8c3fb408;
extern void flush_8c34bbfc(void);
extern void release_pending_8c36becc(int);
extern void shutdown_a_8c3524fa(void);
extern void sync_8c34bc24(void);
extern void shutdown_b_8c34e0be(void);
extern void shutdown_c_8c34c86e(void);
extern void shutdown_d_8c34e208(void);
extern void shutdown_e_8c3495c2(void);
extern void shutdown_f_8c34c38a(void);
extern void shutdown_g_8c358af8(void);
extern void shutdown_h_8c358e0c(void);
extern void shutdown_i_8c359278(void);

void release_8c34debc(void)
{
    g_references_8c3fb40c--;
    if (g_references_8c3fb40c == 0) {
        flush_8c34bbfc();
        if (g_pending_8c3fb408) {
            release_pending_8c36becc(g_pending_8c3fb408);
            g_pending_8c3fb408 = 0;
        }
        shutdown_a_8c3524fa();
        sync_8c34bc24();
        shutdown_b_8c34e0be();
        flush_8c34bbfc();
        shutdown_c_8c34c86e();
        shutdown_d_8c34e208();
        shutdown_e_8c3495c2();
        shutdown_f_8c34c38a();
        shutdown_g_8c358af8();
        shutdown_h_8c358e0c();
        shutdown_i_8c359278();
        sync_8c34bc24();
    }
}
