// Types adapted from output from stdump (github.com/chaoticgd/ccc)

#ifndef _LIBDLSP_TYPES_H_
#define _LIBDLSP_TYPES_H_

typedef char bool;

typedef enum {
	eNW_STATE_NONE = 0,
	eNW_STATE_NETCONFIGED = 1,
	eNW_STATE_IRXLOADED = 2,
	eNW_STATE_INTERFACEUP = 3,
	eNW_STATE_LIBINITED = 4,
	eNW_STATE_NETREGISTERED = 5,
	eNW_STATE_CONNECTPENDING = 6,
	eNW_STATE_CONNECTSUCCESS = 7,
	eNW_STATE_CONNECTFAILURE = 8,
	eNW_STATE_JOINPENDING = 9,
	eNW_STATE_JOINSUCCESS = 10,
	eNW_STATE_JOINFAILURE = 11,
	eNW_STATE_FINAL = 12
} eNW_STATE;

typedef struct { // 0x34
	/* 0x00 */ unsigned int crc;
	/* 0x04 */ int rank[6];
	/* 0x1c */ int padding[1];
	/* 0x20 */ char headsetAttached;
	/* 0x21 */ char isClanLeader;
	/* 0x22 */ char hasLocalPlayer;
	/* 0x23 */ char pad;
	/* 0x24 */ int clanID;
	/* 0x28 */ int totalGamesWithCheaters;
	/* 0x2c */ int consecutiveGamesWithCheaters;
	/* 0x30 */ char lastGameHadCheater;
} tNW_PlayerInfoStats;

typedef struct { // 0x6c
	/* 0x00 */ char strTournName[16];
	/* 0x10 */ char team1Name[24];
	/* 0x28 */ char team2Name[24];
	/* 0x40 */ char roundStartTimeString[36];
	/* 0x64 */ unsigned int roundStartTime;
	/* 0x68 */ unsigned int tournId;
} TourneyRoundInfo;

struct tReservations { // 0x8
	/* 0x0 */ int m_id;
	/* 0x4 */ int m_timeout;
};

typedef struct { // 0x8c
	/* 0x00 */ short int ranksToLevels[10];
	/* 0x14 */ short int m_dropPenaltyStart;
	/* 0x16 */ short int m_linkDirtyMax;
	/* 0x18 */ short int m_linkDirtyShortTermMax;
	/* 0x1a */ short int m_dropTo30;
	/* 0x1c */ short int m_perPlayer;
	/* 0x1e */ short int m_perPlayerSiege;
	/* 0x20 */ short int m_hasHeadset;
	/* 0x22 */ short int m_perWeapon[9];
	/* 0x34 */ short int m_perVehicle[4];
	/* 0x3c */ short int m_perLevel[12];
	/* 0x54 */ short int m_perMajorMode[5];
	/* 0x60 */ float m_RANK_SPREAD;
	/* 0x64 */ float m_RANK_DIFF_LOW_CLAMP;
	/* 0x68 */ float m_RANK_DIFF_HIGH_CLAMP;
	/* 0x6c */ float m_RANK_VALUE;
	/* 0x70 */ float m_MIN_LOSE;
	/* 0x74 */ float m_MIN_LOSE_SPREAD;
	/* 0x78 */ float m_MAX_WIN_SPREAD;
	/* 0x7c */ float m_MAX_SCORE;
	/* 0x80 */ float m_DAMP_WINNING_LOW_CLAMP;
	/* 0x84 */ float m_MIN_ALWAYS_POSITIVE_RANK_DELTA;
	/* 0x88 */ float m_MAX_ADD_TO_RANK;
} tNW_DownloadedTweaks;

typedef struct { // 0x1a0
	/* 0x000 */ char MessageID[21];
	/* 0x018 */ int StatusCode; /* MediusCallbackStatus */
	/* 0x01c */ int ApplicationID;
	/* 0x020 */ int MinPlayers;
	/* 0x024 */ int MaxPlayers;
	/* 0x028 */ int GameLevel;
	/* 0x02c */ int PlayerSkillLevel;
	/* 0x030 */ int PlayerCount;
	/* 0x034 */ char GameStats[256];
	/* 0x134 */ char GameName[64];
	/* 0x174 */ int RulesSet;
	/* 0x178 */ int GenericField1;
	/* 0x17c */ int GenericField2;
	/* 0x180 */ int GenericField3;
	/* 0x184 */ int GenericField4;
	/* 0x188 */ int GenericField5;
	/* 0x18c */ int GenericField6;
	/* 0x190 */ int GenericField7;
	/* 0x194 */ int GenericField8;
	/* 0x198 */ int WorldStatus; /* MediusWorldStatus */
	/* 0x19c */ int GameHostType; /* MediusGameHostType */
} MediusGameInfoResponse;

typedef struct { // 0x180
	/* 0x000 */ int MediusWorldID;
	/* 0x004 */ int PlayerCount;
	/* 0x008 */ char GameName[64];
	/* 0x048 */ char GameStats[256];
	/* 0x148 */ int MinPlayers;
	/* 0x14c */ int MaxPlayers;
	/* 0x150 */ int GameLevel;
	/* 0x154 */ int PlayerSkillLevel;
	/* 0x158 */ int RulesSet;
	/* 0x15c */ int GenericField1;
	/* 0x160 */ int GenericField2;
	/* 0x164 */ int GenericField3;
	/* 0x168 */ int GenericField4;
	/* 0x16c */ int GenericField5;
	/* 0x170 */ int GenericField6;
	/* 0x174 */ int GenericField7;
	/* 0x178 */ int GenericField8;
	/* 0x17c */ int WorldStatus; /* MediusWorldStatus */
} MediusWorldReport;

typedef struct { // 0x420
	/* 0x000 */ bool bDirty;
	/* 0x004 */ char systemMessage[0x1c]; /* NetTypeSystemMessageData */
	/* 0x020 */ unsigned char systemMessageText[1024];
} MediusSystemMessageEntry;

typedef struct { // 0x1680
	/* 0x0000 */ eNW_STATE State;
	/* 0x0004 */ unsigned int UniqueIdCnt;
	/* 0x0008 */ void* MyConnectionIndex; /* HDME */
	/* 0x000c */ void* MediusConnectionIndex; /* HDME */
	/* 0x0010 */ int MyClientIndex;
	/* 0x0014 */ int NumLocalPlayers;
	/* 0x0018 */ int NumLocalBots;
	/* 0x001c */ int NumClients;
	/* 0x0020 */ int NumPlayers;
	/* 0x0024 */ int MaxPlayers;
	/* 0x0028 */ int kbd_device;
	/* 0x002c */ int MyTeam;
	/* 0x0030 */ int MySkin;
	/* 0x0034 */ int MyAccountId;
	/* 0x0038 */ int GameSequenceNumber;
	/* 0x003c */ int NumReservations;
	/* 0x0040 */ struct tReservations Reservations[10];
	/* 0x0090 */ int LeaderPartyIDs[10];
	/* 0x00b8 */ bool IsClanChallenge;
	/* 0x00bc */ int *mpIgnoreListNumEntries;
	/* 0x00c0 */ int *mpIgnoreListEntries;
	/* 0x00c4 */ char MySessionKey[17];
	/* 0x00d8 */ int MyClanId;
	/* 0x00dc */ char MyClanName[33];
	/* 0x00fd */ bool ClanLeader;
	/* 0x00fe */ char MyUserName[15];
	/* 0x010d */ char MyPassword[15];
	/* 0x011c */ int MyAccountCityId;
	/* 0x0120 */ bool MyLicenseAccepted;
	/* 0x0124 */ int MyMediusWorldId;
	/* 0x0128 */ int MyRoomWorldId;
	/* 0x012c */ int MyCityWorldId;
	/* 0x0130 */ unsigned int lastMediusServerTimeT;
	/* 0x0138 */ long int lastMediusServerTimeReceived;
	/* 0x0140 */ unsigned int TourneyRoundBeginTime;
	/* 0x0144 */ char MyTag[5];
	/* 0x0149 */ char MyIp[20];
	/* 0x0160 */ tNW_PlayerInfoStats MyStats;
	/* 0x0194 */ char MyStatsHaveDropPenalty;
	/* 0x0195 */ char IsGameRanked;
	/* 0x0198 */ int GameLevel;
	/* 0x019c */ char GameName[64];
	/* 0x01dc */ char GamePassword[32];
	/* 0x01fc */ int PartyMemberIDs[4];
	/* 0x020c */ int PartyRoomID;
	/* 0x0210 */ int PartyID;
	/* 0x0214 */ int NetFrameTime;
	/* 0x0218 */ int LastTrueNetFrameTime;
	/* 0x021c */ int JoinGameTime;
	/* 0x0220 */ bool ezNetCnfLoaded;
	/* 0x0221 */ bool INukedTheMicroCode;
	/* 0x0224 */ int ClientIndex[10];
	/* 0x024c */ bool SessionMaster;
	/* 0x024d */ bool newSessionMaster;
	/* 0x0250 */ int SessionMasterClientIndex;
	/* 0x0254 */ int onlyLocalPlayers;
	/* 0x0258 */ int originalOnlyLocalPlayers;
	/* 0x025c */ bool m_bPeer2PeerGame;
	/* 0x025d */ bool m_bUseEncryption;
	/* 0x025e */ bool m_bZeroAggregation;
	/* 0x025f */ char m_UseAuxUdp;
	/* 0x0260 */ bool m_bHardwarePresent;
	/* 0x0261 */ bool m_bVoiceEnabled;
	/* 0x0262 */ char m_LobbyMUISIp[32];
	/* 0x0284 */ int m_LobbyMUISPort;
	/* 0x0288 */ char m_LobbyMASIp[32];
	/* 0x02a8 */ int m_LobbyMASPort;
	/* 0x02ac */ int m_LastGameCreationTime;
	/* 0x02b0 */ void* m_GuiSetBusyCallback; /* tNW_GuiCallbackPtr */
	/* 0x02b4 */ void* m_GuiRefreshCallback; /* tNW_GuiCallbackPtr */
	/* 0x02b8 */ int m_LastMediusError; /* MediusErrorCode */
	/* 0x02bc */ int m_LastMGCLError; /* MGCL_ERROR_CODE */
	/* 0x02c0 */ int m_LastNetError; /* NetErrorCode */
	/* 0x02c4 */ int m_LastMediusNetError; /* NetErrorCode */
	/* 0x02c8 */ int m_LastGameServerNetError; /* NetErrorCode */
	/* 0x02cc */ int m_NumConsecutiveNetErrors;
	/* 0x02d0 */ bool m_bMediusInitialized;
	/* 0x02d1 */ bool m_bMediusConnected;
	/* 0x02d2 */ bool m_bMUISUpdate;
	/* 0x02d4 */ int m_LastMediusUpdateTime;
	/* 0x02d8 */ int m_MoveGameWorldOnMe;
	/* 0x02dc */ MediusGameInfoResponse m_GameInfo;
	/* 0x047c */ bool m_bForcePlayerReport;
	/* 0x0480 */ int m_LastPlayerReportTime;
	/* 0x0484 */ bool m_bForceWorldReport;
	/* 0x0488 */ int m_LastWorldReportTime;
	/* 0x048c */ MediusWorldReport m_WorldReport;
	/* 0x060c */ bool m_bUpdateLadderStatsPending;
	/* 0x0610 */ int m_UpdateLadderStatsStatus; /* MediusCallbackStatus */
	/* 0x0614 */ bool m_bGetLadderStatsPending;
	/* 0x0618 */ int *m_LadderStatDest;
	/* 0x061c */ int m_GetLadderStatsStatus; /* MediusCallbackStatus */
	/* 0x0620 */ bool m_bUpdateClanStatsPending;
	/* 0x0624 */ int m_UpdateClanStatsStatus; /* MediusCallbackStatus */
	/* 0x0628 */ bool m_bAccountUpdateStatsPending;
	/* 0x062c */ int m_AccountUpdateStatsStatus; /* MediusCallbackStatus */
	/* 0x0630 */ bool m_bWaitingForJoinResponse;
	/* 0x0634 */ int m_JoinResponse; /* eNW_JoinResponse */
	/* 0x0638 */ short int superCheat;
	/* 0x063c */ int TimeBanditsHack;
	/* 0x0640 */ int sendMessageToPlayerClient[10];
	/* 0x0668 */ int sendMessageData[10];
	/* 0x0690 */ int receivedMessage;
	/* 0x0694 */ int receivedMessageData;
	/* 0x0698 */ int receivedMessagePlayerIdx;
	/* 0x069c */ int m_LastPacketReceived[10];
	/* 0x06c4 */ bool m_bSessionMasterLagging;
	/* 0x06c5 */ char m_ClientIndexRemapper[256];
	/* 0x07c8 */ int m_LastUdpPacketReceived[10];
	/* 0x07f0 */ int m_LastUdpPacketReceivedFromAnyone;
	/* 0x07f4 */ char m_RussiaHouseTransportFlagHack;
	/* 0x07f5 */ char playerHasBeenDeleted[10];
	/* 0x07ff */ char deletedPlayerName[10][16];
	/* 0x089f */ char deletedPlayerTeam[10];
	/* 0x08ac */ int deletedPlayerAccountId[10];
	/* 0x08d4 */ MediusSystemMessageEntry SystemMessageQueue[3];
	/* 0x1534 */ int myUDPBindPort;
	/* 0x1538 */ TourneyRoundInfo tourneyRoundInfo;
	/* 0x15a4 */ bool tourneyYouAreEliminated;
	/* 0x15a8 */ int m_BlockedPlayers[16];
	/* 0x15e8 */ int m_BlockedPlayerQueueIdx;
	/* 0x15ec */ tNW_DownloadedTweaks DLTweaks;
	/* 0x1678 */ bool fastNwUpdate;
} tNW_Info;


#endif // _LIBDLSP_TYPES_H_
