/* SDK pool group 0x8c35f700-0x8c35f7e8 (Hitachi SHC): device command wrappers:
   three that check support and send a subcommand, four that send the reset
   code 0xff000a01, and a stub. The labels reproduce SHC's per-block
   scratch-register rotation (likely from macros in the original source). */
extern int check_support_8c364c24(void *, int);
extern int send_subcommand_8c365d70(void *, int, int, int, int);
extern int send_code_8c360c8c(void *, int);

int command_6_8c35f700(void *device)
{
    int result;
    if (check_support_8c364c24(device, 6)) {
        goto send6;
send6:
        if ((result = send_subcommand_8c365d70(device, 3, 6, 0, 0)) != 0) return result;
    }
    return 0;
}

int command_7_8c35f73a(void *device)
{
    int result;
    if (check_support_8c364c24(device, 6)) {
        goto send7;
send7:
        if ((result = send_subcommand_8c365d70(device, 3, 7, 0, 0)) != 0) return result;
    }
    return 0;
}

int command_8_8c35f774(void *device, int value)
{
    int result;
    if (check_support_8c364c24(device, 6)) {
        goto send8;
send8:
        if ((result = send_subcommand_8c365d70(device, 3, 8, value, 0)) != 0) return result;
    }
    return 0;
}

int reset_a_8c35f7b2(void *device)
{
    return send_code_8c360c8c(device, 0xff000a01);
}

int reset_b_8c35f7ba(void *device)
{
    return send_code_8c360c8c(device, 0xff000a01);
}

int reset_c_8c35f7c2(void *device)
{
    return send_code_8c360c8c(device, 0xff000a01);
}

int reset_d_8c35f7ca(void *device)
{
    return send_code_8c360c8c(device, 0xff000a01);
}

int stub_8c35f7d2(void)
{
    return 0;
}
