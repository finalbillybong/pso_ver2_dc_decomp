/* Pool group 0x8c3e1c00-0x8c3e1f98 (Hitachi SHC): message string lookup by id
   and language flag. */
extern char str_8c3f9d3c[];
extern char str_8c3f9d5a[];
extern char str_8c3f9d78[];
extern char str_8c3f9d96[];
extern char str_8c3f9db4[];
extern char str_8c3f9dd2[];
extern char str_8c3f9df0[];
extern char str_8c3f9e0e[];
extern char str_8c3f9e2c[];
extern char str_8c3f9e4a[];
extern char str_8c3f9e68[];
extern char str_8c3f9e86[];
extern char str_8c3f9ea4[];
extern char str_8c3f9ec2[];
extern char str_8c3f9ee0[];
extern char str_8c3f9efe[];
extern char str_8c3f9f1c[];
extern char str_8c3f9f3a[];
extern char str_8c3f9f58[];
extern char str_8c3f9f76[];
extern char str_8c3f9f94[];
extern char str_8c3f9fb2[];
extern char str_8c3f9fd0[];
extern char str_8c3f9fee[];
extern char str_8c3fa00c[];
extern char str_8c3fa02a[];
extern char str_8c3fa048[];
extern char str_8c3fa066[];
extern char str_8c3fa084[];
extern char str_8c3fa0a2[];
extern char str_8c3fa0c0[];
extern char str_8c3fa0de[];
extern char str_8c3fa0fc[];
extern char str_8c3fa11a[];
extern char str_8c3fa138[];
extern char str_8c3fa156[];
extern char str_8c3fa174[];
extern char str_8c3fa192[];
extern char str_8c3fa1b0[];
extern char str_8c3fa1ce[];
extern char str_8c3fa1ec[];
extern char str_8c3fa20a[];

char *msg_text_8c3e1c00(volatile unsigned short id, volatile char lang)
{
    switch (id) {
    case 0: if (lang) goto en; goto jp;
    case 1: return lang == 0 ? str_8c3f9d78 : str_8c3f9d96;
    case 2: return lang == 0 ? str_8c3f9db4 : str_8c3f9dd2;
    case 3: return lang == 0 ? str_8c3f9df0 : str_8c3f9e0e;
    case 4: return lang == 0 ? str_8c3f9e2c : str_8c3f9e4a;
    case 5: return lang == 0 ? str_8c3f9e68 : str_8c3f9e86;
    case 6: return lang == 0 ? str_8c3f9ea4 : str_8c3f9ec2;
    case 7: return lang == 0 ? str_8c3f9fd0 : str_8c3f9fee;
    case 8: return lang == 0 ? str_8c3f9f94 : str_8c3f9fb2;
    case 9: return lang == 0 ? str_8c3fa00c : str_8c3fa02a;
    case 10: return lang == 0 ? str_8c3f9f58 : str_8c3f9f76;
    case 11: return lang == 0 ? str_8c3f9f1c : str_8c3f9f3a;
    case 12: return lang == 0 ? str_8c3f9ee0 : str_8c3f9efe;
    case 13: return lang == 0 ? str_8c3fa0c0 : str_8c3fa0de;
    case 14: if (lang) goto en; goto jp;
    case 15: return lang == 0 ? str_8c3fa048 : str_8c3fa066;
    case 16: return lang == 0 ? str_8c3fa084 : str_8c3fa0a2;
    case 17: if (lang) goto en; goto jp;
    case 18: if (lang) goto en; goto jp;
    case 19: if (lang) goto en; goto jp;
    case 20: if (lang) goto en; goto jp;
    case 21: return lang == 0 ? str_8c3fa0fc : str_8c3fa11a;
    case 22: if (lang) goto en; goto jp;
    case 23: if (lang) goto en; goto jp;
    case 24: if (lang) goto en; goto jp;
    case 25: if (lang) goto en; goto jp;
    case 26: return lang == 0 ? str_8c3fa138 : str_8c3fa156;
    case 27: if (lang) goto en; goto jp;
    case 28: if (lang) goto en; goto jp;
    case 29: if (lang) goto en; goto jp;
    case 30: return lang == 0 ? str_8c3fa174 : str_8c3fa192;
    case 31: if (lang) goto en; goto jp;
    case 32: if (lang) goto en; goto jp;
    case 33: if (lang) goto en; goto jp;
    case 34: return lang == 0 ? str_8c3fa1b0 : str_8c3fa1ce;
    case 35: if (lang) goto en; goto jp;
    case 36: return lang == 0 ? str_8c3fa1ec : str_8c3fa20a;
    case 37: if (lang) goto en; goto jp;
    case 38: if (lang) goto en; goto jp;
    case 39: if (lang) goto en; goto jp;
    case 40: if (lang) goto en; goto jp;
    case 41:
        if (!lang) goto jp;
en:
        return str_8c3f9d5a;
    default:
jp:
        return str_8c3f9d3c;
    }
}
