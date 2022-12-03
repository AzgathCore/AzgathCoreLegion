/*
 * Copyright 2023 AzgathCore
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
void AddSC_custom_npcs();
void AddSC_solocraft();
void AddSC_LFG_SoloMode();
void AddSC_save_on_levelup();
void AddSC_Duel_Reset();
void AddSC_XpWeekend();
void AddSC_premium_account();
void AddSC_heirloom_mount_tempfix();
void AddSC_azgath_guid_flying();
void AddSC_azgath_gift_mount();
void AddSC_azgath_legit_quest_bypass();

// ADM declaration begin
// ADM declaration end

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
    AddSC_custom_npcs();
	AddSC_solocraft();
	AddSC_LFG_SoloMode();
	AddSC_save_on_levelup();
	AddSC_Duel_Reset();
	AddSC_XpWeekend();
	AddSC_premium_account();
	AddSC_heirloom_mount_tempfix();
	AddSC_azgath_guid_flying();
	AddSC_azgath_gift_mount();
	AddSC_azgath_legit_quest_bypass();

    // ADM call begin
    // ADM call end
}
