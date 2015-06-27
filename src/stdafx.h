#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <comdef.h>
#include <comutil.h>

#include <string>
#include <vector>

#include <httpserv.h>
#include <lua.hpp>

// iislua
#include "iis_lua_const.h"
#include "iis_lua_util.h"

#include "iis_lua_api.h"

// iis http module interface
#include "cmoduleconfiguration.h"
#include "cluahttpmodule.h"
#include "cluahttpmodulefactory.h"
#include "cluahttpstoredcontext.h"