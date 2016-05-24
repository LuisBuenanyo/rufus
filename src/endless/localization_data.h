/*
 * Rufus: The Reliable USB Formatting Utility
 * Localization tables - autogenerated from resource.h
 * Copyright © 2013-2015 Pete Batard <pete@akeo.ie>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <windows.h>
#include "resource.h"
#include "localization.h"

#define LOC_CTRL(x)  { #x, x }
#define LOC_CTRL_HTML(x)  { #x, HTML_ELEM_##x }
#define LOC_DLG(x)   { x, NULL, {NULL, NULL} }

// Control IDs
const loc_control_id control_id[] = {
	// The dialog IDs must come first
	LOC_CTRL(IDD_DIALOG),
	LOC_CTRL(IDD_ENDLESSUSBTOOL_DIALOG),
	LOC_CTRL_HTML(FirstPageTitle),
	LOC_CTRL_HTML(TryEndlessButton),
	LOC_CTRL_HTML(TryEndlessText),
	LOC_CTRL_HTML(InstallEndlessButton),
	LOC_CTRL_HTML(InstallEndlessText),
	LOC_CTRL_HTML(CompareOptionsLink),
	LOC_CTRL_HTML(SelectFilePreviousButton),
	LOC_CTRL_HTML(SelectFileNextButton),
	LOC_CTRL_HTML(SelectFilePageTitle),
	LOC_CTRL_HTML(SelectFileSubtitle),
	LOC_CTRL_HTML(ExistingImageFile),
	LOC_CTRL_HTML(DownloadNewImage),
	LOC_CTRL_HTML(OfflineText),
	LOC_CTRL_HTML(ExtraOfflineText),
	LOC_CTRL_HTML(LightVersionText),
	LOC_CTRL_HTML(LightDownloadSubtitle),
	LOC_CTRL_HTML(LightDownloadDescription),
	LOC_CTRL_HTML(DownloadLightButton),
	LOC_CTRL_HTML(FullVersionText),
	LOC_CTRL_HTML(FullDownloadSubtitle),
	LOC_CTRL_HTML(FullDownloadDescription),
	LOC_CTRL_HTML(DownloadFullButton),
	LOC_CTRL_HTML(SelectUSBPreviousButton),
	LOC_CTRL_HTML(SelectUSBNextButton),
	LOC_CTRL_HTML(SelectUSBPageTitle),
	LOC_CTRL_HTML(SelectUSBSubtitle),
	LOC_CTRL_HTML(USBDisksFound),
	LOC_CTRL_HTML(NewDiskNameLabel),
	LOC_CTRL_HTML(NewDiskSizeLabel),
	LOC_CTRL_HTML(AgreementCheckboxText),
	LOC_CTRL_HTML(InstallingPageTitle),
	LOC_CTRL_HTML(SecureBootLabel),
	LOC_CTRL_HTML(SecureBootText1),
	LOC_CTRL_HTML(SecureBootText2),
	LOC_CTRL_HTML(SecureBootHowTo),
	LOC_CTRL_HTML(InstallCancelButton),
	LOC_CTRL_HTML(ThankYouPageTitle),
	LOC_CTRL_HTML(CloseAppButton),	
	LOC_CTRL_HTML(ThankYouMessage),
	LOC_CTRL_HTML(InstallerVersion),
	LOC_CTRL_HTML(InstallerLanguage),
	LOC_CTRL_HTML(InstallerContent),
	LOC_CTRL_HTML(SecureBootReminder1),
	LOC_CTRL_HTML(SecureBootReminder2),
	LOC_CTRL_HTML(SecureBootHowToReminder),
	LOC_CTRL_HTML(ErrorPageTitle),
	LOC_CTRL_HTML(CloseAppButton1),
	LOC_CTRL_HTML(ErrorMessage),
	LOC_CTRL_HTML(ErrorMessageSuggestion),
	LOC_CTRL_HTML(EndlessSupport),
	LOC_CTRL_HTML(DownloadButton),
	LOC_CTRL(MSG_020),
	LOC_CTRL(MSG_021),
	LOC_CTRL(MSG_022),
	LOC_CTRL(MSG_023),
	LOC_CTRL(MSG_024),
	LOC_CTRL(MSG_025),
	LOC_CTRL(MSG_046),
	LOC_CTRL(MSG_049),
	LOC_CTRL(MSG_052),
	LOC_CTRL(MSG_061),
	LOC_CTRL(MSG_081),
	LOC_CTRL(MSG_082),
	LOC_CTRL(MSG_086),
	LOC_CTRL(MSG_095),
	LOC_CTRL(MSG_105),
	LOC_CTRL(MSG_107),
	LOC_CTRL(MSG_201),
	LOC_CTRL(MSG_202),
	LOC_CTRL(MSG_203),
	LOC_CTRL(MSG_210),
	LOC_CTRL(MSG_211),
	LOC_CTRL(MSG_212),
	LOC_CTRL(MSG_222),
	LOC_CTRL(MSG_224),
	LOC_CTRL(MSG_225),
	LOC_CTRL(MSG_226),
	LOC_CTRL(MSG_227),
	LOC_CTRL(MSG_238),
	LOC_CTRL(MSG_239),
	LOC_CTRL(MSG_261),
	LOC_CTRL(MSG_300),
	LOC_CTRL(MSG_301),
	LOC_CTRL(MSG_302),
	LOC_CTRL(MSG_303),
	LOC_CTRL(MSG_304),
	LOC_CTRL(MSG_305),
	LOC_CTRL(MSG_306),
	LOC_CTRL(MSG_307),	
	LOC_CTRL(MSG_308),
	LOC_CTRL(MSG_309),
	LOC_CTRL(MSG_310),
	LOC_CTRL(MSG_311),
	LOC_CTRL(MSG_312),
	LOC_CTRL(MSG_313),
	LOC_CTRL(MSG_314),
	LOC_CTRL(MSG_400),
	LOC_CTRL(MSG_401),
	LOC_CTRL(MSG_402),
	LOC_CTRL(MSG_403),
};

// Dialog data
loc_dlg_list loc_dlg[] = {
	LOC_DLG(IDD_DIALOG),
	LOC_DLG(IDD_ENDLESSUSBTOOL_DIALOG),
};

extern BOOL global_is_default_localization;
