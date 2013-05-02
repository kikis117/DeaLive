// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#include "Store.h"
#include "Deals.h"

#include <iostream>


#include <tchar.h>

using namespace std;


	enum type{
		Coffee,
		Drink,
		Food
	};


#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit
#define _UNICODE

#include <atlbase.h>
#include <atlstr.h>
#include <atldbcli.h>

// TODO: reference additional headers your program requires here
