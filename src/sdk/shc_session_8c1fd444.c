/* Library pool group 0x8c1fd444-0x8c1fd588 (Hitachi SHC): session set-up
   wrappers over one work area; every failing step reports -17 (-18 when the
   entry cannot be opened). */
typedef struct Entry {
    char data[0x9c];
} Entry;

typedef struct Port {
    int unknown0[0x13];
    int settings;
} Port;

typedef struct Session {
    char unknown0[0x30];
    Port *object;
} Session;

typedef struct Work {
    char unknown0[0x6c];
    Session session;
} Work;

extern Work g_work_8c4fa588;
extern void prepare_8c1ffbf2(int a, int b, Entry *entry);
extern int open_entry_8c1ffdd0(Entry *entry);
extern void reset_session_8c1ffe76(Session *session);
extern short set_id_8c201f3c(short id, Port *object);
extern short set_a_8c201e64(Port *object, int value);
extern short set_c_8c201ea0(Port *object, int value);
extern short set_d_8c201edc(Port *object, int value);
extern short set_b_8c201e82(int *settings, int value);
extern short set_e_8c201efc(int *settings, int value);
extern short set_f_8c201f1c(int *settings, int value);
extern short start_8c201e42(Session *session);
extern short commit_8c201fb8(Session *session);

int open_session_8c1fd444(int a, int b)
{
    Work *work = &g_work_8c4fa588;
    Entry *entry = (Entry *)((char *)work + 4) + 1;
    int result;
    prepare_8c1ffbf2(a, b, entry);
    b = open_entry_8c1ffdd0(entry);
    result = (short)b;
    if (result == -1) return -18;
    if (result) return -17;
    reset_session_8c1ffe76(&work->session);
    return 0;
}

int configure_session_8c1fd488(short id, int a, int b, int c, int d, int e, int f)
{
    Work *work = &g_work_8c4fa588;
    Session *session = &work->session;
    Port *object = session->object;
    reset_session_8c1ffe76(session);
    if (set_id_8c201f3c(id, object)) return -17;
    if (set_a_8c201e64(object, a)) return -17;
    if (set_c_8c201ea0(object, c)) return -17;
    if (set_d_8c201edc(object, d)) return -17;
    if (set_b_8c201e82(&object->settings, b)) return -17;
    if (set_e_8c201efc(&object->settings, e)) return -17;
    if (set_f_8c201f1c(&object->settings, f)) return -17;
    return 0;
}

int start_session_8c1fd520(void)
{
    Work *work = &g_work_8c4fa588;
    Session *session = &work->session;
    if (start_8c201e42(session)) goto fail;
    if (commit_8c201fb8(session) == 0) goto ok;
fail:
    return -17;
ok:
    return 0;
}
