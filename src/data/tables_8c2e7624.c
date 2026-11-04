/* Static data 8c2e7624-8c2e7900: record_table objects, in address order. */

typedef struct { int this_offset; int vtable_index; const void *function; } GameCommandHandler;

extern void handle_cmd_01_lobby_message_box_8c02dac4(void);
extern void handle_cmd_03_legacy_register_result_8c02db60(void);
extern void handle_cmd_04_set_guild_card_number_and_update_8c02dbcc(void);
extern void handle_cmd_05_disconnect_8c02dd30(void);
extern void handle_cmd_06_chat_8c02dd8c(void);
extern void handle_cmd_07_A0_A1_8c02ddc8(void);
extern void handle_cmd_08_game_list_8c02de60(void);
extern void handle_cmd_0E_incomplete_legacy_join_game_8c02df90(void);
extern void handle_cmd_64_join_game_8c02e098(void);
extern void handle_cmd_12_valid_but_ignored_8c02e154(void);
extern void handle_cmd_16_valid_but_ignored_8c02e168(void);
extern void handle_cmd_44_open_file_for_download_8c02e17c(void);
extern void handle_cmd_13_write_online_quest_file_8c02e224(void);
extern void handle_cmd_14_valid_but_ignored_8c02e25c(void);
extern void handle_cmd_11_ship_info_8c02e270(void);
extern void handle_cmd_18_90_8c02f63c(void);
extern void handle_cmd_17_9B_8c02ff24(void);
extern void handle_cmd_19_reconnect_to_different_address_8c02e2a8(void);
extern void handle_cmd_1A_large_message_box_8c02db28(void);
extern void handle_cmd_1B_valid_but_ignored_8c02e3d4(void);
extern void handle_cmd_1C_valid_but_ignored_8c02e3e8(void);
extern void handle_cmd_60_62_8c02e3fc(void);
extern void handle_cmd_6C_6D_8c02e414(void);
extern void handle_cmd_81_simple_mail_8c02e5b8(void);
extern void handle_cmd_41_guild_card_search_result_8c02e540(void);
extern void handle_cmd_88_account_check_result_8c02fd80(void);
extern void handle_cmd_8A_connection_information_result_8c02fdc4(void);
extern void handle_cmd_80_valid_but_ignored_8c02e44c(void);
extern void handle_cmd_67_join_lobby_8c02e0f0(void);
extern void handle_cmd_83_lobby_menu_8c02e494(void);
extern void handle_cmd_1D_ping_8c02e578(void);
extern void handle_cmd_65_add_player_to_game_8c02f43c(void);
extern void handle_cmd_66_remove_player_from_game_8c02f47c(void);
extern void handle_cmd_68_add_player_to_lobby_8c02f4bc(void);
extern void handle_cmd_69_remove_player_from_lobby_8c02f4f8(void);
extern void handle_cmd_91_start_encryption_at_login_server_8c02f534(void);
extern void handle_cmd_92_register_result_8c02f74c(void);
extern void handle_cmd_95_request_player_data_8c02f794(void);
extern void handle_cmd_A2_quest_menu_8c02e5f0(void);
extern void handle_cmd_A3_quest_information_8c02e608(void);
extern void handle_cmd_A4_download_quest_menu_8c02e620(void);
extern void handle_cmd_A5_download_quest_information_8c02e6b0(void);
extern void handle_cmd_A6_open_file_for_download_8c02e1b4(void);
extern void handle_cmd_A7_write_download_file_8c02e1ec(void);
extern void handle_cmd_97_save_to_memory_card_8c02f984(void);
extern void handle_cmd_B0_text_message_8c02e6c8(void);
extern void handle_cmd_1F_information_menu_8c02def8(void);
extern void handle_cmd_B1_server_time_8c02fafc(void);
extern void handle_cmd_C0_choice_search_options_8c02fb94(void);
extern void handle_cmd_C4_choice_search_results_8c02fcbc(void);
extern void handle_cmd_B2_execute_code_and_or_checksum_memory_8c02fcf4(void);
extern void handle_cmd_02_start_encryption_8c030110(void);
extern void handle_cmd_9A_account_verification_result_8c0300c8(void);
extern void handle_cmd_9C_register_result_8c030358(void);
extern void handle_cmd_C5_player_records_update_8c030530(void);

/* Game-command handlers: 61 CodeWarrior pointer-to-member records {this offset 0,
   vtable index -1 (non-virtual), member function}, indexed by dispatch_game_command
   (0x8c02d368, which loads 0x8c2e7624). Handler addresses match newserv
   notes/handler-tables.txt (DCv2). */
const GameCommandHandler game_command_handler_table_8c2e7624[61] = {
    { 0, -1, (void *)handle_cmd_01_lobby_message_box_8c02dac4 },
    { 0, -1, (void *)handle_cmd_03_legacy_register_result_8c02db60 },
    { 0, -1, (void *)handle_cmd_04_set_guild_card_number_and_update_8c02dbcc },
    { 0, -1, (void *)handle_cmd_05_disconnect_8c02dd30 },
    { 0, -1, (void *)handle_cmd_06_chat_8c02dd8c },
    { 0, -1, (void *)handle_cmd_07_A0_A1_8c02ddc8 },
    { 0, -1, (void *)handle_cmd_08_game_list_8c02de60 },
    { 0, -1, (void *)handle_cmd_0E_incomplete_legacy_join_game_8c02df90 },
    { 0, -1, (void *)handle_cmd_64_join_game_8c02e098 },
    { 0, -1, (void *)handle_cmd_12_valid_but_ignored_8c02e154 },
    { 0, -1, (void *)handle_cmd_16_valid_but_ignored_8c02e168 },
    { 0, -1, (void *)handle_cmd_44_open_file_for_download_8c02e17c },
    { 0, -1, (void *)handle_cmd_13_write_online_quest_file_8c02e224 },
    { 0, -1, (void *)handle_cmd_14_valid_but_ignored_8c02e25c },
    { 0, -1, (void *)handle_cmd_11_ship_info_8c02e270 },
    { 0, -1, (void *)handle_cmd_18_90_8c02f63c },
    { 0, -1, (void *)handle_cmd_17_9B_8c02ff24 },
    { 0, -1, (void *)handle_cmd_19_reconnect_to_different_address_8c02e2a8 },
    { 0, -1, (void *)handle_cmd_1A_large_message_box_8c02db28 },
    { 0, -1, (void *)handle_cmd_1B_valid_but_ignored_8c02e3d4 },
    { 0, -1, (void *)handle_cmd_1C_valid_but_ignored_8c02e3e8 },
    { 0, -1, (void *)handle_cmd_60_62_8c02e3fc },
    { 0, -1, (void *)handle_cmd_60_62_8c02e3fc },
    { 0, -1, (void *)handle_cmd_6C_6D_8c02e414 },
    { 0, -1, (void *)handle_cmd_6C_6D_8c02e414 },
    { 0, -1, (void *)handle_cmd_81_simple_mail_8c02e5b8 },
    { 0, -1, (void *)handle_cmd_41_guild_card_search_result_8c02e540 },
    { 0, -1, (void *)handle_cmd_88_account_check_result_8c02fd80 },
    { 0, -1, (void *)handle_cmd_8A_connection_information_result_8c02fdc4 },
    { 0, -1, (void *)handle_cmd_80_valid_but_ignored_8c02e44c },
    { 0, -1, (void *)handle_cmd_67_join_lobby_8c02e0f0 },
    { 0, -1, (void *)handle_cmd_83_lobby_menu_8c02e494 },
    { 0, -1, (void *)handle_cmd_1D_ping_8c02e578 },
    { 0, -1, (void *)handle_cmd_65_add_player_to_game_8c02f43c },
    { 0, -1, (void *)handle_cmd_66_remove_player_from_game_8c02f47c },
    { 0, -1, (void *)handle_cmd_68_add_player_to_lobby_8c02f4bc },
    { 0, -1, (void *)handle_cmd_69_remove_player_from_lobby_8c02f4f8 },
    { 0, -1, (void *)handle_cmd_18_90_8c02f63c },
    { 0, -1, (void *)handle_cmd_91_start_encryption_at_login_server_8c02f534 },
    { 0, -1, (void *)handle_cmd_92_register_result_8c02f74c },
    { 0, -1, (void *)handle_cmd_95_request_player_data_8c02f794 },
    { 0, -1, (void *)handle_cmd_07_A0_A1_8c02ddc8 },
    { 0, -1, (void *)handle_cmd_07_A0_A1_8c02ddc8 },
    { 0, -1, (void *)handle_cmd_A2_quest_menu_8c02e5f0 },
    { 0, -1, (void *)handle_cmd_A3_quest_information_8c02e608 },
    { 0, -1, (void *)handle_cmd_A4_download_quest_menu_8c02e620 },
    { 0, -1, (void *)handle_cmd_A5_download_quest_information_8c02e6b0 },
    { 0, -1, (void *)handle_cmd_A6_open_file_for_download_8c02e1b4 },
    { 0, -1, (void *)handle_cmd_A7_write_download_file_8c02e1ec },
    { 0, -1, (void *)handle_cmd_97_save_to_memory_card_8c02f984 },
    { 0, -1, (void *)handle_cmd_B0_text_message_8c02e6c8 },
    { 0, -1, (void *)handle_cmd_1F_information_menu_8c02def8 },
    { 0, -1, (void *)handle_cmd_B1_server_time_8c02fafc },
    { 0, -1, (void *)handle_cmd_C0_choice_search_options_8c02fb94 },
    { 0, -1, (void *)handle_cmd_C4_choice_search_results_8c02fcbc },
    { 0, -1, (void *)handle_cmd_B2_execute_code_and_or_checksum_memory_8c02fcf4 },
    { 0, -1, (void *)handle_cmd_02_start_encryption_8c030110 },
    { 0, -1, (void *)handle_cmd_9A_account_verification_result_8c0300c8 },
    { 0, -1, (void *)handle_cmd_17_9B_8c02ff24 },
    { 0, -1, (void *)handle_cmd_9C_register_result_8c030358 },
    { 0, -1, (void *)handle_cmd_C5_player_records_update_8c030530 }
};
