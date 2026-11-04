/* Static data 8c2e2f24-8c2e2f54: record_table objects, in address order. */

typedef struct { const void *host0; int port0; const void *host1; int port1; } LoginServer;

extern const char str_8c2e301b[];
extern const char str_8c2e3034[];
extern const char str_8c2e304b[];

/* Login servers: {host, port} pairs (master.pso.dream-key.com, sg607634.sonicteam.com,
   ddplanet.sega.co.jp; ports 9200/9201). */
const LoginServer g_login_server_table_8c2e2f24[3] = {
    { str_8c2e301b, 9200, str_8c2e301b, 9201 },
    { str_8c2e3034, 9200, str_8c2e3034, 9201 },
    { str_8c2e304b, 9201, str_8c2e304b, 9201 }
};
