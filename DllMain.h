#pragma once


// Standard imports
#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_set>
#include <mutex>

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <vector>
#include <TlHelp32.h>
#include <tchar.h>
#include <map>

#include "detours.h"


#include "Settings/Settings.h"
#include "Settings/Color.h"

#include "Configs.h"

//ImGUI imports
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_internal.h"

#include "Menu.h"

#include "Renderer.h"
#include "Singleton.h"
#include "Offsets.h"
#include "Radar.h"
#include "GUI/Info.h"
#include "Hacks.h"
#include "EntityList.h"
#include "Camera.h"
#include "bot/FishingBot.h"
#include "bot/GrindBot.h"
#include "WoWTypes.h"
#include "Globals.h"
#include "GInterface.h"
#include "Utils.h"




class pDll {
public:
	static void bot(WObject* localplayer);
	static void LoopFuncs();
};
