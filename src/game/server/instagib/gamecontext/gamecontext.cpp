#include <game/server/gamecontext.h>
#include <game/server/player.h>

void CGameContext::SetPlayerLastAckedSnapshot(int ClientId, int Tick)
{
	if(ClientId < 0 || ClientId >= MAX_CLIENTS)
		return;

	if(!m_apPlayers[ClientId])
		return;

	m_apPlayers[ClientId]->m_LastAckedSnapshot = Tick;
}
