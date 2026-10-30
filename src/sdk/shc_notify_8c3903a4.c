/* SDK pool group 0x8c3903a4-0x8c3903c0 (Hitachi SHC): sends the current handle
   and finishes. */
extern int g_handle_8c5761d4;
extern void send_8c37b070(int handle);
extern void finish_8c37a44a(void);

void notify_8c3903a4(void)
{
    send_8c37b070(g_handle_8c5761d4);
    finish_8c37a44a();
}
