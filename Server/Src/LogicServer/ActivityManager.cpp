#include <stdafx.h>
#include "ActivityManager.h"
#include "..\GameServer\GameService.h"
#include "Sqlite\CppSQLite3.h"
#include "Utility\CommonFunc.h"
#include "Utility\Log\Log.h"
#include "DataPool.h"
#include "GlobalDataMgr.h"

CActivityManager::CActivityManager()
{

}

CActivityManager::~CActivityManager()
{

}

CActivityManager* CActivityManager::GetInstancePtr()
{
	static CActivityManager _StaticMgr;

	return &_StaticMgr;
}
