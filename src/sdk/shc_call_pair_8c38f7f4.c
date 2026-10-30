/* Calls a function with a global, then tail-calls another (Hitachi SHC). */
extern int g_handle_8c5761d0;
extern void use_handle_8c37b070(int);
extern void finish_8c37a44a(void);

void call_pair_8c38f7f4(void)
{
    use_handle_8c37b070(g_handle_8c5761d0);
    finish_8c37a44a();
}
