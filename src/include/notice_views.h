#ifndef PSO_NOTICE_VIEWS_H
#define PSO_NOTICE_VIEWS_H
/* Provisional views; object prefixes do not establish complete allocation sizes. */
typedef struct Notice4 { unsigned char kind, length; unsigned short id; } Notice4;
typedef struct NoticeObject { char unknown00[52]; unsigned int flags; } NoticeObject;
typedef struct NoticeBase { char unknown00[24]; void *dispatch; } NoticeBase;
typedef char check_notice_kind[(unsigned long)&((Notice4 *)0)->kind == 0 ? 1 : -1];
typedef char check_notice_length[(unsigned long)&((Notice4 *)0)->length == 1 ? 1 : -1];
typedef char check_notice_id[(unsigned long)&((Notice4 *)0)->id == 2 ? 1 : -1];
typedef char check_notice_extent[sizeof(Notice4) == 4 ? 1 : -1];
typedef char check_notice_flags[(unsigned long)&((NoticeObject *)0)->flags == 52 ? 1 : -1];
typedef char check_notice_object_prefix[sizeof(NoticeObject) == 56 ? 1 : -1];
typedef char check_notice_dispatch[(unsigned long)&((NoticeBase *)0)->dispatch == 24 ? 1 : -1];
typedef char check_notice_base_prefix[sizeof(NoticeBase) == 28 ? 1 : -1];
#endif
