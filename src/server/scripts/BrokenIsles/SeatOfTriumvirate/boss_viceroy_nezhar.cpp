/*
 * 
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

#include "ScriptMgr.h"
#include "seat_of_triumvirate.h"

enum Spells
{
};

// 124309
struct boss_viceroy_nezhar : public BossAI
{
    boss_viceroy_nezhar(Creature* creature) : BossAI(creature, DATA_VICEROY_NEZHAR) { }

    void ScheduleTasks() override
    {
    }

    void ExecuteEvent(uint32 /*eventId*/) override
    {
    }
};

void AddSC_boss_viceroy_nezhar()
{
    RegisterCreatureAI(boss_viceroy_nezhar);
}
