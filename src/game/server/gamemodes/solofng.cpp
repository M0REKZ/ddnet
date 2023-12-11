#include <engine/server.h>
#include <engine/shared/config.h>
#include <game/mapitems.h>
#include <game/server/entities/character.h>
#include <game/server/entities/flag.h>
#include <game/server/gamecontext.h>
#include <game/server/player.h>
#include <game/server/score.h>
#include <game/version.h>

#include "solofng.h"

CGameControllerSoloFng::CGameControllerSoloFng(class CGameContext *pGameServer) :
	CGameControllerBaseFng(pGameServer)
{
	m_pGameType = g_Config.m_SvTestingCommands ? "solofng-test" : "solofng";
}

CGameControllerSoloFng::~CGameControllerSoloFng() = default;

void CGameControllerSoloFng::Tick()
{
	CGameControllerBaseFng::Tick();
}

void CGameControllerSoloFng::OnCharacterSpawn(class CCharacter *pChr)
{
	CGameControllerBaseFng::OnCharacterSpawn(pChr);
}

int CGameControllerSoloFng::OnCharacterDeath(class CCharacter *pVictim, class CPlayer *pKiller, int WeaponID)
{
	CGameControllerBaseFng::OnCharacterDeath(pVictim, pKiller, WeaponID);
	return 0;
}

bool CGameControllerSoloFng::OnEntity(int Index, int x, int y, int Layer, int Flags, bool Initial, int Number)
{
	CGameControllerBaseFng::OnEntity(Index, x, y, Layer, Flags, Initial, Number);
	return false;
}

void CGameControllerSoloFng::Snap(int SnappingClient)
{
	CGameControllerBaseFng::Snap(SnappingClient);
}